class Solution {
  public:
  
  bool isPossible(int mid,vector<int> &stalls, int k){
      int cow = 1;
      int lastPosition = stalls[0];
      for(int i = 1 ; i < stalls.size();i++){
          if(stalls[i] - lastPosition >= mid ){
              cow++;
              lastPosition = stalls[i];
          }
          if(cow == k ){
              return true;
          }
      }
      return false;
  };
  
  
    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(),stalls.end());
        int min = 1;
        int max = stalls[stalls.size()-1] - stalls[0];
        int ans = 0 ;
        while(min <= max){
            int mid = min + (max - min)/2;
            if(isPossible(mid,stalls,k)){
                ans = mid ;
                min = mid + 1;
            }else{
                max = mid - 1;
            }
        }
        return ans;
        
        
    }
};