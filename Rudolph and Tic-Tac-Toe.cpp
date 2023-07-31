#include <iostream>
using namespace std;

const int r=3,c=3;

bool check_horizontal(char arr[r][c],int i)
{
    for(int j=0;j<c-1;j++)
    {
        if(arr[i][j]!=arr[i][j+1])
        {
            return false;
        }
    }
    return true;
}

bool check_vertical(char arr[r][c],int j)
{
    for(int i=0;i<c-1;i++)
    {
        if(arr[i][j]!=arr[i+1][j])
        {
            return false;
        }
    }
    return true;
}

bool check_diagnal_right(char arr[r][c])
{
    for(int i=0,j=c-1;i<r-1;i++,j--)
    {
        if(arr[i][j]=='.'||arr[i][j]!=arr[i+1][j-1])
        {
            return false;
        }
    }
    return true;
}

bool check_diagnal_left(char arr[r][c])
{
    for(int i=0;i<r-1;i++)
    {
        if(arr[i][i]=='.'||arr[i][i]!=arr[i+1][i+1])
        {
           return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        char arr[3][3];
        int i=0,j=0,r=3,c=3;
        bool notfound=true;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cin>>arr[i][j];
            }
        }

        for(int i=0;i<r&&notfound;i++)
        {
            if(arr[i][0]!='.'&&check_horizontal(arr,i))
            {
                cout<<arr[i][0]<<endl;
                notfound=false;
                break;
            }
        }

        for(int j=0;j<c&&notfound;j++)
        {
            if(arr[0][j]!='.'&&check_vertical(arr,j))
            {
                cout<<arr[0][j]<<endl;
                notfound=false;
                break;
            }
        }


        if(notfound&&check_diagnal_left(arr))
        {
            cout<<arr[r-2][c-2]<<endl;
            notfound=false;
        }

        if(notfound&&check_diagnal_right(arr))
        {
            cout<<arr[r-2][c-2]<<endl;
            notfound=false;
        }

        if(notfound)
        {
            cout<<"DRAW"<<endl;
        }
    }
    return 0;
}