#include "student.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;
void Student::readFile(Student student, string filename)
{
	string line;

	ifstream myReadFile(filename);
	while (getline(myReadFile, line)) {

		stringstream ss(line);
		string stringAge;
		string stringGrade;
		getline(ss, student.name, ',');
		getline(ss, stringAge, ',');
		student.age = stoi(stringAge);
		getline(ss, student.mail, ',');
		getline(ss, stringGrade, ',');
		student.grade = stof(stringGrade);
		getline(ss, student.program);

		if (student.program == "DTA") {
			dataLista.push_back(student);
		}
		else {
			nitLista.push_back(student);
		}
	}

	myReadFile.close();




}

void Student::printList(vector<Student> printList)
{
	for (int i = 0; i < size(printList); i++) {
		cout << printList[i].name << " " << printList[i].program << printList[i].grade << " " << endl;
	}
}

void Student::writeListData(vector<Student> writeList)
{
	ofstream minFil("DTAlist.txt", ios::app);
	sort(writeList.begin(), writeList.end());
	for (int i = 0; i < 60; i++) {
		minFil << writeList[i].name << " " << writeList[i].age << " " << writeList[i].mail << " " << writeList[i].grade << " " << writeList[i].program << endl;
		cout << writeList[i].name << " " << writeList[i].age << " " << writeList[i].mail << " " << writeList[i].grade << " " << writeList[i].program << endl;

	}
	minFil.close();



}

void Student::writeListNIT(vector<Student> writeList)
{
	ofstream minFil("NITlist.txt", ios::app);
	sort(writeList.begin(), writeList.end());
	for (int i = 0; i < 85; i++) {
		minFil << writeList[i].name << " " << writeList[i].age << " " << writeList[i].mail << " " << writeList[i].grade << " " << writeList[i].program << endl;
		cout << writeList[i].name << " " << writeList[i].age << " " << writeList[i].mail << " " << writeList[i].grade << " " << writeList[i].program << endl;

	}
	minFil.close();

}

void Student::sortList(vector<Student> sortList)
{
	
		

}


