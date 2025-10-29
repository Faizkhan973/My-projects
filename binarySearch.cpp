#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {  // Main loop controlling search range
        int mid = left + (right - left) / 2;  // Avoids overflow

        if (arr[mid] == target) {
            return mid;  // Target found at index mid
        }
        else if (arr[mid] < target) {
            left = mid + 1;  // Search in the right half
        }
        else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1;  // Target not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter target to search: ";
    cin >> target;

    int result = binarySearch(arr, n, target);

    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}