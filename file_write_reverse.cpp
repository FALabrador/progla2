#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    FILE *myFile;
    int numberArray[5];

    for(int i = 0 ; i < 5 ; i++){
		cin >> numberArray[i];
	}
    myFile = fopen("sample1.txt", "w");

    for (int i = 4; i >= 0; i--){
        fprintf(myFile, "%d\n", numberArray[i]);
    }
	fclose(myFile);
	return 0;
}
