#include <iostream>
using namespace std;

int main(){
	double x;
	double y;
	
	cout<<"Enter the first number:\n";
	cin>>x;
	cout<<"Enter the second number:\n";
	cin>>y;
	
	//sum of x and y
	double sum = x+y;
	cout<<"This is the sum of the numbers: \n"<<sum<<endl;
	
	//Difference between x and y
	double diff = x-y;
	cout<<"This is the difference between the numbers: \n"<<diff<<endl;
	
	//Product of x and y
	double product = x*y;
	cout<<"This is the product of x and y: \n"<<product<<endl;
}