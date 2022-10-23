/* 
In order to solve this challenge, you will need to break the code used to encrypt it!

M fdahq ime ragzp uz Dayq oazfmuzuzs tgzpdqpe ar xqffqde iduffqz nk Vgxuge Omqemd. Mxx ar ftqy iqdq qzodkbfqp iuft m Omqemd oubtqd iuft ftq wqk egebqofqp fa nq tue nudftpmk uz Vgxk.

Idufq m bdasdmy fa pqodkbf ftq xqffqde.

Azxk ftq mxbtmnqf otmdmofqde rday Mm fa Ll mdq qzodkbfqp. Gbbqdomeq mzp xaiqdomeq otmdmofqde mdq qzodkbfqp ftq emyq imk ituxq bdqeqdhuzs ftqud omeq. Zgynqde, ebmoqe, mzp ebqoumx otmdmofqde mdq mxx wqbf gzotmzsqp.

Efmzpmdp uzbgf
Kagd bdasdmy ygef dqmp ftq fqjf ar ftq xqffqde rday ftq efmzpmdp uzbgf iuft m ymjuygy ar Z=10000Z=10000 otmdmofqde. Ftq uzbgf iuxx nq m efduzs uz m euzsxq xuzq.

Efmzpmdp agfbgf
Kagd bdasdmy ygef bduzf ftq pqodkbfqp fqjf rad ftq uzbgf efduzs fa ftq efmzpmdp agfbgf.

Oazefdmuzfe mzp zafqe
1 \leq Z \leq 10^41≤Z≤10 
4 
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, u;
        cin >> n >> u;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            a[i] = 0;
        }

        while (u--)
        {
            int l, r, val;
            cin >> l >> r >> val;
            for (int j = l; j <= r; j++)
            {
                a[j] += val;
            }
        }
        int q;
        cin >> q;
        while (q--)
        {
            int index;
            cin >> index;
            cout << a[index] << endl;
        }
    }
}