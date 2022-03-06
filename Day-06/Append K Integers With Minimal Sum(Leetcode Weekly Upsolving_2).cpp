class Solution {
public:
    static long long findSum(long long L , long long R){
        return  (R*(R+1))/2 - (L*(L+1))/2;
    }
    long long minimalKSum(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        nums.insert(nums.begin(),0);
        nums.push_back(1e9);
        long long sum=0;
        
        
        for(int i=1;i<nums.size();i++)
        {
            if(k==0) break;
            long long possible = min(k , nums[i]-nums[i-1]-1);
            if(possible > 0){
               sum += findSum(nums[i-1] , nums[i-1]+possible);
               k-=possible;
            }
        }
       
        return sum;
        
    }
};