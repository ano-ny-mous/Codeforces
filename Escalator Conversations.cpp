#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int counter = 0;
        int n, m, k, H; 
        cin >>n >>m>>k>>H;
        vector<int> h(n); 
        for (int i = 0; i < n; i++) 
        {
            cin >> h[i];
        }
        
        unordered_map<int, bool> dif;
        for (int i = 1; i <= m; i++) 
        {
            for (int j = i + 1; j <= m; j++) 
            {
                dif[k * (j - i)] = true;
            }
        }
        
        for (int i = 0; i < n; i++) 
        {
            int d = abs(H - h[i]); 
            if (dif.count(d)) 
            { 
                counter++;
            }
        }
        cout<<counter<<endl;
    }
}