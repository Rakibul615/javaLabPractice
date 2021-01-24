#include<iostream>
using namespace std;
int main()
{
int ch;
cout<<"Enter any number (1 to 7)";
cin>>ch;
switch(ch)
{
case  1:
cout<<"Today is Saturday";
break;
case  2:
cout<<"Today is Sunday";
break;
case  3:
 cout<<"Today is Monday";
break;
case  4:
 cout<<"Today is Tuesday";
break;
case  5:
cout<<"Today is Wednesday";
break;
case  6:
  cout<<"Today is Thursday";
break;
case  7:
    cout<<"Today is Friday";
break;
default:
cout<<"Only enter value 1 to 7";
}
  return 0;
}
