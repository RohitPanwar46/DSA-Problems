#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end()); // Time Complexity O(nlogn)

    for(int i = 0; i < n; i++){
        if((i != 0) && (nums[i] == nums[i-1]) ) continue; // first optimization
        for(int j = i+1; j < n;){
            int s = j+1, e = n-1;
            while(s < e){
                long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[s] + (long long)nums[e];
                if(sum == target){
                    ans.push_back({nums[i], nums[j], nums[e], nums[s]});
                    s++;
                    e--;
                    while(s < e && nums[s] == nums[s-1]) s++; // third optimization
                       
                }else if(sum < target){
                    s++;
                    while(s < e && nums[s] == nums[s-1]) s++; // third optimization
                }else{
                    e--;
                }
            }
            
            j++;
            while(j < n && nums[j] == nums[j-1]) j++; //second optimization
        }
    }
    
    return ans;
}

int main() {

    vector<int> nums = {-1, -2, -1, 0, 1, 2, 3, 1};
    int target = 0;

    vector<vector<int>> ans = fourSum(nums, target);

    for(auto val: ans){
        for(int number: val){
            cout << number << " ";
        }
        cout << endl;
    }
    return 0;
}