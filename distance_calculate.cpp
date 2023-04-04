#include<iostream>
using namespace std;
float v,u,a,d;
int distance()
{
   d = (v*v-u*u)/2*a;
   cout<<"The required distance is:"<<d;
   return 0;
}

int main(){
    cout<<"Enter the final velocity\n";
    cin >> v;
    cout<<"Enter the initial velocity";
    cin>>u;
    cout<<"Enter the acceleration of the moving body";
    cin>>a;
    
    cout<<"The required distance is:"<<distance();
    return 0;
}