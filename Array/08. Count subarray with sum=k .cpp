// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include <climits>
using namespace std;

int main() {
   vector<int> arr = {4, -3, 1, 2, -3};
   int n = arr.size();
   int count =0;
int target = 3;
   for(int i=0; i < n ; i++){
       int sum =0;
       for(int j=i; j <n ;j++){
        //   cout<<arr[i]<<arr[j]<< " ";
        sum = sum +arr[j];
     
        if(sum==target){
         count++;
          
            
        }
       }
         
      
   }
   cout<<count;
//   cout<<maxSum;
    return 0;
}


// this is O(n) approach but subarray size is fixed 
// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;


int main() {
  vector<int> arr = {5,6,1,3,4};
  //[1,0,0,2,3,0,0,4]
  int k =2;
  int tar =7;
  int sum =0;
  int count =0;
  int n = arr.size();
  for(int i=0; i < k ; i++){
     sum = sum + arr[i];
  }
  for(int i =k; i <n ; i++){
  if(sum==tar){
      count++;
  }
  sum = sum + arr[i] - arr[i-k];
  
  }
   if(sum==tar){
      count++;
  }
  cout<<count;
 
  
    return 0;
}
