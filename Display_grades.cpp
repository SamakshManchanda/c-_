#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float m1, m2, m3, total, avg;
    cout<<"Enter the marks of 3 subjects:";
    cin>>m1>>m2>>m3;
    total = m1 + m2 + m3;
    avg = total/3;

    if (avg>=60)
    {
        cout<<"Your Grade is A";
    }
    
    if ( avg>=35 && avg<60)
    {
        cout<<"Your grade is B";
    }
    else
    {
        cout<<"Your grade is C";
    }
}