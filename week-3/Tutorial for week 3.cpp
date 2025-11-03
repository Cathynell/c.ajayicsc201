#include <iostream>
#include <string>
#include <cstdlib>
#include<ctime>
using namespace std;

int main(){
	
	cout<<"Hi! Welcome to the PAU Summer Registration Platform \n";
	cout<<"     \n";
	
	string name;
	//getline(cin, name);
	cout<<"Enter your full name: \n";
	cin>>name;
	
	int student = 1;
	cout<<"Are you a PAU student?(Enter 1 for true, 0 for false): \n";
	cin>>student;
	
	
	int course;
	cout<<"What course are you studying? (Enter any number between 1-5 that reps your course): \n";
	cin>>course;
	
	int Location;
	cout<<"Where do you stay? (Enter any number between 1-5 that reps your location): \n";
	cin>>Location;
	
	
	

	int days=0;
	string courseName;
	double reg_fee=0.0;
	
	if(course == 1){ courseName = "Photography", days= 3, reg_fee = 10000 ; }
	else if(course == 2){ courseName = "Painting", days = 5, reg_fee = 8000 ; }
	else if(course == 3){ courseName = "Fish Farming", days = 7, reg_fee = 15000 ; }
	else if(course == 4){ courseName = "Baking", days = 5, reg_fee = 13000 ; }
	else if(course == 5){ courseName = "Public Speaking", days = 2, reg_fee = 5000 ; }
	else{
		cout<<"Invalid course entry! \n";
		return 1;
	}
	

	string LocName;
	double Loc_price;
	
	if(Location == 1){ LocName = "Camp House A", Loc_price = 10000 ;}
	else if(Location ==2){ LocName = "Camp House B", Loc_price = 2500 ;}
	else if(Location ==3){ LocName = "Camp House C", Loc_price = 5000 ;}
	else if(Location ==4){ LocName = "Camp House D", Loc_price = 13000 ;}
	else if(Location ==5){ LocName = "Camp House E", Loc_price = 5000 ;}
	else{
		cout<<"Invalid Location Entry! \n";
		return 1;
	}
	
	double lodgingCost=Loc_price * days;
	double regDiscount=0.0;
	double lodgingDiscount=0.0;
	double promo=0.0;
	double total= reg_fee + lodgingCost;
	
	if(student==1 &&(Location==1 || Location==2)){
		lodgingDiscount=0.05*lodgingCost;
		lodgingCost-=lodgingDiscount;
	}
	if((days>5)||(reg_fee>12000)){
		regDiscount=0.03*reg_fee;
		reg_fee-=regDiscount;
	}
	
	srand(time(0));
	int r= rand() % 100+1;
	if(r==7 || r==77){
		promo= 500;
	}
	
	cout<<"********************** \n";
	cout<<"HERE IS YOUR INFORMATION \n";
	cout<<"Name: "<<name<<endl;
	cout<<"PAU Student: "<<(student? "Yes" : "No")<<endl;
	cout<<"Course: "<<courseName<<endl;
	cout<<"Duration: "<<days<<endl;
	cout<<"Registration Cost: NGN "<<reg_fee<<endl;
	cout<<"Lodging Cost: NGN "<<lodgingCost<<endl;
	cout<<"Promo applied: NGN "<<promo<<endl;
	cout<<"Total: NGN "<<total<<endl;
	
	
	
	
	

	
	
}