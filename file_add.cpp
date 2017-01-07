#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	FILE *myFile;
   	myFile = fopen("sample.txt", "w");
    fclose(myFile);
    
    int a;
	int i;
    int numberArray[5];

    for (i = 0; i < 5; i++){
        fscanf(myFile, "%d", &numberArray[i]);
    }
    
    for (i = 0; i < 5; i++){
    	a += numberArray[i];
	}
	cout << a;
}
