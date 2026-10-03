#include <bits/stdc++.h>
using namespace std;
void maximumSubaarySum(vector<int>&vec){
    int maxi=INT_MIN,sum=0;
    for(int i=0;i<vec.size();i++){
        sum+=vec[i];
        maxi=max(sum,maxi);
        if(sum<0)   sum=0;
        
    }
    cout<<"Maximum sum is"<<maxi<<endl;
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

    maximumSubaarySum(vec);

    return 0;
}