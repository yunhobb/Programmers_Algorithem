#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// id_list_len은 배열 id_list의 길이입니다.
// report_len은 배열 report의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k) {
    char table[1000][1000] = { {0,}, };
    int x = 0;
    int y = 0;
    int i = 0;
    int j = 0;

    for (i = 0; i < report_len; i++)
    {
        char str[21];
        memcpy(str, report[i], strlen(report[i]) + 1);
        char* next;
        char* src = strtok(str, " ");
        char* tgt = strtok(NULL, " ");

        for (j = 0; j < id_list_len; j++)
        {
            if (strcmp(id_list[j], src) == 0)
            {
                y = j;
            }

            if (strcmp(id_list[j], tgt) == 0)
            {
                x = j;
            }
        }
        table[y][x] = 1;
    }

    int reportee[1000] = { 0, };
    for (x = 0; x < id_list_len; x++)
    {
        int sum = 0;
        for (y = 0; y < id_list_len; y++)
        {
            sum += table[y][x];
        }

        if (sum >= k)
        {
            reportee[x] = sum;
        }
    }


    int* answer = (int*)malloc(sizeof(int) * id_list_len);
    memset(answer, 0, sizeof(int) * id_list_len);
    for (x = 0; x < id_list_len; x++)
    {
        for (y = 0; y < id_list_len; y++)
        {
            if (reportee[x] && table[y][x])
            {
                answer[y]++;
            }
        }
    }

    return answer;
}