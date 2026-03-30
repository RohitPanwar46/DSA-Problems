#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> arr = {1, 0, 1, 0, 2, 1, 2, 0, 2};

    sort(arr.begin(),arr.end());

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << endl;
    }

    return 0;
}

// time complexity is O[nlog(n)]
// space complexity is O(1)
