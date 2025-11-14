// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include <climits>
using namespace std;

int main() {
   vector<int> arr = {4, -3, 1, 2, -3};
   int n = arr.size();
   bool found = false;
int target = 3;
   for(int i=0; i < n ; i++){
       int sum =0;
       for(int j=i; j <n ;j++){
        //   cout<<arr[i]<<arr[j]<< " ";
        sum = sum +arr[j];
     
        if(sum==target){
            for(int k=i; k<=j ;k++){
                cout<<arr[k]<<" ";
            }
                cout << endl;
                found = true;
                break; 
          
            
        }
       }
         
      
       if (found) break;
   }
   if(!found){
       cout<<"No subArray";
   }
//   cout<<maxSum;
    return 0;
}