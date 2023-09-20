#include<bits/stdc++.h>
using namespace std;

int convresion(string s, int n){
    if(n == 0)
    {
        return 0;
    }

    int smallans = convresion(s, n-1);
    int lastdigit=s[n-1] - '0';
    int ans= smallans*10 + lastdigit;

    return ans;
}

int main(){
    string s;
    cin>>s;
    int n = s.length();
    cout<<convresion(s, n)<<endl;
}