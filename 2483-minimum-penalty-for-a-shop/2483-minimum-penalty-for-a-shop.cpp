class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        vector<int> pr(n+1);
        vector<int> su(n+1);
        pr[0] = 0;
        
        for(int i = 0 ; i<n; i++){
           
            pr[i+1] = pr[i] + ((customers[i]=='N') ? 1 : 0);
                
        }
        su[n]=0;
        for(int i = n-1 ; i>=0; i--){
            su[i] = su[i+1] +  ((customers[i]=='Y') ? 1 : 0);
                
        }
      
        for(int i = 0 ; i<=n;i++)
        {
            pr[i]+=su[i];
        }
        auto minElementIter = min_element(pr.begin(), pr.end());

    // Get the index of the minimum element
    int minIndex = distance(pr.begin(), minElementIter);
    return minIndex;
    }
};