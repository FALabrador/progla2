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
	student stud[3];
	Prof prof[3];
	Staff staff[3];
	for(int i=0; i<3; i++){
		cout << "Enter Student" << i+1 << "'s Name: ";
		cin >> stud[i].name;
		cout << "Enter Student" << i+1 << "'s ID Number: ";
		cin >> stud[i].id_num;
		cout << "Enter Student" << i+1 << "'s Number of Subjects: ";
		cin >> stud[i].num_of_subjects;
		cout << "Enter Student" << i+1 << "'s Number of Books: ";
		cin >> stud[i].num_books;
		cout << endl;

		cout << "Enter Professor" << i+1 << "'s Name: ";
		cin >> prof[i].name;
		cout << "Enter Professor" << i+1 << "'s ID Number: ";
		cin >> prof[i].id_num;
		cout << "Enter Professor" << i+1 << "'s TIN: ";
		cin >> prof[i].tin;
		cout << endl;
	
		cout << "Enter Staff" << i+1 << "'s Name: ";
		cin >> staff[i].name;
		cout << "Enter Staff" << i+1 << "'s ID Number: ";
		cin >> staff[i].id_num;
		cout << "Enter Staff" << i+1 << "'s SSS: ";
		cin >> staff[i].sss;
		cout << endl;
	}
	
	for(int i=0; i<3; i++){
		cout << "Student" <<i+1<< "'s Name: " << stud[i].name << endl;
		cout << "Student" <<i+1<< "'s' ID Number: " << stud[i].id_num << endl;
		cout << "Student" <<i+1<< "'s'Number of Subjects: " << stud[i].num_of_subjects << endl;
		cout << "Student" <<i+1<< "'s Number of Books: " << stud[i].num_books << endl << endl;
		cout << "Professor"<< i+1 <<"'s Name: " << prof[i].name << endl;
		cout << "Professor"<< i+1 <<"'s ID Number: " << prof[i].id_num << endl;
		cout << "Professor"<< i+1 <<"'s TIN: " << prof[i].tin << endl << endl;
		cout << "Staff"<< i+1 <<"'s Name: "<< staff[i].name << endl;
		cout << "Staff"<< i+1 <<"'s ID Number: " << staff[i].id_num << endl;
		cout << "Staff"<< i+1 <<"'s SSS: " << staff[i].sss << endl;
	}
}
