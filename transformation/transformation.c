

#include "transformation.h"

struct transformation transform(char input[20]){
    struct transformation error;
    error.result=0;

    strcpy(error.error,"invalid input string");
    struct transformation answer;
    answer.result=0;
    strcpy(answer.error,"");
    if(input[0]=='-'){
        if(input[1]<'1' || input[1]>'9'){
            return error;
        }
        else{
            answer.result+=input[1]-'0';
        }
        for(int i=2;input[i]!='\0';i++){
            if(input[i]>='0' && input[i]<='9'){
                answer.result*=10;
                answer.result+=input[i]-'0';
            }
            else{
                return error;
            }
        }

    }
    else{
        if(input[0]<'1' || input[0]>'9'){
            return error;
        }
        else{
            answer.result+=input[0]-'0';
        }
        for(int i=0;input[i]!='\0';i++){
            if(input[i]>='0' && input[i]<='9'){
                answer.result*=10;
                answer.result+=input[i]-'0';
            }
            else{
                return error;
            }
        }
    }
    return answer;
}