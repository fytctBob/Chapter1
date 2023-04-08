#include <iostream>
#include <fstream>

using namespace std;
void ohi(int & sum, int & avg)
{
    ifstream infile;
    int Integers;
    infile.open("calculateSumAvg.txt");
    sum = 0;
    int count = 0;
    while (infile >> Integers)
    {
        sum += Integers;
        count++;
    }
    avg = sum / count;
    infile.close();
}
int main()
{
    int sum, avg;
    ohi(sum,avg);
    cout << "the sum is: " << sum << endl;
    cout << "the average is: " << avg << endl;
    return 0;
}