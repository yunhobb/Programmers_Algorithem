#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int *solution(int numbers[], size_t numbers_len)
{
    
    int *answer;
    int num[10001];
    int len = 0, temp;

    for (int i = 0; i < numbers_len - 1; i++)
    {
        for (int j = i + 1; j < numbers_len; j++)
        {
            num[len++] = numbers[i] + numbers[j];
        }
    }

    for (int i = 0; i < len - 1; i++)    // 요소의 개수만큼 반복
    {
        for (int j = 0; j < len -1; j++)   // 요소의 개수 - 1만큼 반복
        {
            if (num[j] > num[j + 1])          // 현재 요소의 값과 다음 요소의 값을 비교하여
            {                                 // 큰 값을
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;            // 다음 요소로 보냄
            }
        }
    }


    answer = (int *)malloc(sizeof(int) * len);//모든수를 더한 개수 len 만큼 동적할당

    for (int i = 0, n = 0; i < len; i++)//answer배열 자리 변수 n 선언
    {
        answer[n++] = num[i];
        while (num[i] == num[i + 1]) i++; //겹치는 숫자 건너뛰기
    }

    return answer;
}