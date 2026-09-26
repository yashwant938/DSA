#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
//pair
/*
    pair<int,int>p={1,2};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    pair<int,pair<int,int>>pp={1,{2,3}};
    cout<<pp.second.first;
    return 0;*/
    /*vector<int>vec;
    int n=5;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    vec.push_back(23);
    vec.emplace_back(12);

    for(auto it:vec){
        cout<<it<<endl;
    }
    vector<int>v2(vec);
    */
   //list->interal operation is doubly linked list
   list<int>ls;
    ls.push_back(2);
    ls.push_front(12);

    deque<int>dq;
    //same as lst
    //stack
    // stack<int>st;
    queue<int>q;
    q.push(12);
    q.push(123);
    q.front();
    q.back();
    //it is max heap
    priority_queue<int>pq;
    //max elemetn will be  in top
    //to make minheap[ we have to do this]
    priority_queue<int,vector<int>,greater<int>>pq;
    //set container store everything in sorted and unqiue
    set<int>st;
    st.insert(1);
    st.insert(23);
    st.emplace(123);
    auto it=st.find(23);
    //if not find then this fid will return the last element after that index which is after end
    st.erase(12);
    int cnt=st.count(12);
    //first second it's kind of range to erase
    // st.erase(it1, it2);
    auto it=st.lower_bound(2);
    auto it=st.upper_bound(3);

    //,multiset
    /*
    everythinbg same as set
    only store duplicate element also
    */
   multiset<int>ms;
   ms.insert(1);
   ms.insert(2);
   ms.insert(3);
   //unordred set
   // it does not store in sorted order other then that everything is as set
   //lower bound and upper bound doesn't wopkr here
   map<int,int>mpp;
   map<int,pair<int,int>>mpair;
    mpp[1]=2;
    mpp.emplace({5,4});
    mpp.insert({2,4});
     mpair.insert({33,{12,34}});   


    }