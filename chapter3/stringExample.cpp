#include <iostream>
#include <string>
int main () {
    std::string str ("test string");
    for (int i=0; i<str.length(); i++) {
        std::cout << str.at (str.length()-i-1) << ".";
    }
    return 0;
}