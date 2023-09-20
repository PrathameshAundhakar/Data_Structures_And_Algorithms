#include<bits/stdc++.h>
using namespace std;

void inplaceHeapSort(int *input,int n){
    for(int i=1;i<n;i++){
        int childindex=i;
        while(childindex>0){
            int parentindex=(childindex-1)/2;
            if(input[childindex]<input[parentindex]){
                swap(input[childindex],input[parentindex]);
                childindex=parentindex;
            }
            else{
                break;
            }
        }
    }

    //Removemin n times
    //for asumption that last element is removed we will do size --;
    int size=n;
    while(size>=1){
    swap(input[0],input[size-1]);
    size--;
    int parentIndex=0;
        while(true){
            int lci=2*parentIndex+1;
            int rci=2*parentIndex+2;
            int mini=parentIndex;
            if(lci<size && input[lci]<input[mini]){
                mini=lci;
            }
            if(rci<size &&input[rci]<input[mini]){
                mini=rci;
            }
            swap(input[parentIndex],input[mini]);
            parentIndex=mini;
        }
    }
}
int main(){
    int input[]={5,1,2,0,8};
    inplaceHeapSort(input,5);
    for(int i=0;i<5;i++){
        cout<<input[i]<<" ";
    }
    return 0;
}