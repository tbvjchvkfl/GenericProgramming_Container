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
		std::cout << "��ȣ, �̸�, ������ �Է��ϼ���" << std::endl;
		if (std::cin >> students.mNumber >> students.mName >> students.mScore)
		{
			v.push_back(students);
		}
		else
		{
			std::cout << "�߸��� �Է��Դϴ�." << std::endl;
		}
	}

	void RemoveStudent(std::vector<Student>& v)
	{
		Student students;

		std::cout << "������ �л��� ��ȣ�� �Է��ϼ���" << std::endl;
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
				std::cout << "�Էµ� �л��� �����ϴ�. �л��� �߰��ϼ���" << std::endl;
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
		int Average{};
		if (v.size() != 0)
		{
			for (const Student& e : v)
			{
				total += e.mScore;
			}
			Average = total / v.size();

			std::cout<< "���� : " << total<< "��� : " << Average << std::endl;
		}
		else
		{
			std::cout << "�л��� ���� ��� ���� �� �� �����ϴ�. �л��� �߰��ϼ���" << std::endl;
			return;
		}
	}

	void PrintAverage_Member(std::vector<Student>& v)
	{
		int total{};
		int Average{};
		for (Student& e : v)
		{
			total += e.mScore;
		}
		Average = total / v.size();

		for (Student& e : v)
		{
			if (e.mScore >= Average)
			{
				std::cout << "---------------------------------------" << std::endl;
				std::cout << " [ " << e.mNumber << " ] " << e.mName << ", " << e.mScore << std::endl;
				std::cout << "---------------------------------------" << std::endl;
			}
		}
	}

};

void Student_Program()
{
	Student students;
	std::vector<Student> vstudent;
	bool IsQuit{ false };

	while (!IsQuit)
	{
		std::cout << "1. �л� �߰�" << std::endl;
		std::cout << "2. �л� ����(��ȣ)" << std::endl;
		std::cout << "3. ��ü �л� ���" << std::endl;
		std::cout << "4. ���� �� ���" << std::endl;
		std::cout << "5. ��� �̻��� ���" << std::endl;
		std::cout << "6. ����" << std::endl;
		std::cout << ">" << std::endl;
		int command{};
		std::cin >> command;
		switch (command)
		{
		case 1:
		{
			// �л� �߰�
			students.AddStudent(vstudent);
		}
		break;
		case 2:
		{
			// �л� ���� ( ��ȣ�� �� �� )
		}
		break;
		case 3:
		{
			// ��ü �л� ���
			students.PrintStudents(vstudent);
		}
		break;
		case 4:
		{
			// ��ü �л��� ���� ��հ� ���
			students.PrintAverage(vstudent);
		}
		break;
		case 5:
		{
			// ��� �̻��� �л� ��� ���
			students.PrintAverage_Member(vstudent);
		}
		break;
		case 6:
		{
			// ����
			IsQuit = true;
		}
		break;
		default:
		{
			std::cerr << "�߸��� �Է��Դϴ�." << std::endl;
		}
		break;
		}
	}
}