#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int p[n];
    for (int i = 0; i<n; ++i)
        cin>>p[i];
    int absolute_max = 0, local_max = 0;
    for (int i = 0; i < n; i++)
    {
        local_max = local_max + p[i];
        if (absolute_max < local_max)
            absolute_max = local_max;
        if (local_max < 0)
            local_max = 0;
    }
    cout << absolute_max << endl;
    return 0;
}