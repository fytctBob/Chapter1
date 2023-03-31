#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile;
    string toyName;
    int total_amount = 0;
    int total_prize = 0;
    int toyAmount;
    int randprize;
    infile.open("mytoys.dat");
    cout << "Your toy list: " << endl;
    while (infile >> toyName >> toyAmount >> randprize)
    {
        cout << toyName << " " << toyAmount << " $" << randprize << endl;
        total_amount = total_amount + toyAmount;
        total_prize = total_prize + randprize * toyAmount;
    }
    cout << "Total Toy's Prize: $" << total_prize << endl;
    cout << "Total Toy's Amount: " << total_amount << endl;
    infile.close();
    return 0;
}