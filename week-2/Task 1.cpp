#include <iostream>
#include <cmath>
using namespace std;
//sqrt() pow()
int main(){
	double opp;
	double adj;
	
	cout<<"Enter the opposite: \n";
	cin>>opp;
	cout<<"Enter the adjacent: \n";
	cin>>adj;
	
	double A= pow(opp,2)+ pow(adj,2);
	double Hyp=sqrt(A);
	
	cout<<"The Hypotenuse is "<<Hyp<<endl;
	
}