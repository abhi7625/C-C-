#include<iostream>
using namespace std;
int main()
{
	int n,y,x,sum=0;
	cin>>n;
	int temp=n;
	while(temp!=0)
	{
		y=temp%10;
		sum=sum+y*y*y;
		temp=temp/10;
	}
if(sum==n)
{
cout<<"Armstrong Number";
}
else
cout<<"Not an Armstrong Number";
}
