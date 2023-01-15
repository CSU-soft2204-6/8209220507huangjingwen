#include <iostream>
using namespace std;
int main()
{int arr[10];
cout << "请输入十个数字" << endl;;
for (int n = 0; n < 10; n++)
{
    cin >> arr[n];
}
    
    int size = sizeof(arr) / sizeof(arr[0]);
    int vis[10] = { 0 };
    for (int i = 0; i < size; i++)
    {
        if (vis[i] == 1)
            
        {
            continue;
        }
        else
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] == arr[j])
                {
                    vis[j] = 1;
                }
            }
            if (vis[i] == 0)
            {
                cout << arr[i] << " ";
            }
        }

    }
    return 0;
}

