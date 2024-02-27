/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>
#include <string.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    char alpa;
    scanf("%c",&alpa); //알파벳 문자 하나를 입력받기 때문에 char, %c로 받는다.

    char *check = strchr("aeiou",alpa); 
    //strchr : 문자열 내의 특정 문자를 찾아 위치를 반환하는 함수 (문자의 포인터를 반환함)
    //char* strchr(const char*, int c);
    //char* strchr(const char*, int c); 이나 char *strchr(const char*, int c); 이나 똑같음.
    // char* str : 검색할 문자열
    // int c : 존재하는지 확인할 문자 (아스키값으로 들어감)
    if(check != NULL)
        printf("O");
    else printf("X");
    return 0;
}