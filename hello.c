#include<stdio.h>

int main(){
  int a,b;
  int temp;
  scanf("%d %d", &a,&b);
  temp = a;
  a = b;
  b = temp;
  printf("swaped a: %d, swaped b: %d", a,b);
  
  printf("Bhavya was good");
  
  return 0;
  
}
