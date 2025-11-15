
#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr ={1,12,-5,-6,50,3};
    int n = arr.size();
    int k =4;
    int sum =0;
    for(int i =0 ; i < k ; i++){
        sum = sum + arr[i];
    }
    int maxSum = sum;
    for(int i =k ; i < n ; i++){
        sum = sum + arr[i] - arr[i-k];
        maxSum = max(sum,maxSum);
    }
  
cout<<"average is "<<maxSum/k;
    return 0;
}