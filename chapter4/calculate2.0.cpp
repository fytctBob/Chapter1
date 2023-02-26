#include <iostream>
using namespace std;
 
int main()
{
    double number1,number2;
    char operator1;

    cout<<"please input a operator."<<endl;
    cin>>operator1;
    cout<<"please input the first number."<<endl;
    cin>>number1;
    cout<<"please input the second number."<<endl;
    cin>>number2;
    if(operator1=='+') cout<<number1<<"+"<<number2<<"="<<number1+number2<<endl;
    else if(operator1=='-') cout<<number1<<"-"<<number2<<"="<<number1-number2<<endl;
    else if(operator1=='*') cout<<number1<<"*"<<number2<<"="<<number1*number2<<endl;
    else if(operator1=='/') cout<<number1<<"/"<<number2<<"="<<number1/number2<<endl;

    return 0;
}