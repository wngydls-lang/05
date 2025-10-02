#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x;
  int answer = 59;
  int i=0; //try times
  
  do {
      printf("Guess a number : ");
      scanf("%d", &x);
      i++;
      
      if (x < answer)
            printf("low!\n");
      else if (x > answer)
           printf("high!\n");
           
      } while (x != answer);
      
  printf("congratulation! trials: %d\n", i);
 
  system("PAUSE");	
  return 0;
}
