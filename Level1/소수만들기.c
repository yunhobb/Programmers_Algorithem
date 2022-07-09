#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// nums_len은 배열 nums의 길이입니다.
int solution(int n[], int len) {
    int i;
    int j;
    int x;
    int result;
    int answer = 0;
    int div;
    int cnt;
    for(i = 0; i < len - 2; i++){
        for(j = i + 1; j < len - 1; j++){
            for(x = j + 1; x < len; x++){
                result = n[i] + n[j] + n[x];
                for(cnt = 2; cnt <= result; cnt++){
                    if(result % cnt == 0){
                        break;
                    }
                }
                if(result == cnt){
                    answer++;
                }
            }
        }
    }

    return answer;
}