#include <bits/stdc++.h>
using namespace std;
vector<int> MajorityNbyThree(vector<int>& nums){
    int n=nums.size();
    int candidate1=0, candidate2=0;
    int cnt1=0, cnt2=0;
    for(int x:nums){
        if(x==candidate1){
            cnt1++;
        }else if(x==candidate2){
            cnt2++;
        }else if(cnt1==0){
            candidate1=x;
            cnt1=1;

        }else if(cnt2==0){
            candidate2=x;
            cnt2=1;
        }else{
            cnt1--;
            cnt2--;

        }

    }

    cnt1=0;
    cnt2=0;
    for(int x:nums){
        if(x==candidate1){
            cnt1++;
        }else if(x==candidate2){
            cnt2++;
        }
    }
    vector<int>ans;
    if(cnt1>n/3)
        ans.push_back(candidate1);
    if(cnt2>n/3)
        ans.push_back(candidate2);
        
        return ans;
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

    vector<int> ans=MajorityNbyThree(vec);

   for (int x : ans) {
    cout << x << " ";
}

    return 0;
}