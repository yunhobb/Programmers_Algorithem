#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//없는 숫자 더하기

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = -1;
    int total = 45;
    int sum = 0;
    
    for(int i=0;i<numbers_len;i++){
        sum += numbers[i];
    }
    answer = total - sum;
    return answer;
}