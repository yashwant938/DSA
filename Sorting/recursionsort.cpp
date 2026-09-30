#include <bits/stdc++.h>
using namespace std;
void RecursiveBubble(vector<int>& vec,int n){
    if(n==1)    return;
    for(int i=0;i<n-1;i++){
        if(vec[i]>vec[i+1]){
            swap(vec[i],vec[i+1]);
        }
    }
    RecursiveBubble(vec,n-1);
}

// void insertRecursively(vector<int>&vec ,int i){
//     if(i==vec.size()-1) return;
//     int temp=vec[i];
//     int index=0;
//     for(int j=i;j<vec.size()-1;j++){
//         if(temp>vec[j+1]){
//             temp=vec[j+1];
//             index=j+1;
//         }
//     }
//     swap(vec[index],vec[i]);
//     insertRecursively(vec,i+1);
// }
void selectionSortRecursive(vector<int>& vec, int i)
{
    if(i == vec.size() - 1)
        return;

    int minIndex = i;

    for(int j = i + 1; j < vec.size(); j++)
    {
        if(vec[j] < vec[minIndex])
        {
            minIndex = j;
        }
    }

    swap(vec[i], vec[minIndex]);

    selectionSortRecursive(vec, i + 1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    // RecursiveBubble(vec,n);
    selectionSortRecursive(vec,0);
    for(auto it:vec){
        cout<<it<<",";
    }
    return 0;
}