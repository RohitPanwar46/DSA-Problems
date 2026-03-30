#include<iostream>
#include<vector>
using namespace std;

// maximum subarray sum without using kadane's algorithm

int main() {

    vector<int> arr = {0, -8, 5, 8, -1, 3};
    int sz = arr.size();
    int mss = INT32_MIN;
    int cpp = 0;
    
    for (int i = 0; i < sz; i++)
    {
        cpp = 0;
        for (int j = i; j < sz; j++)
        {
            cpp += arr[j];
            cout << arr[j] << " ";
            mss = max(mss,cpp);
        }
        cout << endl;
    }
    

    cout << "max subarray sum: " << mss;
    return 0;
}