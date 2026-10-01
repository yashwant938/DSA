#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>vec,int n){
    int candidate=0;
    int cnt=0;
    for(auto it: vec){
        if(cnt==0){
            candidate=it;
            
        }
        if(it==candidate){
            cnt++;
        }else{
            cnt--;
        }
        }

        cnt=0;
        for(auto it:vec){
            if(it==candidate){
                cnt++;
            }
        }
        if (cnt > vec.size() / 2)
            return candidate;
        return -1;
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
   cout<< majorityElement(vec,n)<<',';
    

    return 0;
}