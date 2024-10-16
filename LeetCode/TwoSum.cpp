//
// Created by k'k'k on 2024/10/15.
//

#include <iostream>
#include <unordered_map>
#include "TwoSum.h"
std::vector<int> TwoSum::twoSum(std::vector<int> &nums, int target) {

    /**
     * 使用vector 数组 暴力遍历
     */
//    std::vector<int> result{};
//    for (int i = 0 ; i < nums.size(); ++i){
//        int num2 = target - nums[i];
//        for(int j = i + 1; j < nums.size(); ++j){
//            if(num2 == nums[j]){
//                result.push_back(i);
//                result.push_back(j);
//            }
//        }
//    }
//    return result;

    std::unordered_map<int, int> hash;
    for (int i = 0; i < nums.size(); ++i) {
        int num2 = target - nums[i];
        auto it = hash.find(num2);
        if (it != hash.end()){
            return {it->second, i};
        }
        hash[nums[i]] = i;
    }

    return {};
}

