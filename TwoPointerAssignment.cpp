#include <iostream>
#include <vector>
#include <utility>
using namespace std;

// =====================================================
// PART A: REMOVE DUPLICATES
// =====================================================

// Reference approach: Uses a separate result vector
int removeDuplicatesReference(const vector<int>& arr) {
    vector<int> result;

    for (int i = 0; i < arr.size(); i++) {
        bool found = false;

        for (int j = 0; j < result.size(); j++) {
            if (arr[i] == result[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            result.push_back(arr[i]);
        }
    }

    return result.size();
}

// Optimized approach: Slow and fast pointers
int removeDuplicatesOptimized(vector<int>& arr) {
    int n = arr.size();

    if (n == 0) {
        return 0;
    }

    int slow = 0;

    for (int fast = 1; fast < n; fast++) {
        if (arr[fast] != arr[slow]) {
            slow++;
            arr[slow] = arr[fast];
        }
    }

    return slow + 1;
}

// =====================================================
// PART B: PAIR SUM
// =====================================================

// Reference approach: Brute force
pair<int, int> pairSumBruteForce(
        const vector<int>& arr, int target) {

    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                return {i, j};
            }
        }
    }

    return {-1, -1};
}

// Optimized approach: Opposite-end two pointers
pair<int, int> pairSumOptimized(
        const vector<int>& arr, int target) {

    if (arr.size() < 2) {
        return {-1, -1};
    }

    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            return {left, right};
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return {-1, -1};
}

// =====================================================
// FUNCTION TO DISPLAY ARRAY
// =====================================================

void displayArray(const vector<int>& arr, int k) {
    cout << "[";

    for (int i = 0; i < k; i++) {
        cout << arr[i];

        if (i < k - 1) {
            cout << ", ";
        }
    }

    cout << "]";
}

// =====================================================
// MAIN FUNCTION
// =====================================================

int main() {

    // PART A: REMOVE DUPLICATES

    cout << "PART A: REMOVE DUPLICATES" << endl;

    vector<vector<int>> duplicateTests = {
        {1, 1, 2, 2, 2, 3, 4, 4},
        {5},
        {},
        {-3, -3, -1, 0, 0}
    };

    for (int i = 0; i < duplicateTests.size(); i++) {
        vector<int> arr = duplicateTests[i];

        int referenceK = removeDuplicatesReference(arr);
        int k = removeDuplicatesOptimized(arr);

        cout << "\nTest Case " << i + 1 << endl;
        cout << "Reference Unique Count: "
             << referenceK << endl;

        cout << "Optimized Unique Count: "
             << k << endl;

        cout << "Unique Prefix: ";
        displayArray(arr, k);
        cout << endl;
    }

    // PART B: PAIR SUM

    cout << "\nPART B: PAIR SUM" << endl;

    vector<vector<int>> pairTests = {
        {1, 2, 4, 7, 11, 15},
        {1, 3, 5, 8},
        {2, 4, 6},
        {1, 2, 2, 3},
        {1, 3, 5, 8}  // Additional corrected test
    };

    vector<int> targets = {15, 7, 20, 4, 6};

    for (int i = 0; i < pairTests.size(); i++) {
        vector<int> arr = pairTests[i];
        int target = targets[i];

        pair<int, int> brute =
            pairSumBruteForce(arr, target);

        pair<int, int> optimized =
            pairSumOptimized(arr, target);

        cout << "\nTest Case " << i + 1 << endl;
        cout << "Array: ";
        displayArray(arr, arr.size());
        cout << endl;

        cout << "Target: " << target << endl;

        cout << "Brute Force Indices: ("
             << brute.first << ", "
             << brute.second << ")" << endl;

        cout << "Optimized Indices: ("
             << optimized.first << ", "
             << optimized.second << ")" << endl;

        if (optimized.first != -1) {
            cout << "Pair Values: "
                 << arr[optimized.first] << " + "
                 << arr[optimized.second] << " = "
                 << target << endl;
        }
    }

    return 0;
}