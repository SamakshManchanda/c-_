// // WAP to swap first and last digit of any number
// #include<iostream>
// using namespace std;

// class myclass
// {
//   private:
//     int data;
//   public:
//      void int_data()
//   {
//     cout<<"Enter the Value of data";
//     cin>>data;
//   }
// };

// Wap to print the first digiit of any number
# include <iostream>
#include <math.h>
using namespace std;
int main(){
  int ones_number,first_digit,n,middle,last;
  cout<<"Enter the number ";
  cin>>ones_number;
  last = ones_number%10;
  cout<<"The ones digit number is \n"<<last;
  n = log10(ones_number);
  first_digit = floor(ones_number/pow(10,n));
  cout<<"\nThe first number is\n"<<first_digit;
  
  cout<<"The middle number is"<<middle;
  
  
}