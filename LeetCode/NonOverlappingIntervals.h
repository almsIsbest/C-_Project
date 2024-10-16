//
// Created by k'k'k on 2024/10/16.
//

#ifndef C__PROJECT_NONOVERLAPPINGINTERVALS_H
#define C__PROJECT_NONOVERLAPPINGINTERVALS_H

#include <iostream>
#include <vector>
#include <algorithm>
/**
 * 区间问题
 */
//题解
/**
 * 在选择要保留区间时，区间的结尾十分重要：选择的区间结尾越小，余留给其它区间的空间
就越大，就越能保留更多的区间。因此，我们采取的贪心策略为，优先保留结尾小且不相交的区
间。
具体实现方法为，先把区间按照结尾的大小进行增序排序，每次选择结尾最小且和前一个选
择的区间不重叠的区间。我们这里使用 C++ 的 Lambda，结合 std::sort() 函数进行自定义排
序。
在样例中，排序后的数组为 [[1,2], [1,3], [2,4]]。按照我们的贪心策略，首先初始化为区间
[1,2]；由于 [1,3] 与 [1,2] 相交，我们跳过该区间；由于 [2,4] 与 [1,2] 不相交，我们将其保留。因
此最终保留的区间为 [[1,2], [2,4]]。
 */


class NonOverlappingIntervals {
public:
   static  int eraseOverlapIntervals(std::vector<std::vector<int>>& intervals );
};


#endif //C__PROJECT_NONOVERLAPPINGINTERVALS_H
