

#include "safeint.h"
#include <limits.h>
#include <stdlib.h>
struct safeResult safeAdd(int a, int b){
    struct safeResult ans;
        ans.value=a+b;
    if(a==0 || b==0){
        ans.error_flag=0;
        return ans;
    }

    if(a>0){
        if(b>0 && a+b<0){
            ans.error_flag=1;
            return ans;
        }
        ans.error_flag=0;
        return ans;
    }
    if(b<0 && a+b>=0){
        ans.error_flag=1;
        return ans;
    }
    ans.error_flag=0;
    return ans;

}

struct safeResult safeMultiply(int a, int b){
    int c=0;
    int d;
    struct safeResult ans;
    ans.error_flag=0;
    if(a<0){
        a*=-1;
        b*=-1;
    }
    if(b>0){
        for(int i=0;i<b;i++){
            d=c;
            c+=a;
            if(c<d){
                ans.error_flag=1;

            }
        }
    }
    else{
        for(int i=0;i>b;i--){
            d=c;
            c-=a;
            if(c>d){
                ans.error_flag=1;

            }
        }
    }
    ans.value=c;


    return ans;


}

struct safeResult safeDivide(int a, int b){
    struct safeResult ans;
    ans.value=a/b;
    if(a==INT_MIN && b==-1){
        ans.error_flag=1;
        return ans;
    }
    ans.error_flag=0;
    return ans;
}
struct safeResult safeSubtract(int a, int b){
    if(b==INT_MIN){
        struct safeResult ans;
        if(a>=0){
            ans.value=a-b;
            ans.error_flag=1;
            return ans;
        }
        if(a==INT_MIN){
            ans.value=0;
            ans.error_flag=0;
            return ans;
        }
        a--;
        b++;

    }
    return safeAdd(a,-b);
}
struct safeResult safestrtoint(char a[]){
    int len;
    long long tmpAns;
    struct safeResult ans;
    ans.value=atoi(a);
    tmpAns= atoi(a);
    for(len=0;a[len]!='\0';len++){

    }
    if(a[0]=='-'){
        if(len>11){
            ans.error_flag=1;
            return ans;
        }
    }
    else if(len>10){
        ans.error_flag=1;
        return ans;
    }
    if(tmpAns>INT_MAX || tmpAns<INT_MIN){
        ans.error_flag=1;
        return ans;
    }
    ans.error_flag=0;
    return ans;


}