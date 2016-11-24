/*
Student Name : Kabir Shrestha
Subject : Programming Fundamental
Lab No. : 17
Program : WAP tp print the reverse of the four digit number.
Date : 2016-11-24
*/
 #include<stdio.h>
	int main()
	{
	int i,j;
	
	printf("\nEnter the digit : ");
	scanf("%d",&j);

	printf("\nthe reverse orde is : ");
	
	while(i>0)
	{
		j=i%10;
	printf("%d",j);
		i=i/10;
	}
	
	return 0;
	}
