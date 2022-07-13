#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//나머지가 1이 되는 수 찾기

int solution(int n) {
    for (int i=2; ;i++ )
        if(n%i==1)
            return i;
}