#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {2, 4, 3, 5, 6};
    int n = 5;

    int first = INT_MAX;
    int second = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MAX)
        cout << "-1";
    else
        cout << "First = " << first << " Second = " << second;

    return 0;
}
