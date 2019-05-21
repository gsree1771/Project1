#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,chg,sum,j,count=0,k;
	
	printf("Size of array:");
	scanf("%d",&n);
	k=1;
	
	int a[n],b[n];
	printf("Enter array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Change value:");
	scanf("%d",&chg);
	
	int c=10000,q=0;
	while(k>0 && k<=n)
	{
		for(i=0;i<n;i++)
    	{
		sum=0;
        	for(j=i;j<i+k;j++)
        	{	
				sum=sum+a[j];
				
	    		}
		b[q]=sum;
		q++;	
		printf("%d\n",sum);	
		
       }

	for(i=0;i<q;i++)
	{
	if(b[q]== chg)	
	 {
		printf("\n%d\n",k);	
	 }
	}
	k++;
	printf("************************");
  }
}
