#include <stdio.h>
#include <math.h>
void main(void)
{
    /*1*/
    float x, h = 0.1, a = 2.0, b = 3.0;
    for (x = a; x <= b; x += h)
    {
        if (x < 2.3)
            printf("%f\n", cos(x) + tan(x));
        if (x >= 2.3 && x < 2.7)
            printf("%f\n", 1 / tan(x) + sin(x));
        if (x >= 2.7)
            printf("%f.2\n", pow(x * log(x), 3));
    }
    /*2*/
    float sum, y, z;
    int k = 0;
    for (y = 0.1; y <= 1; y += 0)
    {
        float sum = 0;
        do
        {
            z = x / (2 * k + 3) / (2 * k - 1) * cos(2 * k + 1);
            sum += z;
            k += 1;
        } while (z > 0.001);
        printf("%f\n", sum);
    }
}