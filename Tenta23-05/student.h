#pragma once
#include <iostream>
#include <vector>

using namespace std;

struct Student {
	
	vector <Student>dataLista;
	vector <Student>nitLista;


	string name;
	int age;
	string mail;
	float grade;
	string program;

	void readFile(Student student, string filename);

	void printList(vector<Student>printList);

	void writeListData(vector <Student>writeList);

	void writeListNIT(vector <Student>writeList);

	void sortList(vector<Student>sortList);

	bool operator < (const Student& student) const
	{
		// Return 'true' if this object's grade is more than 'student's grade.
		return grade > student.grade;
	}

};