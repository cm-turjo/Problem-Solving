#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m,a;
    cin>>n>>m>>a;

    long long int var1,var2;
    //for avoiding Integer Overflow

    if(n%a==0)//punno borgo hole var1++ korte hobe nah
    {
        var1=n/a;
    }
    else//purno borgo nah hole extra 1 ta tile lagbe tai var1++
    {
        var1=n/a;
        var1++;
    }
    if(m%a==0)
    {
        var2=m/a;
    }
    else
    {
        var2=m/a;
        var2++;
    }
//    if(a==m&& n==a)//jodi
//    {
//        cout<<1<<endl;
//        return 0;
//    }
    cout<<var1*var2<<endl;//jehetu 2D area tai area diye calculation measure korsi
    //2 ta dimension e alada kore ber kore * kore disi
    return 0;
}
