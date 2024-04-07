#include<iostream>
using namespace std;

void printArray (int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout << endl;
}

void swapalternate (int arr[], int size) {

    for(int i = 0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }

}

int main() {

    int even[8] = {2,1,4,3,6,5,8,7};
    int odd[5] = {2,1,4,3,5};

    swapalternate(even , 8);
    printArray(even , 8);

    cout << endl;

    swapalternate(odd , 5);
    printArray(odd , 5);
}