// #include <bits/stdc++.h>
// using namespace std;
// int checkMaximum(vector<int>&vec,int k){
//     int leftsum=0;
//     // int rightsum=0;
//     // int sum=0;
//     int maxi=INT_MIN;
//     for(int i=0;i<k;i++){
//         leftsum+=vec[i];
//     }
//     for(int i=vec.size()-1;i>=k;i--){
//         maxi=max(maxi,leftsum);
//         leftsum-=vec[i-vec.size()+1];
//         leftsum+=vec[i];
//     }
//     return maxi;
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;

//     vector<int> vec(n);

//     for (int i = 0; i < n; i++) {
//         cin >> vec[i];
//     }

//     int k;
//     cin>>k;
//     cout<<checkMaximum(vec,k);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int checkMaximum(vector<int>& vec, int k) {
    int n = vec.size();
    int sum = 0;

    // Step 1: Pick first k elements
    for (int i = 0; i < k; i++) {
        sum += vec[i];
    }

    int maxi = sum;

    // Step 2: Start swapping left with right
    int left = k - 1;
    int right = n - 1;

    while (left >= 0) {
        sum -= vec[left];
        sum += vec[right];

        maxi = max(maxi, sum); 

        left--;
        right--;
    }

    return maxi;
}

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int k;
    cin >> k;

    cout << checkMaximum(vec, k);
    return 0;
}
