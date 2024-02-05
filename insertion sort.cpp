#include<stdio.h>
int main(){
	int a[10],j,i,temp,n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=2;j<=n;j++)
	{
		temp = a[j];
		i = j-1;
		while(i>0 && a[i]>temp)
		{
			a[i+1] = a[i];
			i--;
			
		}
		a[i+1] = temp;
	}
	return 0;
}
