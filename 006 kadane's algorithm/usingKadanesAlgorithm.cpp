#include<iostream>
#include<vector>
using namespace std;

// using kadane's algorithm
int main() {

    vector<int> arr = {0, -8, 5, 8, -1, 3};
    int mss = INT32_MIN;
    int sz = arr.size();
    int cpp = 0;

    for (int i = 0; i < sz; i++)
    {
        if(cpp<0){
            cpp = 0;
        }

        cpp += arr[i];
        mss = max(mss,cpp);

    }
    
    cout << "mss: " << mss;

    return 0;
}