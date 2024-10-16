//
// Created by k'k'k on 2024/10/16.
//

#include <algorithm>
#include "AssignCookies_Easy.h"

int AssignCookies_Easy::findContentChildren(std::vector<int> &children, std::vector<int> &cookies) {
    std::sort(children.begin(), children.end());
    std::sort(cookies.begin(), cookies.end());
    int childrenIndex = 0 , cookiesIndex = 0;
    while (childrenIndex < children.size() && cookiesIndex < cookies.size()){
        if(children[childrenIndex] <= cookies[cookiesIndex]){
            childrenIndex++;
        }
        cookiesIndex++;
    }
    return childrenIndex;
}