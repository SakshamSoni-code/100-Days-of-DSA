class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        
        map<int,vector<int>> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            int newValue=0;
            string num = to_string(nums[i]);
            
            for(int j=0;j<num.size();j++)
            {
                int newDigit = mapping[num[j]-'0'];
                newValue += newValue * 10 + newDigit;
            }
            
            mp[newValue].push_back(nums[i]);
        }
        vector<int> ans;
        for(auto it : mp){
            for(int x : it.second){
               ans.push_back(x); 
            }
        }
        return ans;
    }
};