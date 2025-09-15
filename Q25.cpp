#include <iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"Enter a number-> ";
    cin>>n; 
    for(int i=1; i<=n; i++)
    sum= sum+(i*i);
    cout<<" the sum of sqaure of first "<<n <<" naturals numbers is "<<sum;


return 0;
}