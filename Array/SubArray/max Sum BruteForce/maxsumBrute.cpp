// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include <climits>
using namespace std;

int main() {
   vector<int> arr = {1,2,3,4,5};
   int n = arr.size();
   int maxSum =INT_MIN ;
   for(int i=0; i < n ; i++){
       for(int j=i; j <n ;j++){
        //   cout<<arr[i]<<arr[j]<< " ";
        int sum =0;
        for(int k=i; k<=j;k++){
            sum = sum +arr[k];
           
        }
         cout<<sum<<",";
         if(maxSum < sum){
             maxSum = sum;
         }
         
       }
      cout<<endl;
   }
   cout<<maxSum;
    return 0;
}