#include<stdio.h>

int main()
{
	char a[100];
	int cnt=0,i,c=1,f=0,l,j,t,len;

	gets(a);

	for(len=0;a[len]!='\0';len++);


	for(i=0;i<=len;i++)
	{
		if(a[i]!=' ' && a[i] != '\0')
		{
			if(a[i-1]==' ')
				f=i;
			else
				l=i;
			c++;
		}
		else if(a[i]==' '  || a[i] == '\0')
		{
		   if(cnt%2 == 0)
		   {
			for(j=f;j<=((f+l)/2);j++)
			{
				t=a[j];
				a[j]=a[l];
				a[l]=t;
				l--;
			}
			cnt++;
			c=1;
		   }
		   else
		   {
			cnt++;
			c=1;
		   }
		}
	}

	puts(a);

return 0;
}
