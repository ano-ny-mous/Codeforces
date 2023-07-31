#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int counter=0;
        int n;
        cin>>n;
        int nail;
        int rope;
        for(int i=0;i<n;i++)
        {
            cin>>nail;
            cin>>rope;
            if(rope<nail)
            {
                counter++;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}