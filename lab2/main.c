#include <stdio.h>
#include <math.h>

int main() {
    double alpha;
    
    scanf("%lf", &alpha);

    double z1 = cos(alpha) + sin(alpha) + cos(3 * alpha) + sin(3 * alpha);
    double z2 = 2 * sqrt(2) * cos(alpha) * sin(M_PI / 4 + 2 * alpha);
    
    printf("%.3lf, %.3lf\n", z1, z2);
 
     return 0;
}

