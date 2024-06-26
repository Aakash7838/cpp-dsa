#include<iostream>
using namespace std;

int firstocc(int arr[], int n, int key){
    int s = 0;
    int e = n-1;

    int mid = s + (e - s)/2;

    int ans = -1;

    while(s<=e){
        if (arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid]){  // go to right
            s = mid + 1;
        }
        else if (key < arr[mid]){   // go to left
            e = mid - 1;
        }

        mid = s + (e - s)/2;
    }    
    return ans;
}

int lastocc(int arr[], int n, int key){
    int s = 0;
    int e = n-1;

    int mid = s + (e - s)/2;

    int ans = -1;

    while(s<=e){
        if (arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid]){  // go to right
            s = mid + 1;
        }
        else if (key < arr[mid]){   // go to left
            e = mid - 1;
        }

        mid = s + (e - s)/2;
    }
    return ans;
}

int main () {
    int even[5] = {1,2,3,3,5};

    cout << firstocc(even, 5, 3) << "      " << lastocc(even, 5, 3);
}