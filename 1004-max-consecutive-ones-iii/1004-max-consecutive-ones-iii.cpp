class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int flips = 0;
        int i = 0;
        int j = 0;
        int maxLen = INT_MIN;
        int len = INT_MIN;
        while(j<n){
            if(nums[j]==1) j++;
            else{ //nums[j]==0
                if(flips<k) {
                    flips++;
                    j++;
                }
                else{ //flips==k
                //calculate length  
                len = j-i;
                maxLen = max(maxLen,len);
                    //i ko just uske aage wale 0 se ek aage index aage le jao 
                    while(nums[i]==1)
                    {
                        i++;//after this 100% nums[i]= 0
                    }
                    //iske baad hum jo hai wo jo hume just zero mila usse ek kadam aage le jayege jisse proper execution bane 
                    i++;    
                    j++;
                }
            }
        }
        len = j-i;
        maxLen = max(maxLen,len); 
        return maxLen;
    }
};