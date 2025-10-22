
# 🎯 Insertion Sort in C++

```cpp
// Insertion Sort
#include <iostream>
#include <vector>
// #include<algorithm>
using namespace std;
int main() {
    vector<int>arr = {5,4,1,3,2};
    int n = arr.size();
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]= curr;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
```

## 📈 Time & Space Complexity of Insertion Sort

| Case            | Time Complexity | Description                                            |
|------------------|-----------------|--------------------------------------------------------|
| **Best Case**    | O(n)            | Array is already sorted — only one comparison per pass |
| **Average Case** | O(n²)           | Elements are randomly ordered — average shifting occurs |
| **Worst Case**   | O(n²)           | Array is reverse sorted — every element shifted fully  |
| **Space**        | O(1)            | In-place sorting, no extra memory used                 |
