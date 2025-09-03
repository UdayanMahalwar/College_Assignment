#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q1;
    q1.push(4);
    q1.push(7);
    q1.push(11);
    q1.push(20);
    q1.push(5);
    q1.push(9);
    queue<int> temp;
    for(int i=0;i<3;i++)
    {
        temp.push(q1.front());
        q1.pop();
    }
    while(!temp.empty())
    {
        q1.push(temp.front());
        temp.pop();
        q1.push(q1.front());
        q1.pop();
    }


    while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    return 0;
}