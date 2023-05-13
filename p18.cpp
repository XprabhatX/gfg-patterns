#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    char a = 'A';
    a += n-1;
    char temp = a;
    for (int i = 1; i <= n; i++)
    {
        a = temp;
        for (int j = 1; j <= i; j++, a--)
            cout << a << " ";
        cout << endl;
    }

    return 0;
}