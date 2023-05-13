#include<bits/stdc++.h>
#include<vector>

using namespace std;

void printMatrix(vector<vector<int>> &mat) {
    for(auto it : mat) {
        for(auto y : it) {
            cout << y;
        }
        cout << endl;
    }
}

int main() {    
    int n;
    cin >> n;

    int top = 0, bottom = 2*n-2;
    int left = 0, right = 2*n-2;
    int printNum = n;

    vector<vector<int>> arr(2*n-1, vector<int>(2*n-1, 0));
    while(top <= bottom && left <= right)
    {
        for(int i = left; i <= right; i++)
            arr[top][i] = printNum;
        top++;

        for(int i = top; i <= bottom; i++)
            arr[i][right] = printNum;
        right--;

        if(top <= bottom)
        {
            for(int i = right; i >= left; i--)
                arr[bottom][i] = printNum;
            bottom--;
        }

        if(left <= right)
        {
            for(int i = bottom; i >= top; i--)
                arr[i][left] = printNum;
            left++;
        }

        printNum--;
    }

    printMatrix(arr);
    return 0;
}