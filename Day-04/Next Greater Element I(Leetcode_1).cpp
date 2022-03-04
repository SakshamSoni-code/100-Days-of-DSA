class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        
        
        // O(n + m)  s.c->O(n) o(n)
        unordered_map<int,int> mp;
        
        stack<int> st;
        
        vector<int> ans(nums1.size() , -1);
        
        for(int i=0;i<nums2.size();i++)
        {
            int ele = nums2[i];
            
            while(st.empty()==false && ele > st.top()){
                mp[st.top()]=ele;
                st.pop();
            }
            
            st.push(ele);
        }
        
        for(int i=0;i<nums1.size();i++)
        {
            if(mp.find(nums1[i]) != mp.end()){
                ans[i]=mp[nums1[i]];
            }
        }
        return ans;
        
        
        /* BRITE FORCE n^3
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j]){
                    int k=j+1;
                    for(;k<nums2.size();k++)
                    {
                        if(nums2[k] > nums2[j]){
                            break;
                        }
                    }
                    
                    if(k!=nums2.size()) ans.push_back(nums2[k]);
                    else ans.push_back(-1);
                    break;
                }
            }
        }
        return ans; */
    }
};