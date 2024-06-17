#include <iostream>
using namespace std;

int main(){
	//Declaring variables
	int num1, num2, addition, subtraction, multiplication;
	float division;
	
	//Prompt user to input 2 numbers
	cout<<"Welcome to the Basic calculator:\n";
	
	cout<<"Enter your first number:\t";
	cin>>num1;
	
	cout<<"\nEnter your second number:\t";
	cin>>num2;
	
	//Addition formula
	addition=num1+num2;
	
	//Subtraction formula
	subtraction=num1-num2;
	
	//Mulitiplication formula
	multiplication=num1*num2;
	
	//Division formula
	division=num1/num2;
	
	//Output
	cout<<"\nThe addition of the numbers is:\t"<<addition;
	cout<<"\nThe subtraction of the numbers is:\t"<<subtraction;
	cout<<"\nThe multiplication of the numbers is:\t"<<multiplication;
	cout<<"\nThe division of the numbers is:\t"<<division;
	
	return 0;
}

