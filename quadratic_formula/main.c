#include <stdio.h>
#include "quadraticroots.h"
int main(){

    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    //printf("%lf %lf %lf\n",a,b,c);
    struct QuadraticRootsResult ans= findRoots(a,b,c);
    if(ans.noRealRoots){
        printf("No real roots");
    }
    else{
        printf("the roots are %lf and %lf",ans.x1,ans.x2);
    }

    return 0;
}