// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>arr1 , vector<int>arr2,int sum){
    int i = 0,j=0;
    vector<int> temp;
    while(i!=arr1.size() && j!=arr2.size()){
        if(arr1[i]<=arr2[j]){
            temp.push_back(arr1[i]);
            i++;
        }else{
            temp.push_back(arr2[j]);
            j++; 
        }
    }
    while(i!=arr1.size() ){
        temp.push_back(arr1[i]);
            i++;
    }
    while(j!=arr2.size() ){
        temp.push_back(arr2[j]);
            j++;
    }
    for(int i = 0 ; i <sum;i++){
        cout<<temp[i]<<endl;
    }
    
}

int main() {
   vector<int>arr1={3,5,7};
   vector<int>arr2={2,4,6};
   int sum = arr1.size() + arr2.size();
   merge(arr1,arr2,sum);

    return 0;
}