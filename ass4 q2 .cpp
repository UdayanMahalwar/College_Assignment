#include<iostream>
using namespace std;
class CircularQueue{
    int *arr;
    int size;
    int s;
    int e;

    CircularQueue(int x)
    {
        arr=new int[x];
        this->size=x;
        s=-1;
        e=-1;
    }
    void push(int x)
    {
        if(s==-1&&e==-1)
        {
            s++,e++;
            arr[e]=x;
        }
        else if(e==size-1&&s!=0)
        {
            e=0;
            arr[e]=x;
        }
        else if(e==size-1&&s==0||e==s-1)
        {
            cout<<"queue overflow";
        }
        else{
            e++;
            arr[e]=x;
        }
    }
    void pop()
    {
        if(s==-1&&e==-1)
        {
            cout<<"queue underflow";
        }
        else if(s==e)
        {
            s=-1;
            e=-1;
        }
        else if(s==size-1)
        {
            s=0;
        }
        else
        {
            s++;
        }
    }
    bool isempty()
    {
        if(s==-1&&e==-1)
        {
            return true;
        }
        return false;
    }
    bool isfull()
    {
        if(s==-1&&e==-1)
        {
            return false;
        }
        else if(s==e&&size!=1)
        {
            return false;
        }
        else if(s>e)
        {
            if(abs((s-e)+1)==size)
            {
                return true;
            } 
        }
        else if(s<e)
        {
            if(size-(s-e)+1==size)
            {
                return true;
            }
        }
        return false;
    }
    void display()
    {
        if(s==-1&&e==-1)
        {
            cout<<"empty queue";
        }
        else if(s<e)
        {
            for(int i=s;i<=e;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
        else{
            for(int i=s;i<size;i++)
            {
                cout<<arr[i]<<" ";
            }
            for(int i=0;i<=e;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
    }    
};
int main()
{




    return 0;
}