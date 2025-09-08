#include <iostream>
using namespace std;
int main()
{
    double cp,sp,profit, loss;
    cout<<"enter the cost price of bananas per dozen, cp->";
    cin>>cp;
    cout<<"Enter the selling price of bananas per dozen,sp->";
    cin>>sp;

    profit=25*(sp/12-cp/12);//per banana
    loss=25*(cp/12-sp/12);
    if (sp>cp)

    {
        cout<<"there is profit->"<<profit;
    }
    else
    {
       cout<<"there is loss->"<<loss;
    }
    
    

return 0;
}