#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n=0;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];

    int x=0;
    cin>>x;
    int position=-1;
    for(int i=0;i<n;i++)
        if(nums[i]==x)
        {
            cout<<i+1<<endl;
            return 0;
        }
    cout<<position<<endl;
}
