#include<bits/stdc++.h>
using namespace std;

//functions in unodered map run in O(1) time
int main(){
    unordered_map<string,int> m;
    //unordered map store key value in pairs using pair class
    pair<string,int> p("abc",1);
    m.insert(p);

    //another way to insert
    m["def"]=2;
    //find or access
    cout<<m["abc"]<<endl;
    //if key is not present [] will insert it with value 0
    //at function is same as [] but it throws error if key is not present

    //to check if key is present we use count function
    if(m.count("abc")==1){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
    //how many key value pairs are present
    cout<<m.size()<<endl;
    //updating keys
    m["abc"]=10;

    //erasing key value pairs
    m.erase("abc");
    if(m.count("abc")==1){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
    cout<<m.size()<<endl;

    return 0;

}