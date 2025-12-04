#include <stdio.h>
#include <math.h>

int main() {
    double theta_degree = 45.0;
    double theta_radian = theta_degree * M_PI / 180.0;

    double ratio = 1.0 / sin(theta_radian);

    printf("The ratio for the first minimum at %f degrees is: %f\n",
           theta_degree, ratio);

    return 0;
}
