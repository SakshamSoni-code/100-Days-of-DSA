class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        
        unordered_map<string,int> mp;
        bool b=false;
        int ans=0;
        
        for(string s : words){
            mp[s]++;
        }
        
        
        
        for(string s : words){
            string r = s;
            reverse(r.begin(),r.end());
            if(r!=s && mp[s]>0 && mp[r]>0){
                mp[s]--;
                mp[r]--;
                ans+=4;
            }
            else if(s==r && mp[s]>1){
                mp[s]-=2;
                ans+=4;
            }
            else if(s==r && b==false && mp[s]>0){
                mp[s]--;
                ans+=2;
                b=true;
            }
        }
        return ans;
    }
};