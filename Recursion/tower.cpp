#include<bits/stdc++.h>
using namespace std;

int towerofhanoi(int n){
    if(n==0){
        return 0;
    }

    return towerofhanoi( n - 1 ) + 1 + towerofhanoi( n - 1 );
}

void printsteps(int n,char source,char destination,char helper){
    if(n==0){
        return;
    }

    printsteps(n-1,source,helper,destination);
    cout<<"Moving ring "<<n<<" from "<<source<<" to "<<destination<<endl;
    printsteps(n-1,helper,destination,source);
}

int main(){
    int n;
    cin>>n;
    cout<<towerofhanoi(n)<<endl;

    printsteps(n,'A','C','B');
}