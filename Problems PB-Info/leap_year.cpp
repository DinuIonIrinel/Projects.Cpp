#include<iostream>
using namespace std;
int main()
{
int year;
cout<<"Enter the year";
cin>>year;
if(year%4==0 || year%400==0 && year%100!=0)
{
cout<<year<<ends<<"is a leap year";
}
else
{
cout<<year<<ends<<"is not a leap year";
}
}
