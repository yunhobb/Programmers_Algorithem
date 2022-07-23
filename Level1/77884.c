#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//약수의 개수와 덧셈

int solution(int left, int right) {
    int answer = 0;
    int count;
    
    for(left;left <= right;left++){
        for(int i = 1;i<=left;i++){
            if(left % i == 0){
                count++;
            }            
        }
        
        if(count%2 == 0){
            answer = answer + left;
        }
        else{
            answer = answer - left;
        }
        count = 0;
    }   
    return answer; 
}