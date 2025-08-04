# 🔄 Binary to Decimal Conversion in C++

This C++ program converts a binary number (provided as a decimal integer input like `1010`) into its decimal equivalent using positional weights of base-2.

---

## 🧾 Code

```cpp
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n = 1010;  // Binary input (as an integer)
    int i = 0;
    int ans = 0;

    while (n != 0) {
        int digit = n % 10;  // Extract the last digit
        if (digit == 1) {
            ans = ans + pow(2, i);  // Add 2^i to the result if digit is 1
        }
        n = n / 10;  // Remove the last digit
        i++;  // Move to the next power of 2
    }

    cout << "binary number is " << ans;
    return 0;
}
