#include<stdio.h>
#include<conio.h>
void quickSort(long long numbers[], long long array_size);
void q_sort(long long numbers[], long long left, long long right);
int main()
{
	long long array[100000],no,i,a,x,count,j,b;
	scanf("%lld",&no);
	long long arr[no];
	scanf("%lld",&a);
	b=a;
	for(i=0;i<no;i++)
    scanf("%lld",&arr[i]);
    quickSort(&arr[0],no);
    for(i=0;i<no;i++)
    printf("%d\n",arr[i]);
    getch();
    return 0;
}
void quickSort(long long numbers[], long long array_size)
{
  q_sort(numbers,0,array_size - 1);
}
void q_sort(long long numbers[], long long left, long long right)
{
  long long pivot, l_hold, r_hold;
  l_hold=left;
  r_hold=right;
  pivot=numbers[left];
  while(left<right)
  {
    while((numbers[right]<=pivot)&&(left<right))
      right--;
    if(left!=right)
    {
      numbers[left]=numbers[right];
      left++;
    }
    while((numbers[left]>=pivot)&&(left<right))
      left++;
    if(left!=right)
    {
      numbers[right]=numbers[left];
      right--;
    }
  }
  numbers[left]=pivot;
  pivot=left;
  left=l_hold;
  right=r_hold;
  if(left<pivot)
    q_sort(numbers,left,pivot-1);
  if (right>pivot)
    q_sort(numbers,pivot+1,right);
}
