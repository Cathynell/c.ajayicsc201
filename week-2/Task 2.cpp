#include <iostream>
using namespace std;


int main(){
	double P= 6000;
	double R= 4.25;
	double T = 1;
	
	double I = (P*R*T)/100;
	//cout<<"Interest after One Year is "<<I<<endl;
	
	double B = P + I;
	//cout<<"Balance after One Year is "<<B<<endl; 
	
	cout<<"INTEREST CALCULATION PROGRAM \n";
	cout<<"Enter Starting Balance: "<<P<<endl;
	cout<<"Enter annual interest rate: "<<R<<endl;
	cout<<"Interest after One Year is "<<I<<endl;
	cout<<"Balance after One Year is "<<B<<endl;
}