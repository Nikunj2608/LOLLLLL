class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int k = minutes;
        // int max = INT_MIN;
        int maxLoss = 0;
        int prevLoss = 0 ;
        for(int i = 0;i<k;i++){
            if(grumpy[i]==1) prevLoss += customers[i] ;
        }
         maxLoss = prevLoss;
        int maxIdx = 0;
        int i = 1;
        int j = k;
        while(j<n){
            int currLoss = prevLoss ;
            if(grumpy[j]==1) currLoss += customers[j];
            if(grumpy[i-1]==1) currLoss -= customers[i-1];
            if(maxLoss<currLoss){
                maxLoss = currLoss;
                maxIdx = i;
            }
            prevLoss = currLoss;
            i++;
            j++;
        }
        for(int i = maxIdx;i<maxIdx+k;i++)
        {
            grumpy[i]=0;

        }
        int sum = 0;
        for(int i = 0 ;i<n;i++){
            if(grumpy[i]==0) sum+= customers[i];
        }
        return sum;
    }
};