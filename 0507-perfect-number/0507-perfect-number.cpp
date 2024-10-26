class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0 ;
        int n = num;
     for(int i = 1;i<sqrt(n);i++){
        if(n%i==0) sum+= i;

     }
     for(int i = sqrt(n);i>1;i--){
        if(n%i==0) sum += n/i;
     }
     return (sum==n);
    }
};