#include <iostream>
using namespace std;
void total(string day,float totalpurchase,float amount);
main()
{
string day;
int totalpurchase;
float amount;
total(day,totalpurchase,amount);
}
void total(string day,float totalpurchase,float amount)
{
while(true)
{
cout <<"enter a day:";
cin >> day;
cout <<"enter total purchase:";
cin >> totalpurchase;
amount = (10.0/100.0)*totalpurchase;
if(day == "sunday")
{
cout <<"amount is:" << amount << endl;
} 
}
}
