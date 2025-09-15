#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers"<<endl<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c = ";
    cin>>c;
    if (((b>a) && (a>c)) || ((c>a) && (a>b)) )  //    bac  cab
    {
        cout<<" the middle is a";
    }    
    else if  (( (a>b)&&(b>c) ) || ( (c>b)&&( b>a) ))    //abc   cba
    {
        cout<<"the middle is b";
    }
    else
    { 
        cout<<" the middle is c";
    }
return 0;
}