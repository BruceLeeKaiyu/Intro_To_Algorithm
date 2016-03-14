#include <stdio.h>
void InsertSort(int *a,int len)
{
    int i,j;
    for(i=1;i<len;++i)
    {
    	int tmp = a[i];
    	int low = 0;
	int high = i-1;
	int mid;
	while(low <= high){
	    mid = (low + high)/2;
	    if(a[mid] <= tmp)
	    	low = mid + 1;
	    else
	    	high = mid - 1;

	}
	for(j=i;j>low;j--)
	    a[j] = a[j-1];
	a[low] = tmp;

    }
}

int main()
{
   int a[] = {2,7,6,9,5,10,23,22,21,19,1,4,3,8};
   InsertSort(a,14);
   int i;
   for(i=0;i<14;++i)
   	printf("%d\n",a[i]);
   return 0;
}

