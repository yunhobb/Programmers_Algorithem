#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//두 정수 사이 합

long long solution(int a, int b) {
    long long answer = 0;
    int temp;

    if(a>b){
        temp =a;
        a=b;
        b=temp;
    }


    for( int i = a; i<=b;i++)
        answer +=i;
    return answer;
}