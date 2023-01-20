#include <iostream>
#include <string>
int main () {
    // keep the amount of 'a'
  int mysum=0;
    std::cout << "Please input a string";
    std::string mystring;
    getline(std::cin,mystring);
    char ch;
    for (int i =0; i<mystring.length(); i++)
{
  ch=mystring.at(i);
    if((ch == 'A') || (ch == 'a'))
        mysum++;
}
std::cout<<"there is "<< mysum <<"a in the string" << std::endl;
return 0;
}