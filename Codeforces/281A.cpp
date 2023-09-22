#include<bits/stdc++.h>
using namespace std;

int main()
{
    string in;
    cin>>in;
    //cin.ignore();
    if(in[0]>='A'&& in[0]<='Z')
    {
        cout<<in<<endl;
        return 0;
    }
    else
    {
        in[0]=char(in[0]-32);
        cout<<in<<endl;
    }


}
