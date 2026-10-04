#include <bits/stdc++.h>
using namespace std;

void stockBuySell(vector<int> vec) {
    vector<int> mini;
    vector<int> maxi;
    mini.push_back(vec[0]);
    for(int i=1; i<vec.size(); i++) {

        mini.push_back(min(mini.back(), vec[i]));
    }
    maxi.push_back(vec[vec.size() - 1]);
    for(int i = vec.size() - 2; i >= 0; i--) {

        maxi.push_back(max(maxi.back(), vec[i]));
    }
    reverse(maxi.begin(), maxi.end());
    int temp=INT_MIN;
    for(int i=0;i<vec.size();i++){
        temp=max(temp,maxi[i]-mini[i]);
    }
    cout<<"maximum value is "<<"="<<temp;
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
 stockBuySell(vec);
    

    return 0;
}