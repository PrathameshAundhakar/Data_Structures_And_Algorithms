#include<bits/stdc++.h>
using namespace std;

bool issorted(int arr[],int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    bool smallans=issorted(arr+1,n-1);

    return smallans;
}

bool issorted2(int arr[],int n){
    if(n==0 || n==1){
        return true;
    }

    bool smallans=issorted2(arr+1,n-1);

    if(!smallans){
        return false;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return true;
    }
}

bool issorted3(int arr[],int n){
    if(n==0 || n==1){
        return true;
    }

    if(arr[n-2]>arr[n-1]){
        return false;
    }
    bool smallans=issorted3(arr,n-1);

    return smallans;
}
int main(){
    int n;
    cout<<"ENter the size"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(issorted(arr,n)){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not sorted"<<endl;
    }

    if(issorted2(arr,n)){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not sorted"<<endl;
    }
    
}
    
