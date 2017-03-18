//求n阶乘的和, 1!+2!+3!+…+n!

#include<stdio.h>
//求阶乘
int factorial(int n){
    if (n == 0 || n == 1)
        return 1;
    else
        return n*factorial(n - 1);
}
 
int main(){
    int n;
    printf("求1!+2!+...+n!的结果\n输入n的值: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += factorial(i);
    }
    printf("结果为: %d\n", sum);
 
    getchar();
    getchar();
    return 0;
}