#include <iostream>
#include <ctime>
using namespace std;
int main(){
    int guess;
    int correct=0;
    for(int j=0; j<9999999999999; j++){
        cout<<"please guess a number between 1-5 for N times."<<endl;
        cin>>guess;
        unsigned s1 = time(0);
        srand(s1);
        int myrand = rand() % 5+1;
        if(guess==myrand) correct++;
        cout<<"There are "<<correct<<" of your guess is correct."<<endl;
        }  
    }
    