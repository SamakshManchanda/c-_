/*
Wap to calculate net salary program should take the following input
1. Basic salary
2. Percentage of Allowances
3. Percentage of Deductions
*/

#include<iostream>
using namespace std;
float basic_salary,allowance,deduction;

int main(){
    cout<<"Enter the BAsic salary of the person";
    cin>>basic_salary;
    cout<<"Enter the allowance given";
    cin>>allowance;
    cout<<"Enter the deduction of the person";
    cin>>deduction;

    float net_salary = basic_salary + basic_salary*allowance - basic_salary*deduction;
    cout<<net_salary;
    return 0;
}