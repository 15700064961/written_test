//�õݹ��㷨�ж�����a[N]�Ƿ�Ϊһ���������顣
//�ݹ�ķ�������¼��ǰ���ģ������жϵ�ǰ���Ƿ��������󣬴�����������򷵻�false������

bool fun(int a[], int n)
{
    if(n= =1)
        return true;
    if( n= =2 )
        return a[n-1] >= a[n-2];

    return fun( a,n-1) && ( a[n-1] >= a[n-2] );
}