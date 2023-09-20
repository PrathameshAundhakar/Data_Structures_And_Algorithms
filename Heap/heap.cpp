#include <bits/stdc++.h>
using namespace std;

class PriorityQueue
{
    vector<int> pq;

public:
    PriorityQueue()
    {
    }
    bool isEmpty()
    {
        return pq.size() == 0;
    }

    int getsize()
    {
        return pq.size();
    }
    int getmin()
    {
        if (isEmpty())
        {
            return 0;
        }
        return pq[0];
    }
    void insert(int element)
    {
        pq.push_back(element);
        int childIndex = pq.size() - 1;
        while (childIndex > 0)
        {
            int pI = (childIndex - 1) / 2;
            if(pq[childIndex] < pq[pI])
            {
                swap(pq[childIndex], pq[pI]);
                childIndex = pI;
            }
            else
            {
                break;
            }
        }
    }
    int removemin(){
        if(isEmpty()){
            return 0;
        }
        int ans=pq[0];
        swap(pq[0],pq[pq.size()-1]);
        pq.pop_back();
        //Down heapify
        int parentIndex=0;
        while(true){
            int lci=2*parentIndex+1;
            int rci=2*parentIndex+2;
            int mini=parentIndex;
            if(lci<pq.size() && pq[lci]<pq[mini]){
                mini=lci;
            }
            if(rci<pq.size() &&pq[rci]<pq[mini]){
                mini=rci;
            }
            swap(pq[parentIndex],pq[mini]);
            parentIndex=mini;
        }
        return ans;
    }
};

int main()
{
    PriorityQueue p;
    p.insert(100);
    p.insert(10);
    p.insert(15);
    p.insert(4);
    p.insert(17);
    p.insert(21);
    p.insert(67);

    cout << p.getmin() << endl;
    cout << p.getsize() << endl;
    while(!p.isEmpty()){
        cout<<p.removemin()<<" ";
    }
    return 0;
}