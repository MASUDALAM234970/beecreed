// Online C compiler to run C program online
#include <stdio.h>
int main()
{
  double salary, comision, total;
  char name;
  scanf("%s %lf %lf", &name, &salary, &comision);

  total = salary+comision*.15;
  printf("TOTAL = R$ %.2lf\n", total);
  return 0; 
}


