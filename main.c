#include <stdio.h>

a[8] = {5,3,23,35,45,9,6, 15};

divisible_by_5 = 0;
divisible_by_3 = 0;
not_divisible_by_any = 0;

int main(void) {
    for(int i=0;i<8;i++)
    {
      if(a[i]%5 == 0)
      {
        divisible_by_5++;
      }
      else if(a[i]%3 == 0)
      {
        divisible_by_3++;
      }
      else
      {
        not_divisible_by_any++;
      }
    }
    printf("\n divisible_by_3 = %d", divisible_by_3);
    printf("\n divisible_by_5 = %d", divisible_by_5);
    printf("\n not_divisible_by_any = %d", not_divisible_by_any);
}