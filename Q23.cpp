#include <iostream>
using namespace std;
int main()
{
    int n;
cout<<"Enter a number-> ";
cin>>n;
int sum=0;
int i=2;
while( i<=n ){
sum =sum+i;
i++;
i++;
}
cout<<" The sum of first "<<n<<" even natural number is "<< sum ;


return 0;
}