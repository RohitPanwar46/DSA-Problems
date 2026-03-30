#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> a = {4, 5, 6, 0, 0, 0};
    vector<int> b = {1, 2, 3};

    int m = 3;
    int n = b.size();
    int len_a = m + n;

    int i = m - 1;
    int j = n - 1;
    int idx = len_a - 1;

    while (j >= 0)
    {
        if (i >= 0)
        {
            if (a[i] >= b[j])
            {
                a[idx] = a[i];
                i--;
                idx--;
            }
            else
            {
                a[idx] = b[j];
                j--;
                idx--;
            }
        }
        else
        {
            a[idx] = b[j];
            j--;
            idx--;
        }
    }

    for (int i = 0; i < len_a; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}