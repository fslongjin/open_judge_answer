#include<iostream>
#include<vector>
using namespace std;



int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    vector<int> w(n);
    vector<int> bd(m);
    for(int i=0;i<n;i++)
    {
        cin>>w[i];
        if(i<m)
        {
            bd[i] = w[i];
            w[i]=0;
        }
    }

    int secs=0;
    bool is_ok=false;
    unsigned int binded=m;

    while(is_ok==false)
    {
        secs++;
        for(unsigned int i=0;i<m;i++)//检查每一个水龙头
        {
            if((bd[i]-1)>0)
            {
                bd[i]--;
            }

            else{           //bd[i]-1<=0时
                if(binded<n)
                {
                    bd[i] = w[binded];
                    binded++;
                    //cout<<"binded: "<<binded<<endl;
                }
                else{ //当全部学生都已经上去接水时
                    bd[i]=0;
                }
            }

        }

        if(binded==n)
        {
            //cout<<"binded ==n "<<endl;
            for(unsigned int j=0;j<m;j++)
            {
                if(bd[j]!=0) break;
                if(j==m-1)
                {
                    cout<<secs<<endl;
                    is_ok == true;
                    return 0;
                }
            }
        }

    }

}
