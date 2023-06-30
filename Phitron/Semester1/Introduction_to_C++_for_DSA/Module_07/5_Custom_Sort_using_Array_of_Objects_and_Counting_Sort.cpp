#include <bits/stdc++.h>
using namespace std;
class CustomSort
{
public:
    char ch;
    int cnt;
};
bool cmp(CustomSort a, CustomSort b)
{
    if (a.cnt > b.cnt)
        return true;
    else
        return false;
}
int main()
{
    CustomSort feq[26];
    for (int i = 0; i < 26; i++)
    {
        feq[i].ch = i + 'a'; // freq[i].ch = i+97; is also valid
        feq[i].cnt = 0;
    }

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        feq[c - 'a'].cnt++;
    }

    sort(feq, feq + 26, cmp);

    for (int i = 0; i < 26; i++)
    {
        if (feq[i].cnt > 0)
        {
            for (int j = 0; j < feq[i].cnt; j++)
            {
                cout << feq[i].ch;
            }
        }
    }

    return 0;
}