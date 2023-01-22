#include <iostream>
using namespace std;
 
int main()
{
    cout<<"please input the number to calculate"<<endl;
    double a0,a1,a2;
    char ca1,ca2;
    cin>>a0>>ca1;
    if(ca1=='=') cout<<a0<<endl;
    else
    {
        cin>>a1>>ca2;
        while(1)
        {            
            if(ca1=='=') {cout<<a0<<endl;break;} 
            switch(ca2)
            {
                case '=':
                    switch(ca1)
                    {
                        case '+': a0=a0+a1;break;
                        case '-': a0=a0-a1;break;
                        case '*': a0=a0*a1;break;
                        case '/': a0=a0/a1;
                    }
                    ca1=ca2;break;
                case '+':
                case '-':
                case '*':
                case '/':
                    switch(ca1)
                    {
                        case '+': a0=a0+a1;break;
                        case '-': a0=a0-a1;break;
                        case '*': a0=a0*a1;break;
                        case '/': a0=a0/a1;
                    }
                    ca1=ca2;cin>>a1>>ca2;break;
            }
 
        }
    }
    return 0;
}