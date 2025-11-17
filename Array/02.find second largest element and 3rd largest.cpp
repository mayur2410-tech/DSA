// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> arr ={5,3,4,6,1};
   int n = arr.size();
   int secondLargest=0;
   int thirdLargest=0;
   int Largest = arr[0];
   for(int i = 0 ; i <n ; i++){
       if(arr[i]>Largest){
           thirdLargest=secondLargest;
          secondLargest=Largest;
           Largest=arr[i];
       }else if(arr[i]> secondLargest && arr[i]!=Largest){
           thirdLargest=secondLargest;
           secondLargest = arr[i];
       }else if(thirdLargest<arr[i] && arr[i]!=Largest && arr[i]!=secondLargest){
           thirdLargest=arr[i];
       }
   }
   cout<<thirdLargest<<endl;
  
   cout<<secondLargest<<endl;
   cout<<Largest;

    return 0;
}