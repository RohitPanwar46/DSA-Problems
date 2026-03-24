#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int count = 0;
    vector<int> prefixSum(n, 0);
    unordered_map<int, int> umap; //PS, Freq
    
    prefixSum[0] = nums[0];
    for(int i = 1; i < n; i++){
        prefixSum[i] = prefixSum[i-1]+nums[i];
    }
    
    for(int j = 0; j < n; j++){
        
        if(prefixSum[j] == k) count++;
        
        int val = prefixSum[j]-k;
        
        if(umap.find(val) != umap.end()){
            count += umap[val];
        }
        
        if(umap.find(prefixSum[j]) != umap.end()){
            umap[prefixSum[j]] += 1;
        }else{
            umap[prefixSum[j]] = 1;
        }
    }
    
    return count;
}

int main() {

    

    return 0;
}