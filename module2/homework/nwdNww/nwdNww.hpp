#pragma once
#include <cmath>

int NWD(int lhs, int rhs) {
    if (lhs==0){
        return rhs;
    }

    if (rhs==0){
        return lhs;
    }

    if ((lhs<0 && rhs<0) || rhs<0){
        return (rhs*(-1));
    }

    if (lhs<0 && rhs>0){
        return rhs;
    }
    
    int temp;
    while(rhs!=0){
        temp=lhs%rhs;
        lhs=rhs;
        rhs=temp;
    }
    return lhs;
} 

int NWW(int lhs, int rhs) {
    if (lhs==0 || rhs==0){
        return 0;
    }

    if (lhs==1 || rhs==1){
        return 1;
    }
    else{
        return (lhs*rhs)/NWD(lhs,rhs);
    }
}
