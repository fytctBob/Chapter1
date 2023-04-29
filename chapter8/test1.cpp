#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"how many number you want to input?"<<endl;
    cin>>num;
    int num_of_num;
    for (int z = 0; z<=num; z++){
        cout << "please input the numbers.";
        cin>>num_of_num;
    }
    const int N = num;
    int arr[N] = {num_of_num};
    for (int i = 0; i < N; i++) {
        int max_idx = 0;
        for (int j = 1; j < N-i; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        int tmp = arr[max_idx];
        arr[max_idx] = arr[N-i-1];
        arr[N-i-1] = tmp;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}