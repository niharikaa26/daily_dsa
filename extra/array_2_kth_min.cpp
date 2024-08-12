#include <iostream>
#include <algorithm>
using namespace std;

int findKthElement(int arr[], int n, int k) {
    sort(arr, arr + n);
    return arr[k - 1];
}

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << k << "th smallest element is " << findKthElement(arr, n, k) << endl;
    return 0;
}
