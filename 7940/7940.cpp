#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using  namespace std;

vector<unsigned int> num;

void solve(int left, int right, const unsigned int q)
{
    int mid = (left+right)/2;
    if(num[mid]==q)
    {
        cout<<q<<endl;
        return;
    }
    else if(num[left]==q)
    {
        cout<<q<<endl;
        return;
    }
    else if(num[right]==q)
    {
        cout<<q<<endl;
        return;
    }
    if(left+1==right)
    {

        if((q-num[left])<=num[right]-q)
        {
            cout<<num[left]<<endl;
        }
        else cout<<num[right]<<endl;
        return;
    }

    if(q<=num[mid])
    {
        solve(left,mid,q);
    }
    else solve(mid,right,q);


}


int main()
{
    int n;
    cin>>n;


    for(int i=0;i<n;i++)
    {
        unsigned int tmp;
        cin>>tmp;
        num.push_back(tmp);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        unsigned int q;
        cin>>q;
        if(q>=num[n-1])
        {
            cout<<num[n-1]<<endl;
        }
        else if(q<=num[0])
        {
            cout<<num[0]<<endl;
        }
        else{
            solve(0,n-1,q);
        }

    }
}
