// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> arr ={5,3,4,6,1};
   int n = arr.size();
//   int i=0;
//   int j = n-1;
 for(int i =0; i <n/2; i++){
     swap(arr[i],arr[n-i-1]);
     
 }
  for(int i=0; i <n; i++){
      cout<<arr[i]<<" ";
  }

    return 0;
}



//using 2 pointer
// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> arr ={5,3,4,6,1};
   int n = arr.size();
  int i=0;
  int j = n-1;
 while(i<j){
     swap(arr[i],arr[j]);
     i++;
     j--;
 }
  for(int i=0; i <n; i++){
      cout<<arr[i]<<" ";
  }

    return 0;
}