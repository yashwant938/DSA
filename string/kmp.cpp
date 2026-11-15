// Pattern: A B A B A C
// LPS:     0 0 1 2 3 0
#include<bits/stdc++.h>
using namespace std;

vector<int> computeLPS(string pattern) {
    int m=pattern.size();
    vector<int> lps(m, 0);
    int len = 0;
    int j = 1;
    while (j < m) {

        if (pattern[j]==pattern[len]) {
            len++;
            lps[j] = len;
            j++;
        }
        else {
            if (len != 0) {
                len = lps[len - 1];
            }
            else {
                lps[j] = 0;
                j++;
            }
        }
    }

    return lps;
}

vector<int> KMP(string text, string pattern){
    vector<int>matches;
    if(pattern.empty()) return matches;
      vector<int>lps=computeLPS(pattern);
    int i=0;
    int j=0;
    while(i<text.size()){
        if(text[i]==pattern[j]){
            i++;
            j++;
        }
        if(j==pattern.size())
        {
          matches.push_back(i-j);
          j=lps[j-1];  
        }else if(i<text.size()&& text[i]!=pattern[j]){
            if(j!=0){
                j=lps[j-1];
            }else{
                i++;
            }
        }
    }
    return matches;
}
int main(){
     string text = "ABABDABACDABABCABAB";
    string pattern = "ABABCABAB";

    vector<int> matches = KMP(text, pattern);

    for (int pos : matches) {
        cout << "Pattern found at index: " << pos << "\n";
    }
}