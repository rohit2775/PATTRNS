 // mean median 

 #include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 19, 28, 5};
    int n = 5;

    // ----- MEAN -----
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int mean = sum / n;

    // ----- MEDIAN -----
    sort(arr, arr + n);

    int median;
    if (n % 2 == 1) {
        median = arr[n / 2];
    } else {
        median = (arr[n / 2] + arr[n / 2 - 1]) / 2;
    }

    cout << "Mean = " << mean << endl;
    cout << "Median = " << median << endl;

    return 0;
}
