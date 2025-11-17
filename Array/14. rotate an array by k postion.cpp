// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>&arr,int start,int end){
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main() {
  vector<int> arr = {-1,-100,3,99};
  int n = arr.size();
  int k =2;
  rotate(arr,0,n-1);
  rotate(arr,0,k-1);
  rotate(arr,k,n-1);
  for(int i =0; i < n ; i++){
      cout<<arr[i]<<" ";
  }
  
    return 0;
}