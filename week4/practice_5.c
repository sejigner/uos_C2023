#include <stdio.h>

int main(void) {
  char menu;
  char A[] = "라면";
  char B[] = "치킨텐더샐러드";
  char C[] = "나물비빔밥";
  char D[] = "동파육";
  printf("코너 입력 : ");
  scanf("%c", &menu);
  switch(menu) {
    case 'A':
      printf("오늘의 %c코너 학식은 %s 입니다.", menu, A);
      break;
    case 'B':
      printf("오늘의 %c코너 학식은 %s 입니다.", menu, B);
      break;
    case 'C':
      printf("오늘의 %c코너 학식은 %s 입니다.", menu, C);
      break;
    case 'D':
      printf("오늘의 %c코너 학식은 %s 입니다.", menu, D);
      break;
    default:
      printf("없는 메뉴입니다.");
  }
}