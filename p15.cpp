#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    char a = 'A';

    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++, a++)
            cout << a;
        cout << endl;
        a = 'A';
    }

    return 0;
}