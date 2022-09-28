#include<iostream.h>
int main()
{
int age;
cout<<"enter the age of person: "<<endl;
cin>>age;
if(age>=18)
{
cout<<"you are eligible for voting"<<endl;
}
else
{
cout<<"you are not eligible for voting"<<endl;
}
cout<<"still u have"<<age-18<<"years";
return 0;
}