/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int n;
    int sum =0;
    int condition = 1; //condition은 break 대신 쓰는 것이다.

    while (condition) { //while(1)과 같다. 무한반복한다.
        scanf("%d",&n);
        // 음수일때
        if(n<=0) { 
            printf("X\n");
        } //X를 출력하고 다시 scanf한다.
       
        //음수가 아니면 while문을 나온다
        //condition을 0으로 바꿔 while문을 나올 수 있다.
        else {
            condition = 0;
        }
    }
    //양수일때는 1부터 n까지의 합을 출력한다.
    for(int i=0;i<n+1;i++) { 
        sum +=i;
    }
    printf("%d",sum);

    return 0;
}
