#include <stdio.h>

int main(void) {
  char s[100];
  scanf("%s", s);
  int sum = 0;
  int i = 0;
  while(s[i] != '\0'){
    if(s[i] == 'v') {
      sum += 1;
    } else {
      sum += 2;
    }
    i++;
  }
  printf("%d\n", sum);
  return 0;
}