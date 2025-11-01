// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
   vector<int> arr = {0,3,5,9,12};
   int target = 9;
   int n = arr.size();
   int st = 0 , end = n-1;
   while(st<=end){
       int mid = (st + end) /2;
       if(arr[mid]==target){
          cout<< mid;
          return 0;
       }else if(arr[mid] > target){
           end = mid -1;
       }else{
           st = mid +1;
       }
   }
   cout<<"Not found";
   
   
    return 0;
}