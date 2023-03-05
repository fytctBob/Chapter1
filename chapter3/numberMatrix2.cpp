#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    for(int i=0; i<25; i++){
        if(i%5==0) cout << endl;
        cout << setw(3) << 24-i;
    }
}