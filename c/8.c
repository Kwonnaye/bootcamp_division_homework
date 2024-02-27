/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/
// 테스트 더 추가하면 좋을듯 ~

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int n;
    int mul =1;
    int sum = 0;
    scanf("%d",&n);

    for(int j=0;j<n+1;j++){
        sum += j;
    }

    for(int i=1;i<n+1;i++) {
        mul *= i;
    }

    printf("%d\n",sum);
    printf("%d",mul);
    return 0;
}