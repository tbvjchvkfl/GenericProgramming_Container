#pragma once
#include <iostream>
#include <vector>


class Student
{
	int mNumber;
	int mScore;
	std::string mName;


public:
	void AddStudent(std::vector<Student>& v)
	{
		Student students;
		std::cout << "번호, 이름, 점수를 입력하세요" << std::endl;
		if (std::cin >> students.mNumber >> students.mName >> students.mScore)
		{
			v.push_back(students);
		}
		else
		{
			std::cout << "잘못된 입력입니다." << std::endl;
		}
	}

	void RemoveStudent(std::vector<Student>& v)
	{
		Student students;

		std::cout << "제거할 학생의 번호를 입력하세요" << std::endl;
		int input{};
		if (std::cin >> input)
		{
			for (std::vector<Student>::iterator itr = v.begin(); itr != v.end(); itr++)
			{
				if (itr->mNumber == input)
				{
					v.erase(itr);
				}
			}
		}
	}

	void PrintStudents(std::vector<Student>& v)
	{
		for (Student& e : v)
		{
			if (v.size() == 0)
			{
				std::cout << "입력된 학생이 없습니다. 학생을 추가하세요" << std::endl;
				return;
			}
			std::cout << "---------------------------------------" << std::endl;
			std::cout << " [ " << e.mNumber << " ] " << e.mName << ", " << e.mScore << std::endl;
			std::cout << "---------------------------------------" << std::endl;
		}
	}

	void PrintAverage(const std::vector<Student>& v)
	{
		int total{};
		for (const Student& e : v)
		{
			total += e.mScore;
		}
		total / v.size();
	}

	

};

void Student_Program()
{
	Student students;

	bool IsQuit{ false };

	while (!IsQuit)
	{
		std::vector<Student> vstudent;
		std::cout << "1. 학생 추가" << std::endl;
		std::cout << "2. 학생 제거(번호)" << std::endl;
		std::cout << "3. 전체 학생 출력" << std::endl;
		std::cout << "4. 총점 및 평균" << std::endl;
		std::cout << "5. 평균 이상의 목록" << std::endl;
		std::cout << "6. 종료" << std::endl;
		std::cout << ">" << std::endl;
		int command{};
		std::cin >> command;
		switch (command)
		{
		case 1:
		{
			// 학생 추가
			students.AddStudent(vstudent);
		}
		break;
		case 2:
		{
			// 학생 삭제 ( 번호로 할 것 )
		}
		break;
		case 3:
		{
			// 전체 학생 출력
			students.PrintStudents(vstudent);
		}
		break;
		case 4:
		{
			// 전체 학생의 점수 평균값 출력
		}
		break;
		case 5:
		{
			// 평균 이상이 학생 목록 출력
		}
		break;
		case 6:
		{
			// 종료
			IsQuit = true;
		}
		break;
		default:
		{
			std::cerr << "잘못된 입력입니다." << std::endl;
		}
		break;
		}
	}
}