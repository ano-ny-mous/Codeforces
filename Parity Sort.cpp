#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        bool flag=true;
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int,int> mp;
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) 
        {
            mp[i]=a[i]%2;
        }
        sort(a.begin(),a.end());
        for (int i = 0; i < n; i++) 
        {
            if(mp[i]!=a[i]%2)
            {
                cout<<"NO"<<endl;
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
