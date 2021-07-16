#include <stdio.h>
#include <math.h>

float length(float a, float b, float c, float d)
{
    float l = sqrt((a - c) * (a - c) + (b - d) * (b - d));
    return l;
}

float Area(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    float ans = sqrt(s * (s - a) * (s - b) * (s - c));
    return ans;
}

int check(float a1, float a2, float a3, float A)
{
    if (a1 + a2 + a3 == A)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    float x1, y1, x2, y2, x3, y3;
    printf("Enter co-ordinates of triangle: ");
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);

    float s1 = length(x1, y1, x2, y2);
    float s2 = length(x2, y2, x3, y3);
    float s3 = length(x3, y3, x1, y1);

    printf("sides of triangle: %f %f %f\n", s1, s2, s3);

    float A = Area(s1, s2, s3);
    printf("Area of triangle is %f\n", A);

    float x, y;
    printf("Enter co-ordinate of a point: ");
    scanf("%f %f", &x, &y);

    float a1, a2, a3;
    float l1 = length(x1, y1, x, y);
    float l2 = length(x2, y2, x, y);
    float l3 = length(x3, y3, x, y);

    a1 = Area(s1, l1, l2);
    a2 = Area(s2, l1, l3);
    a3 = Area(s3, l2, l3);

    if (check(a1, a2, a3, A))
    {
        printf("Point lies inside triangle.\n");
    }
    else
    {
        printf("Point lies outside triangle.\n");
    }

    return 0;
}