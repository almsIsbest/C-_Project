//
// Created by k'k'k on 2024/10/16.
//

#include "NonOverlappingIntervals.h"

int NonOverlappingIntervals::eraseOverlapIntervals(std::vector<std::vector<int>> &intervals) {
     if(intervals.empty()){
         return 0;
     }

     int n = intervals.size();
     std::sort(intervals.begin() , intervals.end() , [](std::vector<int>  a , std::vector<int> b ){
         return a[1] < b [1];
     });

     int total = 0 , prev = intervals[0][1];
     for(int i = 1 ; i < n ; i++){
        if( intervals[i][0] >= prev){
            total++;
        } else {
            prev = intervals[i][1];
        }
     }

    return total;
}