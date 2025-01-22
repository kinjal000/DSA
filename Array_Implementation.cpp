#include <iostream>
using namespace std;
int findMax(int arr[], int size) {
    if (size == 0) {
        cout << "Array is empty!" << endl;
        return -1; 
    }
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Max value: " << findMax(arr, size) << endl;
    return 0;
}
