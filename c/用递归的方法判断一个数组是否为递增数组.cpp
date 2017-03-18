//用递归算法判断数组a[N]是否为一个递增数组。
//递归的方法，记录当前最大的，并且判断当前的是否比这个还大，大则继续，否则返回false结束：

bool fun(int a[], int n)
{
    if(n= =1)
        return true;
    if( n= =2 )
        return a[n-1] >= a[n-2];

    return fun( a,n-1) && ( a[n-1] >= a[n-2] );
}