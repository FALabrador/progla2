#include <iostream>
#include <cstring>
using namespace std;

int main(){ 
	
	int result;
	char binaryString[10];
	strcpy(binaryString, "1010010010");
	
		for (int i=0; i<10; i++){
			if(binaryString[i]=='1'){
			result+=1;
		}
	}
   	cout<<result;
	return 0;
}
