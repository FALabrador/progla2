#include <iostream>
using namespace std;

int main(){
	double usd[3] = {0.020, 0.021, 0.022}, 
		eur[3] = {0.018,  0.019,  0.020}, 
		jpy[3] = {2.22, 2.44, 2.67}, 
		gbp[3] = {0.016, 0.015, 0.015};
	int year[3] = {2017, 2016, 2015};
	int php=0;
	double totalUSD[3], totalEUR[3], totalJPY[3], totalGBP[3];
	cout << "Base Currecy: PHP\n" << endl;
	for(int i=0; i<3; i++){
		cout << year[i] << endl;
		cout << "USD: " << usd[i] <<endl;
		cout << "EUR: " << eur[i] <<endl;
		cout << "JPY: " << jpy[i] <<endl;
		cout << "GBP: " << gbp[i] <<endl;
		cout << endl;
	}
	
	//may kulang pa pag mali input ng user dapat may error.
	cout << "Enter amount in PHP: "; 
	cin >> php;
		if(php != 0){
			cout << "Invalid Input." << endl;
			cout << "Enter amount in PHP: ";
			cin >> php;
		}

	for(int i=0; i<3; i++){
		totalUSD[i]=php*usd[i];
		totalEUR[i]=php*eur[i];
		totalJPY[i]=php*jpy[i];
		totalGBP[i]=php*gbp[i];
		
		cout << endl << year[i];
		cout << "\nPHP\tUSD\tEUR\tJPY\tGBP\t" << endl;
		cout << php << "\t" <<totalUSD[i] << "\t" <<totalEUR[i] << "\t" << totalJPY[i] << "\t" << totalGBP[i] << "\t" << endl;
	}
	return 0;
}
