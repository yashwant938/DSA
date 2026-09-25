#include <bits/stdc++.h>
using namespace std;

/*
Pattern 1
****
****
****
****
*/
void pattern1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

/*
Pattern 2
*
**
***
****
*/
void pattern2(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

/*
Pattern 3
1
12
123
1234
*/
void pattern3(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

/*
Pattern 4
1
22
333
4444
*/
void pattern4(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
}

/*
Pattern 5
****
***
**
*
*/
void pattern5(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

/*
Pattern 6
1234
123
12
1
*/
void pattern6(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

/*
Pattern 7
   *
  ***
 *****
*******
*/
void pattern7(int n) {
    for (int i = 0; i < n; i++) {

        // Spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }

        // Spaces (optional while printing)
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << endl;
    }
}

/*
Pattern 8
*******
 *****
  ***
   *
*/
void pattern8(int n) {
    for (int i = 0; i < n; i++) {

        // Spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
            cout << "*";
        }

        // Spaces (optional)
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        cout << endl;
    }
}

/*
Pattern 9
   *
  ***
 *****
*******
*******
 *****
  ***
   *
*/
void pattern9(int n) {
    pattern7(n);
    pattern8(n);
}

/*
Pattern 10
*
**
***
****
***
**
*
*/
void pattern10(int n) {

    // Total rows = 2*n - 1
    for (int i = 1; i <= 2 * n - 1; i++) {

        int stars = i;

        if (i > n) {
            stars = 2 * n - i;
        }

        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 4;

    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);
    pattern10(n);

    return 0;
}