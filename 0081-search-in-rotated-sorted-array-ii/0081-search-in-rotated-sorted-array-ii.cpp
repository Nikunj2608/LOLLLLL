class Solution {
public:
 bool predicate(int mid,vector<int>& nums, int target){
        int val;
        if(target< nums[0] == nums[mid]<nums[0]){
            val=nums[mid];
        }
        else{
            if(target<nums[0]){
                val=INT_MIN;
            }
            else{
                val=INT_MAX;
            }
        }
        return val>=target;

    }
    bool search(vector<int>& nums, int target) {
       
        int left=0;
        int right=nums.size()-1;
        while(left<right){

            while(left<right && nums[left]==nums[left+1]){
                left++;
            }
            while(left<right && nums[right]==nums[right-1]){
                right--;
            }
            int mid= left+ (right-left)/2;
            

            if(predicate(mid,nums,target)){
                right=mid;
            }
            else{
                if(left<nums.size()-1)
                left=mid+1;
            }
        }
        return nums[left]==target ? true:false;
    }
};