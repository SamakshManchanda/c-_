#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int amount;
    cout<<"Enter the amount";
    cin>>amount;
    float disAmount;
    if (amount>=5000)
    {
        disAmount = amount - 0.2*amount;
        cout<< disAmount;
    }
    else
    {
        if(amount>=2000 && amount<5000)
        {
            disAmount = amount - 0.1*amount;
            cout<<disAmount;
        }
        else
        {
            disAmount = amount - 0.05*amount;
            cout<<disAmount;
        }
    }
}