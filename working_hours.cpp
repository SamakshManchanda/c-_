#include<iostream>
using namespace std;
int main(){
    int hours;
    cout<<"Enter the number of hours:\n";
    cin>>hours;
    if (hours>=9 && hours<=18)
    {
        cout<<"Working";
    }
    else{
        cout<<"Leisure";
    }
    return 0;
}