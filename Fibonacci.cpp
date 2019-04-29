#include<stdio.h>
int Fibonacciof (int n)
{
    if(n==1||n==2) 
		{
			return 1;
	}
	else
		{
			return Fibonacciof(n-1)+Fibonacciof(n-2);
	}
}
int main()
{

    for(int i = 1; i<= 100; i++){
    	printf("Fib(%d)==%d\n",i,Fibonacciof(i));
    }
   
	return 0;
}


 
