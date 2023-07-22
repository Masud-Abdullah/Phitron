#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);              // 10 30 40 50 60
        int cur_indx = v.size() - 1; // parent theke child index ber korar formula
        // cout << cur_indx << endl;
        int prnt_indx = (cur_indx - 1) / 2; // parent index ber korar formula
        // cout << prnt_indx << endl;

        while (cur_indx != 0)
        {
            if (v[cur_indx] > v[prnt_indx]) // child index er value boro holei swap hoy //
            {
                swap(v[cur_indx], v[prnt_indx]);
            }
            else
                break;
            cur_indx = prnt_indx;
            prnt_indx = (cur_indx - 1) / 2;
        }
    }

    for (int val : v)
    {
        cout << val << " "; // 60 50 30 10 40
    }
    cout << endl;

    return 0;
}

//-----------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};
//     int x; // ekbar 55 r ekbar 12 niye test kra jay
//     cin >> x;

//     v.push_back(x);
//     int cur_idx = v.size() - 1;

//     while (cur_idx != 0)
//     {
//         int parent_idx = (cur_idx - 1) / 2; //parent index ber korar formula
//         if (v[parent_idx] < v[cur_idx]) // child index er value boro holei swap hoy //
//         {
//             swap(v[parent_idx], v[cur_idx]);
//         }
//         else break;

//         cur_idx = parent_idx;
//     }

//     // while (cur_idx != 0)
//     // {
//     //     int parent_idx = (cur_idx - 1) / 2; //parent index ber korar formula
//     //     if (v[parent_idx] < v[cur_idx]) // child index er value boro holei swap hoy //
//     //     {
//     //         swap(v[parent_idx], v[cur_idx]);
//     //         cur_idx = parent_idx;
//     //     }
//     //     else break;
//     // }

/*
            while(cur_ind != 0){

            int parent_ind = (cur_ind-1)/2;

            if(v[parent_ind] >= v[cur_ind]){
                break;
            }

            else if(v[parent_ind] < v[cur_ind]){        // child index er value boro holei swap hoy //
                swap(v[parent_ind], v[cur_ind]);
            }
            cur_ind = parent_ind;
        }

        */

//     for(int val:v)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }