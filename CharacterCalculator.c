/************************************************************************************************
- GitHub 레포지토리 민들기
- 마크다운 파일로 Git 사용방법 정리하고 GitHub 올리기
- 프로그램 작성해서 GitHub에 올리기
    - 알파벳 소문자는 대문자로 대문자는 소문자로 바꾸는 프로그램 작성
    - 한글, 특수문자는 변하지 않아야함
    - 25565문자까지 입력 가능해야함.
    - 코딩스타일을 준수 하여햐암.
    - 입출력부분과 대소문자 변환 부분은 분리되어 있으며 의존성이 없어야함 (함수로 작성하여야함)
- 언어는 C언어로 작성하며, VisualStudio2022를 권장함.
************************************************************************************************/

#include <stdio.h>

#define MAX_TEXT_LENGTH 25565

void ToggleCase(char *text);

int main(void)
{
    char text[MAX_TEXT_LENGTH];

    printf("텍스트를 입력하시오. : ");
    scanf("%s", text);

    ToggleCase(text);
    printf("%s", text);

    return 0;
}

// 대소문자 변환 함수
void ToggleCase(char *text)
{
    while (*text) {
        if (*text >= 'a' && *input <= 'z') {
            *text = *text - 32; // 소문자를 대문자로 변환
        } else if (*text >= 'A' && *text <= 'Z') {
            *text = *text + 32; // 대문자를 소문자로 변환
        }
        text++;
    }
}
