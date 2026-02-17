#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 1, 2, 3};
    int n = 5;

    int freq[6] = {0};   // n+1 size

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cout << "Duplicates: ";

    for (int i = 1; i <= n; i++) {
        if (freq[i] == 2) {
            cout << i << " ";
        }
    }

    return 0;
}
