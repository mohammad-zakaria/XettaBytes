/*
Solved by: Mohammad Zakaria
Email: zakaria.eee.iiuc@gmail.com
Linkedin: https://www.linkedin.com/in/thisismohammad/


Problem Statement:
You have an array containing n elements initially all 0. You need to do a number of update operations on it. In each update you specify l, r and val which are the starting index, ending index and value to be added. After each update, you add the 'val' to all elements from index l to r. After 'u' updates are over, there will be q queries each containing an index for which you have to print the element at that index.

Input
First line consists of t, the number of test cases. (1 <= t <= 10)

Each test case consists of "n u",number of elements in the array and the number of update operations, in the first line (1 <= n <= 10000 and 1 <= u <= 100000)

Then follow u lines each of the format "l r val" (0 <= l,r < n, 0 <= val <=10000)

Next line contains q, the number of queries. (1 <= q <= 10000)

Next q lines contain an index (0 <= index < n)

Output
For each test case, output the answers to the corresponding queries in separate lines.

Example
Input:
1
5 3
0 1 7
2 4 6
1 3 2
3
0
3
4

Output:
7
8
6

 */

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, u;
//         cin >> n >> u;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             a[i] = 0;
//         }

//         while (u--)
//         {
//             int l, r, val;
//             cin >> l >> r >> val;
//             for (int j = l; j <= r; j++)
//             {
//                 a[j] += val;
//             }
//         }

//         int q;
//         cin >> q;
//         while (q--)
//         {
//             int index;
//             cin >> index;
//             cout << a[index] << endl;
//         }
//     }

//     return 0;
// }


// solution using binary indexed tree
#include <bits/stdc++.h>
using namespace std;


// updateBIT function
void updateBIT(int BITree[], int n, int index, int val)
{
    index = index + 1;
    while (index <= n)
    {
        BITree[index] += val;
        index += index & (-index);
    }
}

// bit tree construction
int *constructBIT(int arr[], int n)
{
    int *BITree = new int[n + 1];
    for (int i = 1; i <= n; i++)
        BITree[i] = 0;

    for (int i = 0; i < n; i++)
        updateBIT(BITree, n, i, arr[i]);

    return BITree;
}
// get sum function
int getSum(int BIT[], int index)
{
    int sum = 0;
    index = index + 1;
    while (index > 0)
    {
        sum += BIT[index];
        index -= index & (-index);
    }
    return sum;
}
// update function
void update(int BIT[],int l, int r, int n, int val)
{
    updateBIT(BIT, n, l, val);
    updateBIT(BIT, n, r + 1, -val);
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, u; cin >> n >> u;
        int a[n] = {0};
        int *BIT = constructBIT(a, n);
        while (u--)
        {
            int l, r, val; cin >> l >> r >> val;
            update(BIT, l, r, n, val);
        }
        int q; cin >> q;
        while (q--)
        {
            int index; cin >> index;
            cout << getSum(BIT, index) << endl;
        }

    }

    return 0;
}