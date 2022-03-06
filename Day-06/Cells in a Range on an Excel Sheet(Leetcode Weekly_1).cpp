class Solution {
public:
    vector<string> cellsInRange(string s) {
        
        

        char c1 = s[0], r1 = s[1], c2 = s[3], r2 = s[4];
        
        vector<string> ans;
     
        string temp="";
        for(int i= int(c1);i<=int(c2);i++){
            temp = char(i);
            for(int j=int(r1);j<=int(r2);j++){
               temp+=char(j);
               ans.push_back(temp);
               temp.pop_back();
           }
        }
       return ans; 
    }
};