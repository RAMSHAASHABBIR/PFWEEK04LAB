#include <iostream>
using namespace std;
void greaterone(int number1 , int number2);
main()
{
int number1;
int number2;
greaterone(number1 , number2);
}
void greaterone(int number1 , int number2) 
{
while(true)
{
cout <<"enter a number:";
cin >> number1;
cout <<"enter a number:";
cin >> number2;
if(number1>number2)
{
cout <<"greater number is:" << number1 << endl;
}
if(number2>number1)
{
cout << "greater number is:" << number2 << endl;
}
}
}