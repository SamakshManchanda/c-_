#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    float roots,root1,root2,d,a,b,c;
    

    cout<<"Enter the value of a,b and c in the equation 'ax^2 + bx + c'\n";
    cin>>a>>b>>c;
    d = b*b - 4*a*c;
    root1 = (-b + (sqrt(d))/(2*a));
    root2 = (-b - (sqrt(d))/(2*a));

    if (d < 0)
    {
        cout<<"Imaginary roots\n";
    }
    if (d == 0)
    {
        cout<<"Real and Equal roots\n";
        cout<<"The roots are:\n"<<-b/(2*a)<<"\n"<<-b/(2*a);
    }
    if (d>0)
    {
        cout<<"Real and distinct roots/n";
        cout<<"The roots are:\n"<<root1<<"\n"<<root2;
    }
    return 0;
}
