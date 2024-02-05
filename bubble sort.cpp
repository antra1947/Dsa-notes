#include<stdio.h>
int main(){
	int a[10],k,p,n,swap;
	printf("enter the array: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
{
	scanf("%d",&a[i]);
}
 for( k=1; k<= n-1; k++)
{
	for(p=1;p<=n-k;p++)
	{
		if(a[p]>a[p+1])
		{
			 swap = a[p];
                a[p] = a[p + 1];
                a[p + 1] = swap;
			
					}
					
					
	}
}
printf("Sorted array in ascending order: ");
    for (k = 1; k <= n; k++) {
        printf("%d ", a[k]);
    }

    return 0;
}
