# 🎯 Selection Sort in C++

```cpp
// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
   vector<int> arr = {5,4,1,3,2};
   int n = arr.size();
   for (int i =0;i<n-1;i++){
       int minidx = i;
       for(int j = i+1;j<n;j++){
           if(arr[j]<arr[minidx]){
               minidx=j;
           }
       }
       swap(arr[i],arr[minidx]);
   }
   
   for(int i=0;i<n;i++){
       cout<<arr[i];
   }

    return 0;
}
```

## 📈 Time & Space Complexity of Selection Sort

| Case         | Time Complexity | Description                            |
|--------------|------------------|----------------------------------------|
| Best Case    | O(n²)            | Even if sorted, still checks all pairs |
| Average Case | O(n²)            | Standard comparisons and swaps         |
| Worst Case   | O(n²)            | Completely reverse sorted              |
| Space        | O(1)             | In-place sorting, no extra space used  |
