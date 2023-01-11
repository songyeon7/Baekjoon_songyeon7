#include <stdio.h>

int min(int a, int b) {
	if (b == 0) return a;
	else return min(b, a % b);
}
int main () {
    int a, b, temp;
    scanf("%d %d", &a, &b);
    temp = min(a, b);
    printf("%d\n%d", temp, a*b/temp);
    return 0;
}