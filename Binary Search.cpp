#include <iostream>
using namespace std;

// Function returns the index of x if present, else -1
int binarySearch(const vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    cout << "--- Starting Binary Search Trace ---" << endl;

    while (low <= high) {
        // Calculate mid.
        // We use low + (high - low) / 2 to avoid integer overflow
        // which can happen with (low + high) / 2
        int mid = low + (high - low) / 2;

        cout << "Range [" << low << ", " << high << "] | Mid: " << mid << " | Value: " << arr[mid] << endl;

        // Check if the target is present at mid
        if (arr[mid] == target) {
            cout << "Target found at index " << mid << "!" << endl;
            return mid;
        }

        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            cout << "Target > " << arr[mid] << " -> Search Right" << endl;
            low = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            cout << "Target < " << arr[mid] << " -> Search Left" << endl;
            high = mid - 1;
        }
    }

    // Target was not found
    return -1;
}

int main() {
    // You can modify the array below. Ensure elements are sorted.
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    vector<int> numbers(arr, arr + sizeof(arr) / sizeof(arr[0]));
    int target = 23;

    int result = binarySearch(numbers, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}