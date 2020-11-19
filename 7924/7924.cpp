#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    list<int> mem;
    int m,n;
    cin>>m>>n;
    int word;
    int js=0;
    for(int i=0;i<n;i++)
    {
        cin>>word;
        if(find(mem.begin(), mem.end(), word)== mem.end())
        {
            js++;
            if(mem.size()<m)
            {
                mem.push_back(word);
            }
            else
            {
                mem.pop_front();
                mem.push_back(word);
            }
        }

    }
    cout<<js<<endl;
}
