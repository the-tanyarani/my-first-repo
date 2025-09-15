#include <iostream>
using namespace std;
int main()
{
    int score;
    cout<<"Enter your score->";
    cin>>score;
    if(score<39)
    {
        cout<<"you got 'F' grade";
    }
    else if(score<=49)
    {
        cout<<"you got 'D' grade";
    }
    else if(score<=59)
    {
        cout<<"you got 'C' grade";
    }
    else if(score<=69)
    {
        cout<<"you got 'B' grade";
    }
    else if(score<=100)
    {
        cout<<"you got 'A' grade";
    }
    else
    {
        cout<<"Not required";
    }
return 0;
}