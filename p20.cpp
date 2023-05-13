#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int i = n-1; i > 0; i--){
        for (int j = 0; j < n-i; j++)
            cout << "*";
        for (int j = 0; j < 2*i; j++)
            cout << " ";
        for (int j = 0; j < n-i; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = 0; i < 2*n; i++)
        cout << "*";
    for (int i = 1; i <= n-1; i++){
        cout << endl;
        for (int j = 0; j < n-i; j++)
            cout << "*";
        for (int j = 0; j < 2*i; j++)
            cout << " ";
        for (int j = 0; j < n-i; j++)
            cout << "*";
    }
    
    

    return 0;
}