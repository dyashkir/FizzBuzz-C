#include<stdio.h>

main(){
  for(int n=1;n<=100;n++){
    if(n%3==0)
      printf("Fizz");
    if(n%5==0)
      printf("Buzz");
    if(n%5 && n%3)
      printf("%d", n);
  }
}

