//
// Created by viti on 11/18/2024.
//

#include "maths.h"
long factorial(long input){
    long ans=1;
    for(int i=2;i<=input;i++){
        ans*=i;
    }
    return ans;
}