#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int bin = 0;
    int temp = bin;
    for (int i = 1; i <= n; i++)
    {
        temp = !temp;
        bin = temp;
        for (int j = 0; j < i; j++, bin = !bin)
            cout << bin << " ";

        cout << endl;
    }

    return 0;
}