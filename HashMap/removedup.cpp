#include<bits/stdc++.h>
using namespace std;

vector<int> duplicate(int *arr,int n){
    vector<int> output;
    unordered_map<int,bool> map;
    for(int i=0;i<n;i++){
        if(map.count(arr[i]==0)){
            output.push_back(arr[i]);
            map[arr[i]]=true;
        }

    }
    return output;
}
int main(){
    
    int arr[]={1,2,3,1,2,3,4,5,6,7,8,9,0,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> output=duplicate(arr,n);
    for(int i=0;i<output.size();i++){
        cout<<output[i]<<" ";
    }
    return 0;
}