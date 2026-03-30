// dutch National flag alogrithm 

#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> arr = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};

    int mid = 0, high = arr.size()-1, low = 0;

    while (mid<=high)
    {
        if (arr[mid]==0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        if (arr[mid]==1)
        {
            mid++;
        }
        if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << endl;
    }

    return 0;
}