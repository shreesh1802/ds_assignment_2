#include <iostream>
using namespace std;

int findMissingLinear(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != i + 1)
            return i + 1;
    }
    return n;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr[n - 1];
    cout << "Enter sorted array of size " << n - 1 << ":\n";
    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];

    cout << "Missing number " << findMissingLinear(arr, n) << endl;
    return 0;
}


