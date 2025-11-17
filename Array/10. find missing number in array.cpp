// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,4,6,7};
    int n = arr.size()+1;
    int actualSum = n*(n+1)/2;
    int sum =0;
    for(int i =0; i < n-1; i ++){
        sum+=arr[i];
    }
    
    cout<<"Missing number is : "<<actualSum-sum;
    return 0;
}