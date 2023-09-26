#include<iostream>
#include<vector>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        int n, k, maxCount=0;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for(int i=0; i<n; i++) 
        {
            if(arr[i] == k) 
            {
                int count = 0;
                int j = i;
                while(j < n && arr[j] == k) 
                {
                    count++;
                    j++;
                    if(count>0)
                    {
                        break;
                    }
                }
                maxCount = max(maxCount, count);
                if(maxCount>0)
                {
                    break;
                }
            }
        }
        if(maxCount <= 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
