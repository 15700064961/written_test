/*
寻找数组中的第二大数
*/

//方法一：

#include "stdio.h"
#include "stdlib.h"

//初始化最大值为a[0]，次大值为a[1]，遍历一次，每次比较并更新最大值和次大值，最后就可以得到次大值。
int findsecondmaxvalue(int *a,int size)
{
    int i,max,s_max;
    max=a[0];  //最大值
	s_max=a[1];  //次大值
    for(i=0;i<size;i++)
    {
        if(a[i]>max)
        {
			s_max=max;  //更新最大值和次大值
			max=a[i];
        }
		else if(a[i]<max && a[i]>s_max)   //更新次大值
			s_max=a[i];
    }
	return s_max;
}

int main(void)
{
    int second,a[]={111,23,3,5,652,2,3};
    second=findsecondmaxvalue(a,sizeof(a)/sizeof(a[0]));
    printf("这个数组中的次大值为：%d\n",second);
	system("pause");
	return 0;
}

//方法二： 

/* 
写一个函数找出一个整数数组中,第二大的数(microsoft) 
要求效率尽可能高 
*/ 
#include "stdio.h"  
#include "stdlib.h"  

int find(int *a,int n)   //从数组的第二个元素开始查找
{  
	int i,second=a[1];
	for(i=1;i<n;i++)
	{
		if(a[i]>second)
			second=a[i];
	}
	return second;
}

int findsecondmaxvalue(int *a,int size)  
{  
	int i,first,second;
	first=second=a[0];
	for(i=1;i<size;i++)
	{
		if(a[i]>first)
		{
			second=first;
			first=a[i];
		}
		else if(a[i]<first && a[i]>second)
			second=a[i];
	}
	//最大值和次大值相等(数组的第一个元素为最大值的时候)  
	if(first==second)
	{
		second=find(a,size); //从数组的第二个元素开始找一个最大值的即为次大值
	}
	return second;
}

int main(void)
{
	int a[] = {12012, 3, 45, 5, 66, 232, 65, 7, 8, 898, 56, 878, 170, 13, 5};
	int second=findsecondmaxvalue(a,sizeof(a)/sizeof(a[0]));
	printf("这个数组中的次大值为：%d\n",second);
	system("pause");
	return 0;
}