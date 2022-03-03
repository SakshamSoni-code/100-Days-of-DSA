class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        
        // same as 3 sum
        
        sort(nums.begin() , nums.end());
        int diff=INT_MAX;
        int ans=0;
        for(int i=0;i<nums.size()-2;i++)
        {
            int low=i+1 , high=nums.size()-1;
            
            while(low < high){
                if(nums[i] + nums[low] + nums[high] == target) return target;
                
                else if(abs(nums[i] + nums[low] + nums[high] - target) < diff){
                    diff = abs(nums[i] + nums[low] + nums[high] - target);
                    ans= nums[i] + nums[low] + nums[high];
                }
                
                if(nums[i] + nums[low] + nums[high] < target) low++;
                else high--;
            }
        }
        return ans;
    }
};