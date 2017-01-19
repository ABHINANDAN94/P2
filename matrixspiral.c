#include<stdio.h>
//#include<conio>
#include<math.h>
int main()
{
	int i,j,n,h,count=1,a[20][20],round;
	//clrscr();
	
	printf("\nEnter the size of matrix = ");
	scanf("%d",&n);
	//int n=rows*cols;
	if(n%2==0)
	{round = n/2;}else{
	round = (n/2)+1;}
	for(i=0;i<round;i++)
	{
		for(j=i;j<=n-i-1;j++)
		{
			a[i][j]=count;
			count++;
		}	
		for(j=i+1;j<=n-i-1;j++)
		{
			a[j][n-i-1]=count;
			count++;
		}
		for(j=n-i-2;j>=i;j--)
		{
			a[n-i-1][j]=count;
			count++;
		}
		for(j=n-i-2;j>i;j--)
		{
			a[j][i]=count;
			count++;
		}
	}
	
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			printf("\t%d",a[i][j]);
		   printf("\n");
		}
return 0;
}
