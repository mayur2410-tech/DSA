// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include <climits>
using namespace std;

int main() {
   vector<int> arr = {2,-3,6,-5,2,4};
   int n = arr.size();
   int currSum = 0;
   int maxSum = INT_MIN;
    for(int i=0; i < n ; i++){
        currSum += arr[i];
        maxSum = max(maxSum,currSum);
        if(currSum<0){
            currSum =0;
        }
    }
    cout<<maxSum;

    return 0;
}