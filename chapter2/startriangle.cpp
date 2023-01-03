#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 9; i++)
    {          

        for (int b = 0; b <10-i ; b++){
            cout << " ";
        }

        for (int j = 0; j <=i ; j++)
        {
            cout << " *";
        }

        cout << endl;
    }
    cout << endl;
}