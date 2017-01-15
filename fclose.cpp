#include <stdio.h>
#include<iostream>
using namespace std;
main(){
    FILE *myFile;
    myFile = fopen("sample.txt", "r");

    //read file into array
    int i, sum = 0;
    int numberArray[5];

    for(int i=0; i<5; i++){
        fscanf(myFile, "%d", &numberArray[i]);
        sum+=numberArray[i];
    }
    fclose(myFile);
    myFile = fopen("sample.txt", "w");
    for(int i=0; i<5; i++){
        fprintf(myFile, "%d", numberArray[i]);
	fprintf(myFile, "%d", numberArray[i]);
    }
    cout << sum;
}
