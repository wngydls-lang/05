#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x;
   
  printf("input an integer : ");
  scanf("%d", &x);
  
  if(x > 0)
       printf("����Դϴ�.\n");

  else if(x < 0) 
       printf("�����Դϴ�.\n");
       
  else 
       printf("0�Դϴ�.\n");
       
  system("PAUSE");	
  return 0;
}
