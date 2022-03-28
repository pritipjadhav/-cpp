#include <iostream>
using namespace std;
int main()
{
    int i,j;
    char ch='A';
     for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<ch++;
            cout<<" ";
        }
        cout<<"\n";
 
    }
  return 0;
}