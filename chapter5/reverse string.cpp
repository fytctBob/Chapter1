#include <iostream>
#include <string>
using namespace std;

int main() {
   string str;
   cout << "Enter a string: " <<endl;
   getline(cin, str);
   int len = str.length();
   for (int i = 0; i < len / 2; i++) {
      swap(str[i], str[len - i - 1]); 
   }
   cout << "Reversed string: " << str << endl;
   return 0;
}