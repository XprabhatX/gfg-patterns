#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    char a = 'A';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++, a++)
            cout << a;
        a--; a--;
        for (int j = i - 1; j > 0; j--, a--)
            cout << a;

        cout << endl;
        a = 'A';
    }

    return 0;
}