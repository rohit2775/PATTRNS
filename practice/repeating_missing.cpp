#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 3, 6, 2, 1, 1};
    int n = 6;

    int freq[7] = {0};   // size n+1

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int repeating = -1, missing = -1;

    for (int i = 1; i <= n; i++) {
        if (freq[i] == 0)
            missing = i;
        else if (freq[i] == 2)
            repeating = i;
    }

    cout << "Repeating = " << repeating << endl;
    cout << "Missing = " << missing << endl;

    return 0;
}
