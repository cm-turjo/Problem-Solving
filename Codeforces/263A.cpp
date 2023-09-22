#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,x,m,o,p;
    vector<vector<int>>v;
    for(i=0;i<5;i++)
    {
        vector<int>matrix;
        for(j=0;j<5;j++)
        {
            cin>>x;
            if(x!=0)
            {
                o=i+1;
                p=j+1;
            }
            matrix.push_back(x);
        }
        v.push_back(matrix);
    }
    /*
    for(i=0;i<v.size();i++)
    {
        for(j=0;j<v[i].size();j++)
        {
            if(v[i][j]!=0)
            {
                o=i++;
                p=j++;

                break;
            }
        }

    }
    */

    m=abs(3-o)+abs(3-p);
    cout<<m<<endl;


    return 0;
}
