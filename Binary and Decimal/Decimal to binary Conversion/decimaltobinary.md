# Binary Conversion in C++

This document explains two common methods for converting a decimal number to binary in C++:

1. **By Bits (Bitwise AND and Shift)**
2. **By Divide by 2 Method**

---

## 1. Binary Conversion by Bits

This method uses bitwise operations to extract binary digits of a number.

### Code:

```cpp
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n = 7;
    int ans = 0;
    int i = 0;

    while (n != 0) {
        int bit = n & 1;  // Extract the least significant bit
        ans = (bit * pow(10, i)) + ans;  // Append bit at the correct decimal place
        n = n >> 1;  // Right shift the number
        i++;
    }

    cout << ans;
    return 0;
}
```


# Binary Conversion by Divide by 2

This method divides the number by 2 and stores remainders, which represent binary digits.

## 🔢 Method Explanation

In this method:

- We repeatedly divide the number by 2.
- At each step, we take the remainder (`n % 2`), which gives us a binary digit (0 or 1).
- Each remainder is multiplied by a power of 10 (`10^i`) to form the binary number in base-10 representation.
- We continue this until the number becomes 0.

> ⚠️ Note: This method works well for small numbers. For larger values, it's better to build the binary as a string or use an array/vector to avoid floating-point inaccuracies with `pow`.

---

## 🧾 Code (C++)

```cpp
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n = 7;
    int bin = 0;
    int i = 0;

    while (n != 0) {
        int rem = n % 2;  // Get remainder (bit)
        bin = bin + rem * pow(10, i);  // Build binary number
        i++;
        n = n / 2;  // Reduce the number
    }

    cout << bin;
    return 0;
}
```

# 🧮 Binary Conversion Using `bitset` in C++

The C++ Standard Library provides the `bitset` class to easily handle binary representations of integers. This method works for both **positive and negative numbers**, and automatically applies **two’s complement** representation for negatives.

---

## 🔹 What is `bitset`?

- `bitset<N>` represents a fixed-size sequence of `N` bits.
- It provides an easy way to view and manipulate the binary representation of integers.
- Works with both signed and unsigned integers.

---

## ✅ Positive Number Example

### Code:

```cpp
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int n = 5;
    bitset<8> binary(n); // 8-bit representation

    cout << "Binary of " << n << " is: " << binary << endl;
    return 0;
}
```

### Output

 **Binary of -5 is: 11111011**


