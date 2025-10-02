#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a;
  char x;
  int b;
  int result;
  
  printf("enter the calculation : ");
  scanf("%d %c %d", &a, &x, &b);
  
  switch(x) {
            case '+':
                 result = a + b;
                 break;
            case '-':
                 result = a - b;
                 break;
            case '*':
                 result = a * b;
                 break;
            case '/':
                 result = a / b;
                 break;
            default:
                    printf("it's unvalid");
                    }
                    
  printf("the result is %d\n", result);
  
       
  system("PAUSE");	
  return 0;
}
