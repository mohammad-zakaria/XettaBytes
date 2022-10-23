/* This problem was co-authored by Huawei.

There is an array of nn integers a_1,a_2,a_3,...,a_{n}a 
1
​
 ,a 
2
​
 ,a 
3
​
 ,...,a 
n
​
 . This array follows mm rules. In each rule, you are given three integers ll, rr, and kk, indicating that (\sum^{r}_{i=l}{a_i}) \% p = k(∑ 
i=l
r
​
 a 
i
​
 )%p=k. You need to find an array satisfying all rules.

Standard Input
The first line contains 3 integers nn, mm and pp, indicating the length of the array, the number of rules and the modulo.

The next mm lines each contain 3 integers ll, rr and kk, for the rule: (\sum^{r}_{i=l}{a_i}) \% p = k(∑ 
i=l
r
​
 a 
i
​
 )%p=k.

Standard Output
Output an array of nn integers a_1,a_2,a_3,...,a_{n}a 
1
​
 ,a 
2
​
 ,a 
3
​
 ,...,a 
n
​
  satisfying all rules. This array must be the lexicographically smallest array out of all arrays satisfying the previous conditions. If there is no solution, output NoneNone. */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, p;
    cin >> n >> m >> p;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
    }

    while (m--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        for (int j = l; j <= r; j++)
        {
            a[j] += k;
        }
    }


    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
