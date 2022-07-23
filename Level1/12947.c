#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//하샤드 수

bool solution(int x) {
    int sum = 0;
    int k =x;
    while(k!=0){
        sum += k%10;
        k/=10;
    }
    if(x%sum ==0)
        return true;
    else
        return false;
}