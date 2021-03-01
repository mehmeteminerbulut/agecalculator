#include <iostream>

using namespace std;

#define currentyear 2021

int main (){
int year, age;
char myname[30];

cout<<"Enter the year you were born and your name \n";
cin>>year>>myname;
cout<<"Your name is: "<<myname;
age=currentyear-year;
cout<<" & Your age is: "<<age;

return 0;
}
