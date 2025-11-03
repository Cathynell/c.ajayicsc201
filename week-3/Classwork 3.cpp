#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int num1 = rand()%10;
	int num2 = rand()%10;
	
	
	srand(time(0));
	cout<<"Num 1: "<<num1<<endl;
	cout<<"Num 2: "<<num2<<endl;
	return 0;
	
	if(num1<num2){
	int temp = num1;
	num1 = num2;
	num2 = temp;
	}
	cout<<"-------------------";
	
	
}