// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int main() {
   vector<int> arr = {1,2,3,4,5};
   int n = arr.size();
   for(int i=0; i < n ; i++){
       for(int j=i; j <n ;j++){
        //   cout<<arr[i]<<arr[j]<< " ";
        for(int k=i; k<=j;k++){
            cout<<arr[k];
        }
        cout<<", ";
       }
      cout<<endl;
   }
    return 0;
}