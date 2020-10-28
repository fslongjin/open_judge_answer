#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<unsigned int> nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    sort(begin(nums),end(nums));
    unsigned int maximum = nums[n-1];

    vector<unsigned int> pinshu(maximum+1);
    for(unsigned int i=0;i<maximum+1;++i)
        pinshu[i]=0;

    for(int i=0;i<n;i++)
    {
        pinshu[nums[i]]++;
    }
    for(unsigned int i=0;i<maximum+1;i++)
        cout<<pinshu[i]<<endl;

}
