#include<bits/stdc++.h>

using namespace std;

bool palindrome(int arr[],int s,int e){
    if(s>e){
        return true;
    }
    if(arr[s]==arr[e]){
        return palindrome(arr,s+1,e-1);
    }
    else{
        return false;
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
     if(palindrome(arr,0,n-1)){
         cout<<"Palindrome"<<endl;
     }
     else{
         cout<<"Not palindrome"<<endl;
     }

}