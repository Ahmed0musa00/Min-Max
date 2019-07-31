#include <stdio.h>

int min_max(int a[], int *min);

int main(void)
{
    int arr[5]={11,2,3,-5,5};
    int min=arr[0];
    int max=min_max(arr, &min);
    printf("the minimum number is %d ,the maximum is %d\n", min,max);
    return 0;
}

int min_max(int a[], int *min)
{
  int max=a[0];
  int i;
  for(i=0;i<5;i++)
  {
      if(max<a[i])
        max=a[i];

      if(*min>a[i])
        *min=a[i];
  }
  return max;
}
