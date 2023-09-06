#include <cstdlib>
#include <iostream>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int binarySearch(int arr[], int low, int high, int x) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            return mid;
        }
            
        if (arr[mid] > x) {
            return binarySearch(arr, low, mid - 1, x);
        }
            
        return binarySearch(arr, mid + 1, high, x);
    }

    return -1;
}

int main() {
    int arr[] = { 2, 3, 4, 10, 40 };

    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);

    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;

    _getch();
    return 0;
}