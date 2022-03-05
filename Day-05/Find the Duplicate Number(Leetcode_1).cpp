class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // LINKED-LIST CYCLE METHOD (TORTOISE METHOD)  t.c->o(n)  s.c->o(1)
        
        int slow = nums[0];
        int fast = nums[0];
        
        do{
            slow = nums[slow]; // moving slow by 1
            fast = nums[nums[fast]];     // movig fast by 2
        }while(slow != fast);
        
        fast = nums[0];
        
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];    // moving slow and fast by 1 both
        }
        
        return slow;
        
        
        /* t.c->o(n)  s.c->O(1)  But here we are manipulating our i/p array
          for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1]>0){
                nums[abs(nums[i])-1]= -1 * nums[abs(nums[i])-1];
            }
            else{
              return abs(nums[i]);
            }
        }
        return 0;  */
    }
};