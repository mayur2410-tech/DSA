// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 121;
    int ori = n;
    int rev = 0;
    while(n!=0){
        int rem = n %10;
         rev = rev *10+rem;
        n=n/10;
    }
(ori==rev)? cout<<"Palidrone": cout<<"not palidrone";
    return 0;
}