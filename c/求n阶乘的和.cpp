//��n�׳˵ĺ�, 1!+2!+3!+��+n!

#include<stdio.h>
//��׳�
int factorial(int n){
    if (n == 0 || n == 1)
        return 1;
    else
        return n*factorial(n - 1);
}
 
int main(){
    int n;
    printf("��1!+2!+...+n!�Ľ��\n����n��ֵ: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += factorial(i);
    }
    printf("���Ϊ: %d\n", sum);
 
    getchar();
    getchar();
    return 0;
}