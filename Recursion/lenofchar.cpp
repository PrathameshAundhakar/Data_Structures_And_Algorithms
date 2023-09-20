#include<bits/stdc++.h>
using namespace std;

int length(char arr[]){
    if(arr[0]=='\0'){
        return 0;
    }
    int ans= 1 + length(arr+1);

    return ans;
}


int main(){
    char arr[]= "Prathamesh";
    cout<<length(arr)<<endl;
}