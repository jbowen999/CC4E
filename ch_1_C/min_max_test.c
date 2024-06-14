#include <stdio.h>

int main(){
    int first = 1;
    char val[100];
    int maxval, minval;

    while(gets(val) != EOF){
        int int_val = atoi(val);
        if (first || int_val > maxval) maxval = int_val;
        if (first || int_val < minval) minval = int_val;
        first = 0;
    }
    printf("Maximum %d\n", maxval);
    printf("Minimum %d\n", minval);
}