#include<bits/stdc++.h>
using namespace std;


int main()
{

    int a,b,cnt=0;
    cin>>a>>b;
    int arr[a];
    for(int i=0;i<a;i++)
    {

        cin>>arr[i];//b's place means 1 based indexed array
    }
    for(int i=0;i<a;i++)
    {

        if(arr[i]>=arr[b-1]&&arr[i]!=0)cnt++;//arr[i[!=0 is checked as there is a
        //statement says that as long as contestants earns a positive score
        //So to check positive score I added this logic
    }
    cout<<cnt<<endl;
    return 0;

}
