#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//짝수와 홀수

char* solution(int num) {
    // 리턴할 값은 메모리를 동적 할당해주세요
    char* answer = (char*)malloc(sizeof(char));
    if (num%2==0)
        answer="Even";
    else
        answer="Odd";
    return answer;
}