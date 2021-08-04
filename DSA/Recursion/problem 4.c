// program to find power of a number //


#include <stdio.h>

int f(int x , int n) {
    if (n== 0)
        return 1;
    else
        return ( x * f(x,n-1));
}
int main() {
    int base, a, result;
    scanf("%d%d", &base,&a);
    result = f(base, a);
    printf("%d",result);
    return 0;
}


output : 2 5
         32
