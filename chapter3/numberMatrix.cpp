#include<iostream>
using namespace std;
int main()
{
    int number=0;
    cout << "Please input triangle size which is bigger than 2 less than 50:";
    cin >> number ;
    if (number > 50) {
    cout << "Your input size is too big." << endl;    
    return 0;
    } else if ( number < 3) {
    cout << "Your input size is too small." << endl;
    return 0;
    }
    for(int i=1; i<=number; i++){
        for(int j=1; j<=number; j++){
            cout << (i-1)*number+j <<" " ;
        }
        cout << endl;
    }
}