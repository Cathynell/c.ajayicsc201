#include <iostream>
using namespace std;


int main(){
	double P= 6255.0;
	double R= 4.25;
	double T = 1;
	double I = (P*R*T)/100;
    double B = P + I;

	
	cout<<"INTEREST CALCULATION PROGRAM \n";
	
	cout<<"Starting Balance: "<<P<<endl;
	
	cout<<"Annual interest rate: "<<R<<endl;
	
	cout<<"Interest after Two Years is "<<I<<endl;
	
	cout<<"Balance after Two Years is "<<B<<endl;
}