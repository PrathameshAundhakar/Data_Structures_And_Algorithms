#include<bits/stdc++.h>
using namespace std;

int firstindex(int arr[],int n,int key,int i){
    if(i == n){
        return -1;
    }
    if( arr[i] == key){
        return i;
    }

    return firstindex(arr,n,key,i+1);
}


int main(){
    int n;
    cout<<"Enter the size";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}