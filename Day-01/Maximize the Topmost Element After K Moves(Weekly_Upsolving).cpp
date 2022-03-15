class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        if(k == 0) return nums[0];
        if(nums.size() == 1){
                if(k%2 == 0) return nums[0];
                else return -1;
            }
        if(k > nums.size()) return *max_element(nums.begin() , nums.end());
        
        int maxe = INT_MIN;
        
        for(int i=0;i<k-1;i++)
        {
            maxe = max(maxe , nums[i]);
        }
        
        if(k != nums.size()) return  nums[k] > maxe ? nums[k] : maxe;
        else return maxe;
        
        
        
        
        
        /*
        if(k == 0) return nums[0];
        if(k > nums.size()){
            if(nums.size() == 1){
                if(k%2 == 0) return nums[0];
                else return -1;
            }
            else{
                return *max_element(nums.begin() , nums.end());
            }
        }
        int maxe = INT_MIN;
        
        stack<int> st;
        for(int i = nums.size()-1;i>=0;i--){
            st.push(nums[i]);
        }
        while(k){
            maxe = max(maxe , st.top()) ;
            st.pop();
            k--;
            if(st.empty()) return -1;
            
            if(k == 0){
                return st.top();
            }
            
            if(k == 1){
                int ele = st.top();
                st.pop();
                if(!st.empty()) return  st.top() > maxe ? st.top() : maxe;
                else return maxe;
            }
        }  
        return 0;   */
    }
};