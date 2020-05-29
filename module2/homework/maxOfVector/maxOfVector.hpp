#pragma once
#include <vector>
#include <limits>
#include <algorithm>

int maxOfVector(const std::vector<int>& vec) {
    int max=vec[0];
     
    for (const auto& el:vec){
        if (el>vec[0])
          max =el;
    }

    return max;
}
