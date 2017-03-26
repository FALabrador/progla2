#include <iostream>
using namespace std;

int main(){
	float usd[3] = {0.020, 0.021, 0.022}, 
		eur[3] = {0.018,  0.019,  0.020}, 
		jpy[3] = {2.22, 2.44, 2.67}, 
		gbp[3] = {0.016, 0.015, 0.015};
	int yr=2017, php=0;
	float totalUSD[3], totalEUR[3], totalJPY[3], totalGBP[3];
	cout << "Base Currecy: PHP" << endl;
	for(int i=0; i<3; i++){
		cout << yr << endl;
		yr--;
		cout << "USD: " << usd[i] <<endl;
		cout << "EUR: " << eur[i] <<endl;
		cout << "JPY: " << jpy[i] <<endl;
		cout << "GBP: " << gbp[i] <<endl;
		cout << endl;
	}
	
	cout << "Enter amount in PHP: "; 
	cin >> php;
	cout << endl;
	
	for(int i=0; i<3; i++){
		totalUSD[i]=php*usd[i];
		totalEUR[i]=php*eur[i];
		totalJPY[i]=php*jpy[i];
		totalGBP[i]=php*gbp[i];
	}
	
	int yr1=2017;
	for(int i=0; i<3; i++){
		cout << endl << yr1;
		yr1--;
		cout << "\nPHP\tUSD\tEUR\tJPY\tGBP\t" << endl;
			cout << php << "\t" <<totalUSD[i] << "\t" <<totalEUR[i] << "\t" << totalJPY[i] << "\t" << totalGBP[i] << "\t" << endl;
		}
	return 0;
}
