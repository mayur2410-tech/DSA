// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
using namespace std;
int main() {
  vector <int> arr = {1,2,1};
  int n = 3;
  vector<int>arr1(arr.size()*n);
  for(int i =0;i<=arr.size()*n;i++){
      arr1[i]= arr[i%arr.size()];
  }
for(int i=0;i<arr.size()*n;i++){
    cout<<arr1[i];
}
    return 0;
}