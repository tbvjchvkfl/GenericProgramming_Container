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
#include <map>
#include <bitset>
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



	// priority_queue�� queue�� ������
	// #include <queue>�� ���ָ� ��.
	// �켱������ ���ؼ� ���ĵǾ� ����.
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
	// ���� �Ǿ��ִ� ������.
	// �����͵��� �ڵ����� ������.


	// ������ ������ ���ĵǾ��ִ� ��.
	std::set<int>s;
	s.insert(1);
	s.insert(9);
	s.insert(6);
	s.insert(4);


	// ���� ��� �ݺ����� �Ǹ� iterator�� �ִٴ� ��
	for (int e : s)
	{
		std::cout << e << std::endl;
	}


	// ������ ������ ���ĵǾ����� ���� ��.
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

void Map_Container()
{
	std::map<std::string, std::string> myMap;

	myMap.insert({ "+", "���ϱ⿬�����̸鼭 ���� �������Դϴ�." });
	myMap.insert({ ">>", "��Ʈ ����Ʈ �������Դϴ�." });
	myMap.insert({ "new", "���� �޸� �Ҵ� �������Դϴ�. delete �����ϼ���." });

	std::cout << myMap["+"] << std::endl;
	myMap["-"] = "���� �������Դϴ�.";

	for (auto e : myMap)
	{

	}
}

void bit_set_Container()
{
	std::bitset<8> flag;

	flag.set(1, true);
	flag[2] = true;

	std::cout << flag << std::endl;
}



void Practice()
{
	struct Student
	{
		int number;
		int score;
		std::string name;
	};


	std::map<int, Student> students
	{
		{ 1, {1,100, "Doggy"}},
		{ 2, {2, 50, "Kitty"}},
		{ 3, {3, 90, "Piggy"}},
		{ 4, {4, 20, "Bunny"}}
	};

	students.insert(std::make_pair<int, Student>(5, { 5,80,"SeungMin" }));

	for (auto student : students)
	{
		std::cout << student.second.number << " : " << student.second.name << ", " << student.second.score << std::endl;
	}



	std::multimap<int, int>mm;
	mm.insert({ 1,40 });
	mm.insert({ 2,30 });
	mm.insert({ 1,50 });
	


	for (auto e : mm)
	{
		std::cout << e.first << " : " << e.second << std::endl;
	}
}



// elipse keyword
// ���� ��ȣ
// ' ... '
void f(int x, ...) 
{

}

// ���� ��ǥ�� ����ϰ� ���� ��
void Pair_Container()
{
	// �������� ��ǥ ����, �ϳ��� x,y ��ǥ�� ����� �� pair��� ���ø��� ���
	// ��, 2���� Ÿ�Ը�! ����� ��.
	std::pair<int, int> pt1;
	pt1.first = 1;
	pt1.second = 2;

	pt1 = { 2, 3 };

	pt1 = std::make_pair<int, int>(3, 3);


	// �������� Ÿ���� Ư��ȭ��ų �� ����.
	std::tuple<int, int, std::string> st1;
	
	st1 = { 1, 100, "Kitty" };
	st1 = std::make_tuple<int, int, std::string>(2, 50, "Doggy");

	
	// tuple���� 0��° ���Ҹ� �������� �ڵ�
	// ����... �ʹ� ��ƴ�...�Ф�
	std::cout << std::get<0>(st1) << std::endl;


	for (int i = 0; i < std::tuple_size<std::tuple<int, int, std::string>>::value; i++)
	{

	}
}

void Container()
{
	//Set_Container();
	
	bit_set_Container();
}


