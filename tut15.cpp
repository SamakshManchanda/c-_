#include <iostream>
using namespace std;


// Funtion Prototype
// type function-name (arguments); {This is the syntax of function prototype.}


int sum(int a, int b );
void g(void);

int main(){
  // main function

  int num1, num2;
  cout<<"Enter first number"<<endl;
  cin>>num1;
  cout<<"Enter second number"<<endl;
  cin>>num2;
  cout<<"The sum is "<<sum(num1, num2);
  g();
  return 0;

}

int sum(int a, int b){
    int c = a + b;
    return c;
}

void g(){
  cout<<"Hello, Good Morning ";
}

/*
  What is function prototyping? 
  The function prototyping is defined when we define a function after main function and the 
  code shows us that it is not defined in the main function. So we just define a function prototype before
  main function that allows us to solve this error.

  What is formal and actual parameters?
  Formal parameters are those made in functions. They take values from actual parameters. 
  for eg:- a and b

  Actual parameters are values by which a function is passed through. 
  for eg:- num1 and num2

*/ 
