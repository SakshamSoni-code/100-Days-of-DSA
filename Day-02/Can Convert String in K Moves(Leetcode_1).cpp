class Solution {
public:
    bool canConvertString(string s, string t, int k) {
        
        if(s.size() != t.size()) return false;
        vector<int> v(26,0); // bc max diff can be z-a whic is 25
        
        for(int i=0;i<s.size();i++)
        {
            int shift = t[i]-s[i] + (t[i]<s[i] ? 26 : 0);
            if(shift != 0 && shift + v[shift] * 26 > k){
                return false;
            }
            v[shift]++;
        }
        return true;    
    }
};