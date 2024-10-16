//
// Created by k'k'k on 2024/10/16.
//


#include "Candy.h"

int Candy::candy(std::vector<int> &ratings) {

    if(ratings.size() < 2){
        return ratings.size();
    }

    std::vector<int> childEatCandy ;
    int count = 0;
    count = ratings.size();
    for(int i = 0 , j = ratings.size() -1 ; i < (ratings.size() - 1)&&j > 0 ; i++ , j--){
        if(ratings[i] > ratings[i + 1]){
            count++;
        }
        if(ratings[j] > ratings[j -1]){
            count++;
        }
    }

    return count;
}
