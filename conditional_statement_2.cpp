#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number"<<endl;
    cin>>number;
    if (number%2 == 0)
    {
        cout<<"The entered number is even."<<endl;
    }
    else
    {
        cout<<"The entered number is odd"<<endl;
    }
    return 0;
}