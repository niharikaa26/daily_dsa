#include <iostream>
#include <climits>
using namespace std;

void findMinMax(int arr[], int n) {
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    findMinMax(arr, n);
    return 0;
}
