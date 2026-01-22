#include<stdio.h>
int main()
{
  // average of 5 no. in C

  int marks[5]={12,32,45,13,19};
  int sum=0;
  float average=0.0;
  for (int i=0; i<5; i++)
  {
    sum=sum+marks[i];
  }
  average=sum/5;
  printf("%f", average);
  return 0;
}
