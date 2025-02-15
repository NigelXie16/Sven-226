#include <stdio.h>

int max(int x, int y) {
    int bigger;
    bigger = x;
    if (y > x) {
        bigger = y;
        // note: changing the parameter x's value here will not
        //       change the value of its corresponding argument
        x = y; // which x is this anyhow?
    }
    printf("  in max, before return x: %d y: %d\n", x, y);
    return bigger;
}


/* main: shows a call to max */
int main(void) {
    int a, b, res;

    printf("Enter two integer values: ");
    scanf("%d%d", &a, &b);
	// Draw exec stack at this point.
    res = max(a, &b);
    printf("The larger value of %d and %d is %d\n", a, b, res);

    return 0;
}
