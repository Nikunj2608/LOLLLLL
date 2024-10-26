#include<iostream>
using namespace std;
int main()
{
    // The watermelon should be divided into 2 parts and each part should be an even number

    
    int w ; 
    cin>>w;
    if(w%2==0 && w>=4)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}