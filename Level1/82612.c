#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//부족한 금액 게산하기

long long solution(int price, int money, int count) {
    long long answer = -1;
    long long sum =0;
    for (int i=1;i<=count;i++)
        sum+=price*i; 
    if(sum<=money)
        answer=0;
    else 
        answer=sum-money;
    return answer;
}