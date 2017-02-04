#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class basicInfo{
	public:
		string name;
		int id_num;
};

class student : public basicInfo{
	public:
		int num_books;
		int num_of_subjects;
};

class Prof : public basicInfo{
	public:
		int tin;
};

class Staff : public basicInfo{
	public:
		int sss;
};

int main(){
	student stud;
	cout << "Enter Student's Name: ";
	cin >> stud.name;
	cout << "Enter Student's ID Number: ";
	cin >> stud.id_num;
	cout << "Enter Number of Subjects: ";
	cin >> stud.num_of_subjects;
	cout << "Enter Number of Books: ";
	cin >> stud.num_books;
	cout << endl;
	
	Prof prof;
	cout << "Enter Professor's Name: ";
	cin >> prof.name;
	cout << "Enter Professor's ID Number: ";
	cin >> prof.id_num;
	cout << "Enter TIN: ";
	cin >> prof.tin;
	cout << endl;
	
	Staff staff;
	cout << "Enter Staff's Name: ";
	cin >> staff.name;
	cout << "Enter Staff's ID Number: ";
	cin >> staff.id_num;
	cout << "Enter SSS: ";
	cin >> staff.sss;
	cout << endl;
	
	cout << "Student's Name: " << stud.name << endl;
	cout << "Student ID Number: " << stud.id_num << endl;
	cout << "Number of Subjects: " << stud.num_of_subjects << endl;
	cout << "Number of Books: " << stud.num_books << endl << endl;
	cout << "Professor's Name: " << prof.name << endl;
	cout << "Professor's ID Number: " << prof.id_num << endl;
	cout << "TIN: " << prof.tin << endl << endl;
	cout << "Staff's Name: "<< staff.name << endl;
	cout << "Staff's ID Number: " << staff.id_num << endl;
	cout << "SSS: " << staff.sss << endl;	
}
