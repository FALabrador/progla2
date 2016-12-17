#include <iostream>
using namespace std;

struct Person{
	int toes=0;
	int knees=0; 
	int shoulder=0;
	int head=0;
};
int main(){
		Person parts;
		cin>>parts.toes;
		cin>>parts.knees;
		cin>>parts.shoulder;
		cin>>parts.head;
	
		cout<<parts.toes<<endl;
		cout<<parts.knees<<endl;
		cout<<parts.shoulder<<endl;
		cout<<parts.head<<endl;
	return 0;
}
