class Solution {
public:

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // Method 1 -
        
        int pos = -1, s = 0 , e = arr.size()-1, mid , n = arr.size();
        vector<int> ans;

        // Search insert position code
        while(s<=e){
            mid = s + (e-s)/2;

            if(arr[mid] == x){
                s = mid + 1;
            }
            else if(arr[mid] < x){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }      

        pos = s;

        // cout<<"Pos is : "<<pos<<endl;


        int i = pos -1 , j = pos;
        

        while(k--){
            if(i>=0 && j < n ){
                if(abs(arr[i] - x) <= abs(arr[j] - x)){
                    i--;
                }
                else{
                    j++;
                }
            }
            else if (i < 0){
                j++;
            }
            else if(j >=n){
                ans.push_back(arr[i]);
                i--;
            }
        }

        // i pointing to ans-1 pos and j pointing to ans+1 pos
        return vector<int>(arr.begin()+ i +1, arr.begin()+j);


        // Method 2 - Two pointers -> decrease the difference and point l and h to answer window

        // int  l = 0 , h = arr.size()-1;

        // while( (h-l+1) > k ){
        //     if(abs(arr[l]- x) > abs(arr[h] -x)){
        //         l++;
        //     }
        //     else{
        //         h--;
        //     }
        // }

        // return vector<int> (arr.begin()+l, arr.begin()+h+1);
        
    }
};