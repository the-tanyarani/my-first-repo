#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the three sides of a traingle"<<endl<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c = ";
    cin>>c;
    if((a==b)&&(b==c))
    {
        cout<<" Triangle is equilateral triangle";
    }
    else if(((a!=b)&&(b!=c)) && ((a!=c)&&(a!=b)))
    {
    cout<<"Triangle is scaleton triangle";
    }
    else if(  ( (a==b) && (b!=c) ) ||  (  (a!=b)  &&  (a==c) )  || (  (b==c) && (a!=c) ) )
    {
        cout<<"Triangle is isosceles";
    
    }
    else
    {
        cout<<" this is not appropriate data";
    }

return 0;
}