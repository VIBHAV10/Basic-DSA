#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class solution
{
    ll diff, x,y,z;
    vector<ll>arr;
    public:
    solution()
    {
      diff=0;
      x=0;
      y=0;
      z=0;
    }
    void takeInput(int n)
    {
      arr.resize(n+1,0);
      for(int i=0;i<=n;i++)
        cin>>arr[i];
    }
    void solve()
    {
        diff=arr[1]-arr[0];
        switch(diff)
        {
            case -3:
            {
               x=1;y=1;z=arr[0]-2;
               break;
            }
            case 3:
            {
                x=0;y=0;z=arr[0];
                break;
            }
            case -1:
            {
               x=0;y=3;arr[0]-3; 
            }
            case 1:
            {
                x=0;y=0;z=arr[0];
                break;
            }
            
        }
    }
    void print()
    {
      cout<<x<<" "<<y<<" "<<z<<"\n";
    }
};
int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        solution s;
        s.takeInput(n);
        s.solve();
        s.print();
	}
	return 0;
}
