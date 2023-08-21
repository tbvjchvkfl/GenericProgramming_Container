#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>


// 1번 
void EX_1()
{
	

	int col{};
	int row{};

	std::cin >> col >> row;

	std::vector<std::vector<int>> v(col, std::vector<int>(row, -1));

	std::cout << "{" << std::endl;
	for (int i = 0; i < v.size(); i ++)
	{
		std::cout << "{";
		// 벡터로 만들어진 2차원 배열은 이런식으로 해야함.
		for (int j = 0; j < v[i].size(); j++)
		{
			std::cout << v[i][j];
			if (j < v[i].size() - 1)
			{
				std::cout << ", ";
			}
		}
		std::cout << "}";
		if (i < v.size() - 1)
		{
			std::cout << ", " << std::endl;
		}
	}
	std::cout << std::endl << "}" << std::endl;
}

// 2번
//bool Ex_2()
//{
//	std::string str1;
//	std::string str2;
//	std::cin >> str1 >> str2;
//	if (str1 == str2)
//	{
//		std::cout << "true" << std::endl;
//		return true;
//	}
//	else
//	{
//		std::cout << "두 그림은 같은 그림이 아닙니다." << std::endl;
//		std::cout << str1 << ", " << str2 << std::endl;
//	}
//}

bool Ex_2(std::string str1, std::string str2)
{
	std::sort(str1.begin(), str1.end());
	std::sort(str2.begin(), str2.end());

	return str1 == str2;
}


// 3번
char EX_3(const std::string& s)
{
	std::map<char, int> table;

	char maxChar{};
	int max{ -1 };
	for (const auto& e : s)
	{
		table[e]++;

		if (table[e] > max)
		{
			maxChar = e;
			max = table[e];
		}
	}
	
	return maxChar;
}