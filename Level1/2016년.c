#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    char* answer = (char*)malloc(sizeof(int));
    int month_day[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int day[7]={"THU","FRI","SAT","SUN","MON","TUE","WED"};
    for (int i = 0; i<a-1; i++){
        b = b + month_day[i];
    }
    answer = day[b%7];
    return answer;

}