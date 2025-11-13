// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> arr ={5,3,4,2,1};
   int n = arr.size();
   int max = arr[0];
   int min = arr[0];
   for(int i =0 ; i <n ; i++){
       if (arr[i]<min){
           min = arr[i];
       }
       if(arr[i]>max){
           max=arr[i];
       }
   }
   cout<<min<<endl;
   cout<<max;

    return 0;
}