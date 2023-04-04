#include<iostream>
using namespace std;
int main()
{
  int n, i,r,sum=0,m;
  cout<<"Enter a number\n";
  cin>>n;
  m = n;
  while(n>0)
  {
    r = n % 10;
    n = n/10;
    sum = sum + r*r*r;
  }
  if(sum == m)
  {
    cout<<"It is armstrong";
  }
  else
  {
    cout<<"It is not armstrong";
  }
  
}