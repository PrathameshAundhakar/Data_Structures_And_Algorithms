#include<bits/stdc++.h>
using namespace std;

vector<int> Ksmall(int *arr,int n,int k){
    priority_queue<int> pq;
    // for(int i=0;i<k;i++){
    //     pq.push(arr[i]);
    // }
    // int i=k;
    // while(i<n){
    //     if(arr[i]<pq.top()){
    //         pq.pop();
    //         pq.push(arr[i]);
    //     }
    //     i++;
    // }
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }
    vector<int> ans;
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }


    
    return ans;
}


int main(){
    int arr[]={10,12,6,7,9};
    vector<int> ans=Ksmall(arr,5,3);
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}