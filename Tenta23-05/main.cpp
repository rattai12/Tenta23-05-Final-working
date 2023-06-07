#include <iostream>
#include "student.h"

using namespace std;

int main() {
	Student student;

	student.readFile(student, "Aplicant.txt");
	//student.printList(student.dataLista);
	//student.printList(student.nitLista);
	student.writeListData(student.dataLista);
	student.writeListNIT(student.nitLista);
	


}