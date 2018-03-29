#include<iostream>
using namespace std;
int main()
{
	int n,c;
	cout<<"Enter number";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		c++;
		}
	}
	if(c==2)
	{
		cout<<"Its a Prime Number";
	}
	else
	{
		cout<<"Not a Prime Number";
	}
return 0;
}
