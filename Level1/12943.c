#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//콜라츠 추측
//오버플로우 생각?()

int solution(long long num) {
    int answer = 0;
    while(num!=1){
        (num%2==0) ? (num/=2):(num=num*3+1);
        answer++;
        
    }
    if(answer>499)
        return -1;
    else
     return answer;
}