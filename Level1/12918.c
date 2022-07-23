#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//문자열 다루기 기본

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    int a =strlen(s);
    if(a==4 || a==6){
        for(int i=0; i<a;i++){
            if(s[i]>'9'||s[i]<'0'){
                return false;
            }
        }
    }
    return true;
}