#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//자리수 더하기

int solution(int n) {
    int answer = 0;
    while(n>0){
        answer+=n%10;
        n/=10;
    }
    return answer;
}