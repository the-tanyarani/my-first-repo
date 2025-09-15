#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter numbers between (1-7)= ";
    cin>>number;
    
    if(number==1){
        cout<<"Monday"<<endl;
    }
    else if(number==2){
        cout<<"Tuesday"<<endl;
    }
    else if(number==3){
        cout<<"Wednesday"<<endl;
    }
    else if(number==4){
        cout<<"Thursday"<<endl;
    }
    else if(number==5){
        cout<<"Friday"<<endl;
    }
    else if(number==6){
        cout<<"Saturday"<<endl;
    }
    else if(number==7){
        cout<<"Sunday"<<endl;
    }
    else{
        cout<<"not defined";
    }
return 0;
}