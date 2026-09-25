#include <bits/stdc++.h>
using namespace std;

/*
Pattern 11
1
01
101
0101
*/
void pattern11(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }
}

/*
Pattern 12
1      1
12    21
123  321
12344321
*/
void pattern12(int n) {
    for (int i = 1; i <= n; i++) {

        // Numbers
        for (int j = 1; j <= i; j++)
            cout << j;

        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";

        // Numbers
        for (int j = i; j >= 1; j--)
            cout << j;

        cout << endl;
    }
}

/*
Pattern 13
1
2 3
4 5 6
7 8 9 10
*/
void pattern13(int n) {
    int num = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

/*
Pattern 14
A
AB
ABC
ABCD
*/
void pattern14(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch;
        }
        cout << endl;
    }
}

/*
Pattern 15
ABCD
ABC
AB
A
*/
void pattern15(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + n - i - 1; ch++) {
            cout << ch;
        }
        cout << endl;
    }
}

/*
Pattern 16
A
BB
CCC
DDDD
*/
void pattern16(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'A' + i;

        for (int j = 0; j <= i; j++) {
            cout << ch;
        }

        cout << endl;
    }
}

/*
Pattern 17

   A
  ABA
 ABCBA
ABCDCBA
*/
void pattern17(int n) {

    for (int i = 0; i < n; i++) {

        // Spaces
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";

        // Increasing characters
        char ch = 'A';

        for (int j = 0; j <= i; j++) {
            cout << ch;
            ch++;
        }

        // Decreasing characters
        ch -= 2;

        for (int j = 0; j < i; j++) {
            cout << ch;
            ch--;
        }

        cout << endl;
    }
}

/*
Pattern 18
D
CD
BCD
ABCD
*/
void pattern18(int n) {
    for (int i = 0; i < n; i++) {

        for (char ch = 'A' + n - i - 1;
             ch <= 'A' + n - 1;
             ch++) {

            cout << ch;
        }

        cout << endl;
    }
}

/*
Pattern 19

********
***  ***
**    **
*      *
*      *
**    **
***  ***
********
*/
void pattern19(int n) {

    // Upper half
    for (int i = 0; i < n; i++) {

        // Stars
        for (int j = 0; j < n - i; j++)
            cout << "*";

        // Spaces
        for (int j = 0; j < 2 * i; j++)
            cout << " ";

        // Stars
        for (int j = 0; j < n - i; j++)
            cout << "*";

        cout << endl;
    }

    // Lower half
    for (int i = 0; i < n; i++) {

        // Stars
        for (int j = 0; j <= i; j++)
            cout << "*";

        // Spaces
        for (int j = 0; j < 2 * (n - i - 1); j++)
            cout << " ";

        // Stars
        for (int j = 0; j <= i; j++)
            cout << "*";

        cout << endl;
    }
}

/*
Pattern 20

*      *
**    **
***  ***
********
***  ***
**    **
*      *
*/
void pattern20(int n) {

    int spaces = 2 * n - 2;

    for (int i = 1; i <= 2 * n - 1; i++) {

        int stars = i;

        if (i > n)
            stars = 2 * n - i;

        // Stars
        for (int j = 1; j <= stars; j++)
            cout << "*";

        // Spaces
        for (int j = 1; j <= spaces; j++)
            cout << " ";

        // Stars
        for (int j = 1; j <= stars; j++)
            cout << "*";

        cout << endl;

        if (i < n)
            spaces -= 2;
        else
            spaces += 2;
    }
}

/*
Pattern 21

****
*  *
*  *
****
*/
void pattern21(int n) {

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            if (i == 0 ||
                j == 0 ||
                i == n - 1 ||
                j == n - 1) {

                cout << "*";
            }
            else {
                cout << " ";
            }
        }

        cout << endl;
    }
}

/*
Pattern 22

4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
void pattern22(int n) {

    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size; j++) {

            int top = i;
            int left = j;
            int right = size - 1 - j;
            int bottom = size - 1 - i;

            int minDistance = min(
                min(top, bottom),
                min(left, right)
            );

            cout << n - minDistance;
        }

        cout << endl;
    }
}

/* =====================================================
   EXTRA PATTERNS
   ===================================================== */


/*
Pattern 23 - Hollow Triangle

*
**
* *
*  *
*****
*/
void pattern23(int n) {

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {

            if (j == 1 ||
                j == i ||
                i == n) {

                cout << "*";
            }
            else {
                cout << " ";
            }
        }

        cout << endl;
    }
}


/*
Pattern 24 - Hollow Pyramid

    *
   * *
  *   *
 *     *
*********
*/
void pattern24(int n) {

    for (int i = 1; i <= n; i++) {

        // Spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // Pyramid
        for (int j = 1; j <= 2 * i - 1; j++) {

            if (j == 1 ||
                j == 2 * i - 1 ||
                i == n) {

                cout << "*";
            }
            else {
                cout << " ";
            }
        }

        cout << endl;
    }
}


/*
Pattern 25 - Pascal Triangle

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/
void pattern25(int n) {

    for (int i = 0; i < n; i++) {

        long long value = 1;

        for (int j = 0; j <= i; j++) {

            cout << value << " ";

            value = value * (i - j) / (j + 1);
        }

        cout << endl;
    }
}


int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 4;

    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // pattern15(n);
    // pattern16(n);
    // pattern17(n);
    // pattern18(n);
    // pattern19(n);
    // pattern20(n);
    // pattern21(n);
    // pattern22(n);

    // Extra
    // pattern23(n);
    // pattern24(n);
    pattern25(n);

    return 0;
}