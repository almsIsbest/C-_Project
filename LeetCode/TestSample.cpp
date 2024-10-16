//
// Created by k'k'k on 2024/10/16.
//
#include <iostream>
#include "TestSample.h"
#include "AssignCookies_Easy.h"


void test1(){
    std::vector<int> nums = {2, 7, 11, 15};
    auto result = TwoSum::twoSum(nums, 9);
    for (auto i: result) {
        std::cout << i << std::endl;
    }
}

void test455(){

    std::vector<int> children = {1,2};
    std::vector<int> cookies = {1,2};
    std::cout << AssignCookies_Easy::findContentChildren(children , cookies );

}