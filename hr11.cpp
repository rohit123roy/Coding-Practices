#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,a;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int p;
        cin>>p;
        auto it=lower_bound(v.begin(),v.end(),p);
        int x=it-v.begin();
        if(v[x] == p)
            cout<<"Yes "<<x+1<<"\n";

        else
        {
            cout<<"No "<<x+1<<"\n";
        }
    }

    return 0;
}

