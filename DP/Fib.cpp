#include<bits/stdc++.h>
using namespace std;

int fibanocci(int n,int *arr){
    if(n==0 || n==1){
        return n;
    }
    if(arr[n]!=0){
        return arr[n];
    }
    int output= fibanocci(n-1,arr)+fibanocci(n-2,arr);
    arr[n]=output;  
    return output;
}

int fib2(int n){
    if(n==0 || n==1){
        return n;
    }

    return fib2(n-1)+fib2(n-2);
}

int fib3(int n){
    //int *arr=new int(n+1);
    vector<int> arr(n+1,0);
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }

    int output=arr[n];
    //delete []arr;
    return output;
}

int main(){
    int n;
    cin>>n;
    cout<<fib3(n)<<endl;
    cout<<endl;
    cout<<fib2(n);
    cout<<endl;
    
}