#include <iostream>
using namespace std;
int main()

{
    int age;
    cout<<"Enter your age->";
    cin>>age;
    if(age<10)
    {
        cout<<"you are child";
    }
    else if(age<=19)
    {
        cout<<"you are teenagaer";
    }
    else if(age<=60)
    {
        cout<<"you are adult";
    }
    else
    {
        cout<<"you are senior";
    }
return 0;
}