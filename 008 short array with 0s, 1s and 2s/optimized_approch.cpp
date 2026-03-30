#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> arr = {2, 0, 2, 1, 1, 0};
    int zeros_cont = 0, ones_count = 0, twos_count = 0;  

    for (int i = 0; i < arr.size(); i++)  // O(n) time comp.
    {
        if (arr[i] == 0)
        {
            zeros_cont++;
        }else if (arr[i] == 1)
        {
            ones_count++;
        }else{
            twos_count++;
        }
    }
    
    for (int i = 0; i < arr.size(); i++)  // O(n) time comp.
    {
        if (i < zeros_cont)
        {
            arr[i] = 0;
        }else if (i < (zeros_cont+ones_count) )
        {
            arr[i] = 1;
        }else{
            arr[i] = 2;
        }
    }
    
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << endl;
    }

    return 0;
}

//overall time complexity O(n)