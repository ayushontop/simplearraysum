#include<iostream>
#include<cstdio>
//#include<clists>
#include<algorithm>
//Simple array sum
using namespace std;

int main()
{
    int n,z=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
    z+=a[i];
    }
    cout<<z;
return 0;
}
