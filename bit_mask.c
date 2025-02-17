#include<stdio.h>
#define uc unsigned char
uc switch_light(uc lights, uc light_masks[8],int light_number){
    lights=lights ^ light_masks[light_number-1];
    return lights;
}
void print_lights(uc lights, uc light_masks[8]){
    printf("the lights that are on are: ");
    for(int i=0;i<8;i++){
        if(light_masks[i]==(light_masks[i]&lights)){
            printf("%d ",i+1);
        }
    }
    printf("\n");



}
int main(){
    uc lights=0;
    uc light_masks[8];
    for(int i=0;i<8;i++){
        light_masks[i]=1<<i;
    }
    lights=switch_light(lights,light_masks,3);
    lights=switch_light(lights,light_masks,8);
    lights=switch_light(lights,light_masks,6);
    print_lights(lights,light_masks);


    return 0;
}