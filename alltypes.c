/*
 * short
 * int
 * long
 * long long
 *
 */

#include<stdio.h>
#include<limits.h>
//#define PRINT(TYPE,FORMAT,BLEN,SMAX,SMIN,UMAX) printf("%-10s %-10s %-10zu %-20d %-20d %-20u\n",TYPE,FORMAT,BLEN,SMAX,SMIN,UMAX)

int main(){
    printf("%-10s %-10s %-10s %-20s %-20s %-20s\n","Type","Format","Byte size","Signed max","Signed min", "Unsigned max");
   /* PRINT("short","h",sizeof(short),SHRT_MAX,SHRT_MIN,USHRT_MAX);
    PRINT("int","d",sizeof(int),INT_MAX,INT_MIN,UINT_MAX);
    PRINT("int","d",sizeof(int),LONG_MAX,LONG_MIN,ULONG_MAX);*/
    printf("%-10s %-10s %-10zu %-20d %-20d %-20u\n","short","h",sizeof(short),SHRT_MAX,SHRT_MIN,USHRT_MAX);
    printf("%-10s %-10s %-10zu %-20d %-20d %-20u\n","int","d",sizeof(int),INT_MAX,INT_MIN,UINT_MAX);
    printf("%-10s %-10s %-10zu %-20ld %-20ld %-20lu\n","long","ld",sizeof(long),LONG_MAX,LONG_MIN,ULONG_MAX);
    printf("%-10s %-10s %-10zu %-20lld %-20lld %-20llu\n","long long","ld",sizeof(long long),LONG_LONG_MAX,LONG_LONG_MIN,ULONG_LONG_MAX);

    return 0;
}
