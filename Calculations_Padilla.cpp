/* Briana Padilla, COSC 1436-57001, Replit.com, This is a program to work with various arithmetic operators in C++ and conditions. */ 

#include <iostream>
using namespace std;
int main() { 
  
double number1;
double number2;

int number3;
int number4;

double addition;
double subtraction;
double multiplication;
double division;
int modulus;

cout<<"Enter 1st number "<<endl;
cin>>number1;

cout<<"Enter 2nd number "<<endl;
cin>>number2;
if (number2 == 0) {
  cout<<"Number 0 is not permitted by math. Enter other number "<<endl;
  cin>>number2;
}

cout<<"Enter 3rd number "<<endl;
cin>>number3;

cout<<"Enter 4th number "<<endl;
cin>>number4;
if (number4 == 0) {
  cout<<"Number 0 is not permitted by math. Enter other number "<<endl;
  cin>>number4;
}

//Begin Calculations
addition = number1 + number2;
cout<<"The sum of 1st & 2nd number is "<<addition<<endl;

subtraction = number1 - number2;
cout<<"The difference of 1st & 2nd number is "<<subtraction<<endl;

multiplication = number1 * number2;
cout<<"The product of 1st & 2nd number is "<<multiplication<<endl;

division = number1 / number2;
cout<<"The quotient of 1st & 2nd number is "<<division<<endl;

modulus = number3 % number4;
cout<<"The remainder of 3rd & 4th number is "<<modulus<<endl;

return 0;

}