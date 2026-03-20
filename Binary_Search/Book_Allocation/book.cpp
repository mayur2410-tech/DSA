class Solution {
  public:
  
  bool isValid(vector<int> &arr,int k , int maxAllowed){
      int stu = 1;
      int pages = 0;
      for(int i=0 ; i<arr.size();i++){
          if(arr[i] > maxAllowed) return false;
          if(pages + arr[i] <= maxAllowed){
              pages += arr[i];
          }else{
              stu++;
              pages = arr[i];
          }
      }
      if(stu <= k){
          return true;
      }else{
      return false;
      }
  };
  
  
  
    int findPages(vector<int> &arr, int k) {
       if(arr.size() < k){
           return -1;
       }
       int min = 0 ;
       int max = accumulate(arr.begin(),arr.end(),0);
       int ans = -1 ;
       while(min <= max){
           int mid = min + (max - min)/2;
           if(isValid(arr,k,mid)){
               ans = mid;
               max = mid - 1;
           }else{
               min = mid + 1;
           }
       }
       
       return ans;
       
       
       
        
    }
};