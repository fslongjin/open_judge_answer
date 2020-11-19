#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

struct qj
{
    int a;
    int b;
};

qj q[50009];


bool cmp(qj &m, qj &n)
{
    if(m.a<n.a)
        return true;
    else return false;
}

int main()
{
    int n;
    cin>>n;
    int c_min=10005,c_max=0;
    int a,b;
    bool is_ok = true;
    for(int i=0;i<n;i++)
    {
        cin>>q[i].a>>q[i].b;

    }

    sort(q, q+n,cmp);

    for(int i=0;i<n;i++)
    {

        if(c_min>c_max)
        {
            c_min = q[i].a;
            c_max = q[i].b;
        }
         if(q[i].a<=c_min&&q[i].b>=c_min)
        {
            c_min = q[i].a;
            c_max = max(c_max, q[i].b);
        }
        else if(q[i].a>=c_min&&q[i].a<=c_max)
        {
            c_max = max(c_max, q[i].b);
        }
        else
        {
            is_ok = false;
        }
    }

   if(is_ok)
        cout<<c_min<<" "<<c_max<<endl;
    else cout<<"no"<<endl;
}
