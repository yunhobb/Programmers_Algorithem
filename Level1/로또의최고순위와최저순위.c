#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    int* answer = (int*)malloc(sizeof(int) * 2);
    int arr[7] = { 6, 6, 5, 4, 3, 2, 1 };
    int match = 0;
    int x = 0;

    // 결측값의 개수를 센다
    for (int i = 0; i < lottos_len; i++)
        if (lottos[i] == 0)
            x++;

    // 일치하는 숫자의 개수를 센다
    for (int i = 0; i < lottos_len; i++)
        for (int j = 0; j < win_nums_len; j++)
            if (lottos[i] == win_nums[j])
                match++;

    // 등수 계산
    answer[0] = arr[match + x];
    answer[1] = arr[match];

    return answer;
}