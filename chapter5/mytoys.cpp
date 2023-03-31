#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;

int main(){
int toyType;
    ofstream outfile;
    outfile.open("mytoys.dat");
    cout << "Writing to the file" << endl;
    cout << "Enter the types of toys you want to order: ";
    cin >> toyType;

    unsigned s1 = time(0);
    srand(s1);
    for (int i = 1; i <= toyType; i++)
    {
        string toyName = "";
        int toyAmount = 0;
        cout << "Enter your toy name and amount: ";
        cin >> toyName;
        cin >> toyAmount;
        int randprize = rand() % 100 + 1;
        outfile << toyName << " " << toyAmount << "" << randprize << endl;
    }
    outfile.close();
    return 0;
}