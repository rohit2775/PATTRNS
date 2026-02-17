#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 4, 5, 3, 3, 4, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    
    sort(arr, arr + n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Last element: " << arr[n - 1] << endl;
    cout << "Second last element: " << arr[n - 2] << endl;

    return 0;
}