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