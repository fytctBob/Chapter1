#include<iostream>
using namespace std;
int main()
{
    int size=0;
    cout << "Please input triangle size which is bigger than 2 less than 50:";
    cin >> size ;
    if (size > 50) {
    cout << "Your input size is too big." << endl;    
    return 0;
    } else if ( size < 3) {
    cout << "Your input size is too small." << endl;
    return 0;
    }
        for(int i=0; i<size; i++){
        for(int j=0; j<size-i; j++){
    cout << " ";
        }
        for(int j=0; j<i; j++) {
            cout  << " *" ;
        }
        cout << endl;
        }
}
