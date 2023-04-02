#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;

void mytoys(string fileName)
{
    int toyType;
    ofstream outfile;
    outfile.open(fileName);
    if (outfile)
    {
        cout << "File exists..." << endl;
        return 1;
    }
    else
    {
        cout << "Error: could not open file... " << endl;
        return -1;
    }

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
        outfile << toyName << " " << toyAmount << " " << randprize << endl;
    }
    outfile.close();
}

void mytoys_cost(string fileName)
{
    ifstream infile;
    string toyName;
    int total_amount = 0;
    int total_prize = 0;
    int toyAmount;
    int randprize;
    infile.open(fileName);
    if (infile)
    {
        cout << "File exists..." << endl;
        return 1;
    }
    else
    {
        cout << "Error: could not open file... " << endl;
        return -1;
    }
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
}
int main()
{
    string fileName = "mytoys.dat";
    mytoys(fileName);
    mytoys_cost(fileName);
    return 0;
}