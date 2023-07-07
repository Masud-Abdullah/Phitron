#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    stack<int>tmp;
    while(!myStack.empty())
    {
        tmp.push(myStack.top());
        myStack.pop();
    }
    tmp.push(x);

    while(!tmp.empty())
    {
        myStack.push(tmp.top());
        tmp.pop();
    }
    return myStack;
}
