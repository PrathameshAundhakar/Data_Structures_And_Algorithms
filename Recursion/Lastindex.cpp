#include<bits/stdc++.h>

using namespace std;

int lastindex(int arr[],int n,int key, int i){
    if(i==-1){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    int smallans=lastindex(arr,n,key,i-1);

    return smallans;
}

int lastindex2(int arr[],int n,int key){
    if(n==0){
        return -1;
    }
    if(arr[n-1]==key){
        return n-1;

    }

    int smallans=lastindex2(arr,n-1,key);  
    
    return smallans;
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

    cout<<lastindex(arr,n,key,4)<<endl;
}