/*
Ѱ�������еĵڶ�����
*/

//����һ��

#include "stdio.h"
#include "stdlib.h"

//��ʼ�����ֵΪa[0]���δ�ֵΪa[1]������һ�Σ�ÿ�αȽϲ��������ֵ�ʹδ�ֵ�����Ϳ��Եõ��δ�ֵ��
int findsecondmaxvalue(int *a,int size)
{
    int i,max,s_max;
    max=a[0];  //���ֵ
	s_max=a[1];  //�δ�ֵ
    for(i=0;i<size;i++)
    {
        if(a[i]>max)
        {
			s_max=max;  //�������ֵ�ʹδ�ֵ
			max=a[i];
        }
		else if(a[i]<max && a[i]>s_max)   //���´δ�ֵ
			s_max=a[i];
    }
	return s_max;
}

int main(void)
{
    int second,a[]={111,23,3,5,652,2,3};
    second=findsecondmaxvalue(a,sizeof(a)/sizeof(a[0]));
    printf("��������еĴδ�ֵΪ��%d\n",second);
	system("pause");
	return 0;
}

//�������� 

/* 
дһ�������ҳ�һ������������,�ڶ������(microsoft) 
Ҫ��Ч�ʾ����ܸ� 
*/ 
#include "stdio.h"  
#include "stdlib.h"  

int find(int *a,int n)   //������ĵڶ���Ԫ�ؿ�ʼ����
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
	//���ֵ�ʹδ�ֵ���(����ĵ�һ��Ԫ��Ϊ���ֵ��ʱ��)  
	if(first==second)
	{
		second=find(a,size); //������ĵڶ���Ԫ�ؿ�ʼ��һ�����ֵ�ļ�Ϊ�δ�ֵ
	}
	return second;
}

int main(void)
{
	int a[] = {12012, 3, 45, 5, 66, 232, 65, 7, 8, 898, 56, 878, 170, 13, 5};
	int second=findsecondmaxvalue(a,sizeof(a)/sizeof(a[0]));
	printf("��������еĴδ�ֵΪ��%d\n",second);
	system("pause");
	return 0;
}