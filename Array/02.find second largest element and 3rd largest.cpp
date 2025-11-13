// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> arr ={5,3,4,6,1};
   int n = arr.size();
   int secondLargest=0;
   int Largest = arr[0];
   for(int i = 0 ; i <n ; i++){
       if(arr[i]>Largest){
          secondLargest=Largest;
           Largest=arr[i];
       }else if(arr[i]> secondLargest && arr[i]!=Largest){
           secondLargest = arr[i];
       }
   }
   cout<<secondLargest<<endl;
   cout<<Largest;

    return 0;
}