#include<stdio.h>

int main(){
 
    char a[21];

    scanf("%s",a);
    for(int i=0; a[i] !='\0'; i++){
      printf("%c\n",a[i]);


    }
    return 0;
}

//단어 1개 입력받아 나누어 출력하깅