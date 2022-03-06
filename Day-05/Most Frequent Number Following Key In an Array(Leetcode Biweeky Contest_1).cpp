class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            if(i<nums.size()-1 && nums[i]==key){
                mp[nums[i+1]]++;
            }
        }
        
        int freq = 0;
        int target;
        for(auto it : mp){
             if(it.second > freq){
                 freq=it.second;
                 target = it.first;
             }
        }
        return target;
    }
};