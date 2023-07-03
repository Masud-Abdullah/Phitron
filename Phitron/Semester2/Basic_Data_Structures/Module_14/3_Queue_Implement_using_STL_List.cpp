#include <bits/stdc++.h>
using namespace std;
class myQueue
{
public:
    list<int> lst;
    void push(int val)
    {
        lst.push_back(val);
    }
    void pop()
    {
        lst.pop_front();
    }
    int front()
    {
        return lst.front();
    }
    int size()
    {
        return lst.size();
    }
    bool empty()
    {
        return lst.empty();
    }
};
int main()
{
    myQueue lst;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        lst.push(x);
    }
    while (!lst.empty())
    {
        cout << lst.front() << endl;
        lst.pop();
    }

    // loop er moddhe amra check kore nicchi je list ta empty naki. but loop er baireo push or pop operation korte chaile
    // amader age check kore nite hobe je list ta empty naki. otherwise empty list a push or pop korte gele segmentation fault khabo.
    //  if(!lst.empty())
    //  {
    //      cout<<lst.front()<<endl;
    //  }
    //  if(!lst.empty())
    //  {
    //      lst.push(11);
    //  }
    //  if(!lst.empty())
    //  {
    //      lst.pop();
    //  }
    return 0;
}