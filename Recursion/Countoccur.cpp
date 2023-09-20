#include<bits/stdc++.h> 
using namespace std;

int countoccurr(int arr[],int n,int key, int i){
    if(i==n){
        return 0;
    }
    int count=0;
    if(arr[i]==key){
        count++;
    }
    int smallans=countoccurr(arr,n,key,i+1);
    return smallans+count;
}


void countoccur2(int arr[],int n,int key,int i,int &ans){
    if(i==n){
        return;
    }
    if(arr[i]==key){
        ans++;
    }
    countoccur2(arr,n,key,i+1,ans);
}

int countoccur3(int arr[],int n,int key,int i){
    if(i==n){
        return 0;
    }
    if(arr[i]==key){
        return 1 + countoccur3(arr,n,key,i+1);
    }
    else{
        return countoccur3(arr,n,key,i+1);
    }
}
int main(){
    int n;
    cout<<"Enter the size";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;

    // cout<<countoccurr(arr,n,key,0)<<endl;
    cout<<countoccur3(arr,n,key,0)<<endl;
}