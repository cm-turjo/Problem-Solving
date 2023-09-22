#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin>>n;
    vector<char>v;
    for(int i=0;i<n.size();i++)
    {
        v.push_back(n[i]);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    int flag=v.size();

    if(flag%2==1)
    {
        cout<< "IGNORE HIM!" <<endl;
    }
    else
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;

}
