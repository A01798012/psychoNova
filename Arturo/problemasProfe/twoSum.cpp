#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mapa;
    vector<int> jiji;
    int temp;

    for(int i = 0; i < nums.size(); i++){
        mapa.emplace(nums[i], i);
    }

    for(int i: nums){
        if(mapa.count(target - i)){
            jiji.push_back(mapa[i]);
            jiji.push_back(mapa[target-i]);
        }
    }

    return jiji;
}


int main(){




    return 0;
}
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mapa;
    vector<int> jiji;

    for(int i = 0; i < nums.size(); i++){
        if(mapa.count(target - nums[i])){
           jiji.push_back(i); jiji.push_back(mapa[target - nums[i]]) ;
           return jiji;
        }else{
            mapa[nums[i]] = i;
        }
    }


    return jiji;
}
};
