#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(const vector<int> &a, int n, int x, int h)
{
    long long waterNeeded = 0;
    for (int i = 0; i < n; i++)
    {
        if (h - a[i] > 0)
        {
            waterNeeded = waterNeeded + h - a[i];
        }
        else
        {
            break;
        }
    }
    return waterNeeded <= (long long)x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int left = 1;
        int right = a[n - 1] + x;
        int result = 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (isPossible(a, n, x, mid))
            {
                result = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        cout << result << endl;
    }
    return 0;
}
