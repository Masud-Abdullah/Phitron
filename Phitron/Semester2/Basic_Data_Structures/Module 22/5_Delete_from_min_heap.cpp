#include <bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_indx = v.size() - 1;
    int prnt_indx = (cur_indx - 1) / 2;

    while (cur_indx != 0)
    {
        if (v[cur_indx] < v[prnt_indx]) // child index er value boro holei swap hoy //
        {
            swap(v[cur_indx], v[prnt_indx]);
        }
        else
            break;
        cur_indx = prnt_indx;
        prnt_indx = (cur_indx - 1) / 2;
    }
}
void delete_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int left_indx = 2 * cur + 1;
        int right_indx = 2 * cur + 2;
        int last_indx = v.size() - 1;
        if (left_indx <= last_indx && right_indx <= last_indx)
        {
            // duitai ache
            if (v[left_indx] <= v[right_indx] && v[left_indx] < v[cur])
            {
                swap(v[left_indx], v[cur]);
                cur = left_indx;
            }
            else if (v[right_indx] <= v[left_indx] && v[right_indx] < v[cur])
            {
                swap(v[right_indx], v[cur]);
                cur = right_indx;
            }
            else
                break;
        }
        else if (left_indx <= last_indx)
        {
            // left ache
            if (v[left_indx] < v[cur])
            {
                swap(v[left_indx], v[cur]);
                cur = left_indx;
            }
            else
                break;
        }
        else if (right_indx <= last_indx)
        {
            // right ache
            if (v[right_indx] < v[cur])
            {
                swap(v[right_indx], v[cur]);
                cur = right_indx;
            }
            else
                break;
        }
        else
            break;
    }
}
void print(vector<int> v)
{
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) // O(nlogn)  //n ta insert korte nlogn
    {
        int x;
        cin >> x;
        insert_heap(v, x); // O(logn)  //ekta insert korte logn
    }

    print(v); // 3 15 5 30 20 25 6

    delete_heap(v);
    print(v); // 5 15 6 30 20 25

    delete_heap(v);
    print(v); // 6 15 25 30 20
    return 0;
}