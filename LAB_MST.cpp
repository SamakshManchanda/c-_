/*
private:
int item_code[10];
float price[10];

public:
void get_data();
void display_data();
void calculate_bill(int quant[]);
*/
#include<iostream>
using namespace std;

class quantity
{
  private:
  int item_code[10];
  float price[10];

  public:
  // void get_data();
  // void display_data();
  // void calculate_bill();
};

int main()
{
  cout<<"What do you want to purchase:\n"<<endl<<"1)Rice\n"<<endl<<"2)Flour\n"<<endl<<"3)Wheat\n"<<endl;
  int x;
  cin>>x;
  switch (x)
  {
  case 1:
    cout<<"You chose Rice ";
    cout<<"How much rice do you want to purchase";
    int rice;
    cin>>rice;
    int code = 111;
    cout<<"The code is:\n"<<code;
    int cost = 60;
    cout<<"The cost is:\n"<<cost;
    cout<<" Your total bill is:\n "<<endl<<"Rs"<<rice * code;
    break;
  case 2:
  cout<<"You chose Flour ";
    cout<<"How much Flour do you want to purchase";
    int flour;
    cin>>flour;
    int code = 111;
    cout<<"The code is:\n"<<code;
    int cost = 100;
    cout<<"The cost is:\n"<<cost;
    cout<<"Your total bill is:\n "<<endl<<"Rs"<<flour * cost;
    break;
  case 3:
  cout<<"You chose Wheat ";
    cout<<"How much wheat do you want to purchase";
    int wheat;
    cin>>wheat;
    int code = 112;
    cout<<"The code is:\n"<<code;
    int cost = 60;
    cout<<"The cost is:\n"<<cost;
    cout<<"Your total bill is:\n "<<endl<<"Rs"<<wheat * cost;
    break;
  default:
  cout<<"Enter the correct input. ";
    break;
  }
}