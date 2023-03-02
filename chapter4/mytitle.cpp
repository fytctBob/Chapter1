#include <iostream>
#include <cstring>


using namespace std;

int main()
{
    cout<< "Please input a sentence"<<endl;
    string arr;
    getline(cin,arr);
    cout << "Original:"<<arr<< endl;
    cout<<"Sentence in UPPERCASE:";
    int y=0;
    int hadspace = 1;
    for (int x=0; x<arr.length(); x++){
        char ch=arr.at(x);
        if(hadspace==1){
            cout<<(char)toupper(ch);
            hadspace=0;
        }
        else {
            if(isalpha(ch)){
                cout<<(char)tolower(ch);
            }
        }
        if(isspace(ch)){
            cout<<" ";
            hadspace=1;
        }
    }
    return 0;
}