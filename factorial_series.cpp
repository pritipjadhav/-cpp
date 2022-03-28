#include <iostream>  
using namespace std;  
int main()  
{  
int n, i, num=1; 

float sum, fact;
cout<<"enter the number:-";
cin>>n;
while (num<=n) 
{
    fact=1;
    for(i=1;i<=num;i++) 
    {
        fact=fact*i;
    }
    sum=sum+(num/fact);
    num++;
}
cout<<"sum of series is:- "<<sum;    
    
}  