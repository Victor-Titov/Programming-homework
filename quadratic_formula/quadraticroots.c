//
// Created by viti on 12/10/2024.
//

#include "quadraticroots.h"
#include <math.h>
#include <stdio.h>
struct QuadraticRootsResult findRoots(double a, double b, double c){
    double D;
    //printf("%lf %lf %lf\n", a,b,c);
    struct QuadraticRootsResult ans;
    D=(b*b)-(4*a*c);
    //printf("%lf\n",D);
    if(D<0){
        ans.noRealRoots=1;
        return ans;
    }
    ans.x1=(b*(-1) + sqrt(D))/(2*a);
    ans.x2=(-b*(-1) - sqrt(D))/(2*a);
    ans.noRealRoots=0;
    return ans;
}