#include<stdio.h>
void main()
{
	int num[]={10,20,30,40,50};
	int i;
	/*for(i=0;i<6;i++)
	{
		printf("%d\t",num[i]);
	}*/
	printf("&num = %u ",&num);
	printf("\n&num[0] = %u",&num[0]); 
	printf("\n&num[1] = %u",&num[1]);
	printf("\n&num[2] = %u",&num[2]);
	printf("\n&num[3] = %u",&num[3]);
	printf("\n&num[4] = %u",&num[4]);
	printf("\n&num[5] = %u",&num[5]);
	
	printf("\n\nnum = %u",num);
	printf("\n*num = %u",*num);
	printf("\nnum[0] = %d",num[0]);
	printf("\n*(0+num) = %d",*(0+num));
	printf("\n*(num+0) = %d",*(num+0));
	printf("\n0[num] = %d",0[num]);
	printf("\n&num = %u",&num);
	printf("\n*(&num) = %u",*(&num));
	printf("\n**(&num) = %u",**(&num));
	
}
