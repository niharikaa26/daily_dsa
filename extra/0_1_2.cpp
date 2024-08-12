#include <iostream>
using namespace std;

void sortArray(int arr[], int n) {
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++) {
        switch (arr[i]) {
            case 0: count0++; break;
            case 1: count1++; break;
            case 2: count2++; break;
        }
    }
    int i = 0;
    while (count0 > 0) {
        arr[i++] = 0;
        count0--;
    }
    while (count1 > 0) {
        arr[i++] = 1;
        count1--;
    }
    while (count2 > 0) {
        arr[i++] = 2;
        count2--;
    }
}

int main() {
    int arr[] = {0, 1, 2, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
