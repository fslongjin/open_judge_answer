#include<iostream>
#include<string.h>
using namespace std;

int main()
{

    int k=0;
    cin>>k;
    string ipt="";
    cin>>ipt;
    char current=ipt[0];
    int js=1;
    bool is_ok = false;
    if(ipt.length()==1)
    {
        if(k==1) cout<<ipt<<endl;
        else cout<<"No"<<endl;
        is_ok=true;
        return 0;
    }
    for(size_t i=1;i<ipt.length();i++)
    {
        if(ipt[i]==current)
        {
            if(i!=ipt.length()-1)
            {
               js++;
            continue;
            }
            else{
                js++;
                if(js>=k)
                {
                    cout<<current<<endl;
                    is_ok = true;
                    break;
                }
            }

        }
        if(ipt[i]!=current)
        {
            if(js>=k)
            {
                cout<<current<<endl;
                js=1;
                current = ipt[i];
                is_ok = true;
                break;
            }
            else{
                js=1;
                current = ipt[i];
            }
        }
    }


    if(is_ok==false)
        cout<<"No"<<endl;

}
