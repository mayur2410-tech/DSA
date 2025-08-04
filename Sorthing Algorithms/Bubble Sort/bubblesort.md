# 🔁 Bubble Sort in C++

This document contains two implementations of Bubble Sort in C++:

- ✅ One using `std::swap()` from `<algorithm>`
- ✅ Another using manual swapping with a temporary variable

---

## ✅ Bubble Sort Using `std::swap()` from `<algorithm>`

```cpp
// In this I have used the swap algorithm from <algorithm> library

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {6, 7, 5, 4, 2, 1, 3};
    int n = arr.size();
    bool isSorted;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                isSorted = true;  // A swap happened
            }
        }

        if (isSorted == false) {  // No swaps means already sorted
            break;
        }
    }

    // Output the sorted array
    cout << "Sorted Array = ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```


# ✅ Bubble Sort Using Manual Swap

```cpp
// Without swap algorithm, manual swapping used

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n = arr.size();
    bool isSorted = false;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];     // manually swap
                arr[j + 1] = temp;
                isSorted = true;
            }
        }

        if (isSorted == false) {
            break;
        }
    }

    // Output the sorted array
    cout << "Sorted Array = ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }

    return 0;
}
```



## 📈 Time & Space Complexity

| Case         | Time Complexity | Description                        |
|--------------|------------------|------------------------------------|
| Best Case    | O(n)             | Already sorted, only one pass      |
| Average Case | O(n²)            | Standard comparisons and swaps     |
| Worst Case   | O(n²)            | Completely reverse sorted          |
| Space        | O(1)             | In-place sorting, no extra space   |
