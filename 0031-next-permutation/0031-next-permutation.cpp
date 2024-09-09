class Solution {
public:
    void reversePart(vector<int>& nums , int i , int j){
        int temp;
        while(i<=j){
            int temp = nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;

        }
    }   
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        //finding the pivot index
        int idx = -1;
        for(int i = n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                idx = i;
                break;
            }
        }
        if(idx==-1){
            reversePart(nums,0,n-1);
            return;
        }
        // 2) sorting / reverse after pivot
        //inbuilt function
        reverse(nums.begin()+(idx+1), nums.end());
        // 3) Finding the just greater element than the idx 
        int j = -1;
        for(int i = idx +1 ; i<n ;i++)
            {
                if(nums[i]>nums[idx])
                {
                    j = i;
                    break;
                }
            }
        // 4) swapping idx and j
        int temp=nums[idx];
        nums[idx]=nums[j];
        nums[j]=temp;
    }

};