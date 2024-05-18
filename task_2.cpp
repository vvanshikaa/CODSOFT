/*Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/
#include<iostream>
using namespace std;
int main()
{
 char ope;
 float num1,num2;
cout<<"Choose the Operator +,-,*,/ ";
cin>>ope;

cout<<"Enter two numbers : ";
cin>>num1>>num2;

switch(ope)
{
    case'+':
    cout<<num1+num2;
    break;

    case'-':
    cout<<num1-num2;
    break;

    case'*':
    cout<<num1*num2;
    break;

    case'/':
    cout<<num1/num2;
    break;

    default:
    cout<<"Invalid Operator";
}

cout<<"\nThank you";

return 0;
}

