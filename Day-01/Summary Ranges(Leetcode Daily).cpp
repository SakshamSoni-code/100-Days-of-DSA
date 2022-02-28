class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string> ans;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            int j=i;
            for(;j<nums.size();j++){
                if(j+1 < nums.size() && nums[j]==nums[j+1]-1){
                    cnt++;
                }
                else{
                    break;
                }
            }
            if(cnt > 0){
                string s1 = to_string(nums[i]);
                string s2 = to_string(nums[j]);
                s1.append("->");
                s1.append(s2);
                ans.push_back(s1);
                i=j;
                cnt=0;
            }
            else{
                string s3 = to_string(nums[i]);
                ans.push_back(s3);
            }
        }
        return ans;
      
    }
};