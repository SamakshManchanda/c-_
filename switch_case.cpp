#include <iostream>
using namespace std;

int main()
{
    int day;
    cout<<"Enter the day number";
    cin>>day;
    switch(day)
    {
        case 1: cout<<"sun";
        break;
        case 2: cout<<"Mon";
        break;
        case 3: cout<<"Tue";
        break;
        // default: cout<<"Invalid number";   
        case 4: cout<<"Wed";
        break;
        case 5: cout<<"Thu";
        break;
        case 6: cout<<"Fri";
        break;
        case 7: cout<<"Sat";
        break;   
    }
    cout<<endl<<endl;
    return 0;
}