#include <stdio.h>
#include <time.h>

// n is 10e8 in all functions
#define num 100000000

clock_t while_time(){
    int i=0;
    clock_t start=clock();
    while(i<num){
        i++;
    }
    clock_t end=clock();
    return end-start;
}

clock_t for_time(){
    int i=0;
    clock_t start=clock();
    for(i=0; i<num; i++){
    }
    clock_t end=clock();
    return end-start;
}

clock_t if_time(){
    int i=0;
    clock_t start=clock();
    while(i<num){
        if (i>0){}
        i++;
    }
    clock_t end=clock();
    return end-start;
}

clock_t if_10_time(){
    int i=0;
    clock_t start=clock();
    while(i<num){
        if (i>0){}
        if (i>0){}
        if (i>0){}
        if (i>0){}
        if (i>0){}
        if (i>0){}
        if (i>0){}
        if (i>0){}
        if (i>0){}
        if (i>0){}
        i++;
    }
    clock_t end=clock();
    return end-start;
}


int main(){
    clock_t f;
    f=while_time();
    printf("while_time: %f\n", (float)f/CLOCKS_PER_SEC);
    f=for_time();
    printf("for_time: %f\n", (float)f/CLOCKS_PER_SEC);
    f=if_time();
    printf("if_time: %f\n", (float)(f)/CLOCKS_PER_SEC);
    f=if_10_time();
    printf("if_10_time: %f\n", (float)(f)/CLOCKS_PER_SEC);

    return 0;
}
