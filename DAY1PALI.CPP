#include<iostream.h>
#include<conio.h>
int main()
{
int n,num,digits,rev=0;
cout<<"\nenter a positive number: ";
cin>>num;
n=num;
do
{
digits=num%10;
rev=(rev*10)+digits;
num=num/10;
}
while(num!=0);
cout<<"the reverse of the number is: "<<rev<<endl;
if(n==rev)
cout<<"The number is palindrome";
else
cout<<"The number is not a palindrome";
return 0;
}