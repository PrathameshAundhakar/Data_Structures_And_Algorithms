#include<bits/stdc++.h>
using namespace std;

int minsteps(int n){
    if(n <= 1){
        return 0;
    }
    int x=minsteps(n-1);
    int y=INT_MAX,z=INT_MAX;
    if(n%2==0){
        y = minsteps(n/2);
    }
    if(n%3==0){
        z = minsteps(n/3);
    }
    int ans1=min(y,z);
    int ans= min(x,ans1)+1;
    return ans;
}

//Memorization method top down approach

int helper(int n,vector<int>& arr){
    if(n<=1){
        return 0;
    }
    if(arr[n]!=-1){
        return arr[n];
    }
    int x=helper(n-1,arr);
    int y=INT_MAX,z=INT_MAX;
    if(n%2==0){
        y = helper(n/2,arr);
    }
    if(n%3==0){
        z = helper(n/3,arr);
    }
    int ans1=min(y,z);
    int ans= min(x,ans1)+1;
    arr[n]=ans;

    return ans;
}

int minsteps2(int n){
    vector<int> arr(n+1,-1);
    return helper(n,arr);
}

//Bottom up approach

int minsteps3(int n){
    vector<int> dp(n+1,-1);
    dp[0]=0;
    dp[1]=0;
    //dp[i] stores the min steps to reach i,ans is stored in dp[n]
    for(int i=2;i<=n;i++){
        int x=dp[i-1];
        int y=INT_MAX,z=INT_MAX;
        if(i%2==0){
            y=dp[i/2];
        }
        if(i%3==0){
            z=dp[i/3];
        }
        int ans1=min(y,z);
        dp[i]=min(x,ans1)+1;
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    cout<<minsteps2(n);
}