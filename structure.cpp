#include <iostream>
using namespace std;

struct Person{
	int toes=0;
	int knees=0; 
	int shoulder=0;
	int head=0;
};

int main(){
	Person parts[5];
	for (int i=0; i<5; i++){
	cin>>parts[i].toes;
	cin>>parts[i].knees;
	cin>>parts[i].shoulder;
	cin>>parts[i].head;
	}
	for (int i=0; i<5; i++){
	cout<<"Toes: "<<parts[i].toes<<endl;
	cout<<"Knees: "<<parts[i].knees<<endl;
	cout<<"Shoulder: "<<parts[i].shoulder<<endl;
	cout<<"Head: "<<parts[i].head<<endl;
	}
	return 0;
}
