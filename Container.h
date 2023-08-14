#pragma once
#include <iostream>
#include <array>
#include <vector>
#include <forward_list>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <algorithm>
void Array_Container()
{
	std::array<int, 4> myArray{1, 2, 3, 4};

	for (const auto& e : myArray)
	{
		std::cout << e << " "; 
	}
	std::cout << std::endl;

	for (std::array<int, 4>::iterator itr = myArray.begin(); itr != myArray.end(); ++itr)
	{
		std::cout << *itr << " "; 
	}
	std::cout << std::endl;

	for (int i = 0; i < myArray.size(); ++i)
	{
		std::cout << myArray[i] << " ";
	}
	std::cout << std::endl;
}


void Vector_Container()
{
	std::vector<int> v;
	v.push_back(3);
	v.push_back(2);
	v.push_back(1);
	v.pop_back();
	v.resize(100);

	sort(v.begin(), v.end());
}

void Forwardlist_Container()
{
	std::forward_list<int> list {10, 11, 1, 2};
	list.push_front(1);
	list.pop_front();

	list.sort();

	for (const auto& e : list)
	{
		std::cout << e << " ";
	}
	std::cout << std::endl;
}

void List_Container()
{
	std::list<int> list {10, 11, 1, 2};

	list.push_front(1);
	list.push_back(2);
	list.pop_front();
	list.pop_back();

	list.sort();

	for (const int& e : list)
	{
		std::cout << e << " ";
	}
	std::cout << std::endl;
}

void Deque_Container()
{
	std::deque<int> deq{3, 4, 5};

	deq.push_back(1);
	deq.push_front(2);

	deq.pop_back();
	deq.pop_front();
}


void StackAndQueue_Container()
{
	std::stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	
	s.pop();

	/*while (!s.empty())
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}*/


	std::stack<int> temp(s);

	while (!temp.empty())
	{
		std::cout << temp.top() << std::endl;
		temp.pop();
	}

	
	std::queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);

	std::queue<int>temptation(q);

	while (!temptation.empty())
	{
		std::cout << temptation.front() << " ";
		temptation.pop();
	}
	std::cout << std::endl;



	// priority_queue는 queue에 들어가있음
	// #include <queue>만 해주면 됨.
	// 우선순위에 의해서 정렬되어 나옴.
	std::priority_queue<int> pq;
	pq.push(6);
	pq.push(3);
	pq.push(5);

	std::priority_queue<int>temp_1(pq);
	
	while (!temp_1.empty())
	{
		std::cout << temp_1.top() << " ";
		temp_1.pop();
	}
	std::cout << std::endl;


	struct App
	{
		int priority;
		std::string name;

		bool operator<(const App& app) const
		{
			return this->priority < app.priority;
		}
	};

	std::priority_queue<App> apppriority;
	apppriority.push({ 1, "notepad" });
	apppriority.push({ 5, "vscode" });
	apppriority.push({ 3, "lalala" });

	std::cout << apppriority.top().name << std::endl;
}


void Set_Container()
{
	// 정렬 되어있는 형태임.
	// 데이터들을 자동으로 정렬함.


	// 고유한 값들이 정렬되어있는 것.
	std::set<int>s;
	s.insert(1);
	s.insert(9);
	s.insert(6);
	s.insert(4);


	// 범위 기반 반복문이 되면 iterator가 있다는 뜻
	for (int e : s)
	{
		std::cout << e << std::endl;
	}


	// 고유한 값들이 정렬되어있지 않은 것.
	std::unordered_set <int> us;
	
	us.insert(1);
	us.insert(8);
	us.insert(4);
	us.insert(3);

	for (int e : us)
	{
		std::cout << e << std::endl;
	}

}

void Container()
{
	Set_Container();
}