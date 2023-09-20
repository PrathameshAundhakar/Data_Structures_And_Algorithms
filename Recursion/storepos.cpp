#include<bits/stdc++.h>
using namespace std;

void store(int arr[],int n,int key,int i,vector<int> &v){
    if(i==n){
        return;
    }
    if(arr[i]==key){
        v.push_back(i);
    }
    store(arr,n,key,i+1,v);
}


void store1(int arr[],int n,int key,int i){
    if(i==n){
        return;
    }
    vector<int> v;
    if(arr[i]==key){
        v.push_back(i);
    }
    for(int j=0;j<v.size();j++){
        cout<<v[j]<<" ";
    }
    store1(arr,n,key,i+1);
}

void storeusingarray(int arr[],int n,int key,int i,int out[],int j){
    
}
int main(){
    int n;
    cout<<"Enter the size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans;
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;
    store(arr,n,key,0,ans);
    cout<<"Method 1"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    cout<<"Method 2"<<endl;
    store1(arr,n,key,0);

}