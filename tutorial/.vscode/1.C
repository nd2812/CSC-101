#include<stdio.h>
#include<math.h>
int main()
{
    int a = 20, b = 17, c = 30, d = 34, e = a * b * c * d;
    float f = 0.25, g;
    printf("The multiplication of given four number:%d\n", e);
    g = pow(e, f);
    printf("the geomatric mean is:%f", g);
    return 0;
}