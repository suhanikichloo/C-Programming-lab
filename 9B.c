// Program to print the fibonacci sequence using recursion

#include<stdio.h>
int main() {
    int num, ans;
    int fib(int);
    printf("Enter the number of terms : ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++) {
        ans = fib(i);
        printf("%d\t", ans);
    }
}
int fib(int n) {
    if(n <= 1) 
    return n;
    else
    return (fib(n-1) + fib(n-2));
}