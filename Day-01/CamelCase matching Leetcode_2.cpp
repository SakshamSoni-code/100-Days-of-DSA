class Solution {
public:
    static bool isMatch(string query , string pattern){
        int i=0;
        for(char c : query){
            if(i<pattern.size() && c==pattern[i])i++;  
            else if(c < 'a') return false; // if we found any other cap letter which is not in pattern ret false
        }
        return i==pattern.size(); // it means we found every char of patterm in given query word and there is no extra captital letter in query other than those present in pattern
    }
    vector<bool> camelMatch(vector<string>& queries, string pattern) {  
        
        vector<bool> ans;
        for(string s : queries){
            ans.push_back(isMatch(s, pattern)); // basically we will check if pattern is subs of s or not
        }
        return ans;
        /* Long Approach
        vector<bool> ans;
        unordered_map<char, vector<int>> mp;
        for(string s : queries){
            string word = s;
            int i=0, capsWord=0;
            for(auto c : word){
             if(c>=65 && c<=90){
                 capsWord++;
             }
              mp[c].push_back(i++);
            }
            
            bool b=false;
            string check = pattern;
            int latest=-1 , capsCheck=0;
            for(int j=0;j<check.size();j++)
            {
                if(check[j]>=65 && check[j]<=90){
                    capsCheck++;
                }
                auto it = upper_bound(mp[check[j]].begin() , mp[check[j]].end() , latest);
                if(it == mp[check[j]].end()){
                    break;
                }
                
                latest=*(it);
                if(j==check.size()-1){
                    if(capsCheck ==capsWord){
                       ans.push_back(true);
                       b=true;
                    }
                }               
            }
            if(b==false) ans.push_back(false);
            
            mp.clear();
        }
        return ans;     */
    }
};