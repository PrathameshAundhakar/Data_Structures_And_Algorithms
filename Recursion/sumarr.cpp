#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    int sum1=arr[0]+sum(arr+1,n-1);
    return sum1;
}

int sumarr(int arr[],int n){
    if(n==0){
        return 0;
    }

    return arr[n-1]+sumarr(arr,n-1);
}


int main(){
    int n;
    cout<<"Enter the size";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<sum(arr,n)<<endl;

    cout<<sumarr(arr,n)<<endl;
}