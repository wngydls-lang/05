#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int last;
  int sum = 0;
  int i;
  
  printf("input an number : ");
  scanf("%d", &last);
  
  for(i=1; i<=last; i++) {
           sum = sum + i;
           }
  printf("the result is %d\n", sum);
  
       
  system("PAUSE");	
  return 0;
}
