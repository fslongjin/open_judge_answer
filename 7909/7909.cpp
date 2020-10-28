#include<iostream>
#include<cstdio>
#include<algorithm>
#include<stdlib.h>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long long> num;
    for(int i=0;i<n;i++)
    {
        long long tmp;
        cin>>tmp;
        num.push_back(tmp);
    }
    sort(num.begin(),num.end());
    long long last=num[0];
    long long js=1;
    for(int i=1;i<n;i++)
    {
        if(num[i]==last)
        {
            js++;
        }
        else
        {
            cout<<last<<" "<<js<<endl;
            js=1;
        }
        last = num[i];
    }
    cout<<last<<" "<<js<<endl;

}
