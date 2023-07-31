#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        int k;
        cin>>n;
        cin>>k;
        vector<int> colors;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            colors.push_back(temp);
        }
        vector<int> presum(n,0);
        int start=colors[0];
        for(int i=0;i<n;i++)
        {
            if(i!=0)
            {
                presum[i]=presum[i-1];
            }
            if(colors[i]==start)
            {
                presum[i]++;
            }
            
        }
        vector<int> postsum(n,0);
        int end=colors[n-1];
        for(int i=n-1;i>=0;i--)
        {
            if(i!=n-1)
            {
                postsum[i]=postsum[i+1];
            }
            if(colors[i]==end)
            {
                postsum[i]++;
            }
        }
        int idx=0;
        for(;idx<=n;idx++)
        {
            if(presum[idx]>=k)
            {
                break;
            }
        }
        if(idx<n&&start==end)
        {
            cout<<"YES"<<endl;
        }
        else if(idx<n&&postsum[idx]>=k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}