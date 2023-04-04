// Code to take input from the user of his name
#include<iostream>
using namespace std;

int main(){
  string name;
  cout<<"Hello Sir/Ma'am, May I know your Name please?";
  getline(cin,name);
  // cin>>name;
  cout<<"Welcome Mr/Ms."<<name;  // But this will only print the first name and if someone has to enter his full name we must use getline function.

}