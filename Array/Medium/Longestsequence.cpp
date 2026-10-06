#include <bits/stdc++.h>
using namespace std;
int LongestsuccesiveElement(vector<int>&vec ){
    int n=vec.size();
    if(n==0)    return 0;
    int longest=1;
    unordered_set<int>st;
    for(int i=0;i<n;i++){
        st.insert(vec[i]);

    }

    for(auto it:st){
        if(st.find(it-1)==st.end()){
           int cnt=1;
           int x=it;
           while(st.find(x+1)!=st.end()){
            x=x+1;
            cnt=cnt+1;
           }
           longest=max(longest,cnt);
        }
    }
    return longest;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    cout<<LongestsuccesiveElement(vec);

    return 0;
}