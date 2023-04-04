#include<iostream>
using namespace std;
int main()
{
    int x,bill;
    cout<<"Enter the bill";
    cin>>bill;
    if (bill < 100)
    {
        x =1;
    }
    else if (bill>=100 && bill<500)
    {
        x = 2;
    }
    else if(bill>=500)
    {
        x = 3;
    }
    
    switch(x)
    {
        case 1: 
        cout<<"The bill is:"<<bill;
        break;

        case 2:
        cout<<"The bill is:"<<bill - 0.1*bill;
        break;

        case 3:
        cout<<"The bill is:"<<bill - 0.2*bill;
        break;
        
        return 0;
    }
}