#include<iostream>
using namespace std;

int main()
{
	int a,b,c,ch;
	cout<<"enter the first no:-";
	cin>>a;
	cout<<"enter the second no:-";
	cin>>b;
	do
	{
	cout<<"\n addition";
	cout<<"\n substraction";
	cout<<"\n multiplication";
	cout<<"\n division";
	cout<<"\n exit";

	cout<<"\n enter your choice";
	cin>>ch;
	switch(ch)
	{
     case 1:c=a+b;
	  cout<<"\n Addition is:-"<<c;
	  break;

	  case 2:c=a-b;
	  cout<<"\n substraction is:-"<<c;
	  break;

	  case 3:c=a*b;
	  cout<<"\n multiplication is:-"<<c;
	  break;

	  case 4:c=a/b;
	  cout<<"\n division is:-"<<c;
	  break;
	  case 5:exit(0);
   }
   }while(ch!=5);
}   
