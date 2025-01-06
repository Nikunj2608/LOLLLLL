class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1) return 0 ;
        if(k%2==0){  // flip ans  k/2
            int ans =  kthGrammar(n-1,k/2);
            if(ans==0)
            {
               return 1;
            }
            else {
                
                return 0;
            }
        }
        else{   // same ans // odd    k/2+1
            int prevAns= kthGrammar(n-1,k/2+1);
            return prevAns;
        }
    }
};