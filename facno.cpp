#include<iostream>
using namespace std;
int factno(int no)
{

int fact=1;
    if(no==0)
        return 1;
    else if(no<3)
        return no;
    else
    while (no!=0)
    {
        fact = fact*no;
        no--;
    return fact;
    }
}
int main()
{
    int num,result;
    cout<<" Enter number ";
    cin>>num;
    result=factno(num);
    cout<<"Factorial is "<<result;
}
