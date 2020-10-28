#include<iostream>
#include<stdlib.h>
#include<cstdio>
#include<algorithm>
using namespace std;
long long num[100004];

bool cmp(int a, int b)
{
    return a>b;
}
int main()
{

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>num[i];
    int k;
    cin>>k;
    sort(num,num+n,cmp);
    int js1=1,js2=0;
    long long last = num[0];
    cout<<num[0]<<endl;
    js2++;
    while(js1<k)
    {
        if(num[js2]!=last)
        {
            cout<<num[js2]<<endl;
            js1++;
            js2++;
        }
        else js2++;
    }

}
