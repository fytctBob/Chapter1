#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    int zeroamount = 0;
    int maxdigit = 0;

    do {
        cout << "Input a positive number (or enter 0 to exit): " << endl;
        cin >> num;

        if (num < 0) {
            cout << "Invalid input. Please enter a positive number." << endl;
        } else if (num == 0) {
            cout << "Exiting program." << endl;
            return 0;
        } else {
            string num_str = to_string(num);
            for (int i = 0; i < num_str.length(); i++) {
                int digit = num_str[i] - '0';
                if (digit == 0) {
                    zeroamount++;
                } else if (digit > max_digit) {
                    maxdigit = digit;
                }
            }
            break;
        }
    } while (true);

    cout << "The amount of zeros are: " << zeroamount << endl;
    cout << "The largest digit is: " << maxdigit << endl;

    return 0;
}