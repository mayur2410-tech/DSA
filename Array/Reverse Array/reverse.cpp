// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
   vector<int> arr = {5,4,3,9,2};
   int n = arr.size();
   int i = 0 ;
   int j = n-1;
   while(i<j){
      int temp = arr[i];
      arr[i]=arr[j];
      arr[j]= temp;
       i++;
       j--;
   }
   for(int i = 0 ; i <n ; i++){
       cout<<arr[i]<<" ";
   }

    return 0;
}