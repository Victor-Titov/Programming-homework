#include<stdio.h>
#include "mystrings.h"
#include<string.h>
int strlength(char str[]){
    int i;
    for(i=0;str[i]!='\0';i++) {

    }
    return i;
}


struct str strconcat(char str1[], char str2[]){
    int len1= strlength(str1);
    int len2= strlength(str2);

    struct str string;

    if(len1>50 || len2>50){
        char ans[]="Input too long";
        strcpy(string.arr,"Input too long");
        return string;
    }
    for(int i=0;i<len1;i++){
        string.arr[i]=str1[i];

    }
    for(int i=0;i<len2;i++){
        string.arr[len1+i]=str2[i];
    }
    string.arr[len1+len2]='\0';
    return string;
}


int strcompare(char str1[], char str2[]){
    int len1= strlength(str1);
    int len2= strlength(str2);
    int len;
    if(len1<len2){
        len=len1;
    }
    else{
        len=len2;
    }
    for(int i=0;i<len1;i++){
        if(str1[i]>='A' && str1[i]<='Z'){
            str1[i]-='A';
            str1[i]+='a';

        }
        else if(str1[i]<'a' || str1[i]>'z'){
            return -2;
        }
    }

    for(int i=0;i<len2;i++){
        if(str2[i]>='A' && str2[i]<='Z'){
            str2[i]-='A';
            str2[i]+='a';

        }
        else if(str2[i]<'a' || str2[i]>'z'){
            return -2;
        }

    }
    for(int i=0;i<len;i++){
        if(str1[i]<str2[i]){
            return -1;
        }
        if(str1[i]>str2[i]){
            return 1;
        }

    }

    return 0;

}
