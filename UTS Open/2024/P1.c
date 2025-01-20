#include <math.h>
#include <stdio.h>

int main(void) {
    long to_water, water;
    long dist = 0;
    scanf("%ld\n%ld", &to_water, &water);
    int gap = ceil((float) to_water / (float)water);
    dist = 2 * to_water * gap - water * gap * (gap - 1);
    printf("%ld\n", dist);
    return 0;
}
