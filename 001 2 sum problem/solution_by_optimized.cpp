#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> m;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++){
            int first = nums[i];
            int second  = target - first;

            if(m.find(second) != m.end()){
                ans.push_back(i);
                ans.push_back(m[second]);
                break;
            }

            m[first] = i;
        }

        return ans;
    }

int main() {

    vector<int> arr = {1, 3, 2, 5, 8};
    int target = 13;
    vector<int> pair;

    pair = twoSum(arr, target);

    cout << arr[pair[0]] << "   " << arr[pair[1]] << endl;

    return 0;
}
