#include <stdio.h>

void my_strtok(char *str1,char *str2);

int main(void){
    char str[100];
    printf("문장을 입력하세요.");
    scanf("%[^\n]s",str);
    printf("strtok 출력\n");
    my_strtok(str," ");
}

void my_strtok(char *str1,char *str2){
    while (*str1 != '\0'){
      if (*str1 == *str2) printf("\n");
      else printf("%c",*str1);
      str1++;
    }
    printf("\n");
}
