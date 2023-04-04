#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void pattern1(int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == n - 1) {
                cout << "*";
            } else
                cout << "* ";
        }
        cout << endl;
    }

}
void pattern2(int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }

        cout << endl;
    }

}

void pattern3(int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << j + 1 << " ";
        }

        cout << endl;
    }

}
void pattern4(int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << i + 1 << " ";
        }

        cout << endl;
    }

}
void pattern5(int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n - i - 1; j++) {
            cout << "* ";
        }

        cout << endl;
    }

}
void pattern6(int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n - i - 1; j++) {
            cout << j + 1 ;
        }

        cout << endl;
    }

}
void pattern7(int n) {

    for (int i = 0; i < n; i++) {

        for (int j  = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int j  = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }


        for (int j  = 0; j < n - i - 1; j++) {
            cout << " ";
        }



        cout << endl;
    }

}
void pattern8(int n) {

    for (int i = 0; i < n; i++) {

        for (int j  = 0; j < i; j++) {
            cout << " ";
        }
        for (int j  = 0; j < 2 * n - (2 * i + 1); j++) {
            cout << "*";
        }


        for (int j  = 0; j < i; j++) {
            cout << " ";
        }



        cout << endl;
    }

}

void pattern9(int n) {

    for (int i = 0; i < n; i++) {

        for (int j  = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int j  = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }


        for (int j  = 0; j < n - i - 1; j++) {
            cout << " ";
        }



        cout << endl;
    }

    for (int i = 0; i < n; i++) {

        for (int j  = 0; j < i; j++) {
            cout << " ";
        }
        for (int j  = 0; j < 2 * n - (2 * i + 1); j++) {
            cout << "*";
        }


        for (int j  = 0; j < i; j++) {
            cout << " ";
        }



        cout << endl;
    }

}
void pattern10(int n) {

    for (int i = 0; i < 2 * n ; i++) {

        int star  = i;

        if (i > n) star = 2 * n - i;

        for (int j = 0; j < star; j++) {
            cout << "*";
        }
        cout << endl;

    }


}

vector<int> leaders(int arr[], int n) {
    vector<int> ans ;
    int max = arr[n - 1];
    for (int i  = n - 1; i >= 0 ; i--) {
        if (arr[i] >= max) {
            ans.push_back(arr[i]);
            max = arr[i]
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}



int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    int n ;
    cin >> n;
    // pattern1(n);
    //pattern2(n);
    //pattern3(n);
    //pattern4(n);
    //pattern5(n);
    //pattern6(n);
    //pattern7(n);
    // pattern8(n);
    // pattern9(n);
    pattern10(n);

    int arr[] = {16, 17, 4, 3 , 5, 2};
    vector v = leaders(arr, 6)
               sout << v;

    return 0;
}


