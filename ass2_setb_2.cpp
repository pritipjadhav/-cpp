#include<iostream>
using namespace std;
int main()
{
	int inArray[5]={1,2,3,4,5};
	int outArray[5];
	myFunction(&inArray,&outArray);
}
int myFunction(&inArray,&outArray)
{
	
	outArray[0]=inArray[4];
	outArray[1]=inArray[3];
	outArray[2]=inArray[2];
	outArray[3]=inArray[1];
	outArray[4]=inArray[0];


	return 0;
}





















3