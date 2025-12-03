#include <stdio.h>
#include <math.h>

int main() {
    double lambda, theta, d, m;
    printf("Enter wavelength (nm): ");
    scanf("%lf", &lambda);
    if (lambda < 380 || lambda > 750) {                                      //wavelength range
        printf("Out of the range. Please enter a valid number.\n");
    }
    printf("Enter angle theta (in degrees): ");
    scanf("%lf", &theta);
    printf("Enter slit separation d (in nm): ");
    scanf("%lf", &d);
    double theta_radians = theta * (M_PI / 180.0);                         //Convert degrees to radians
    m = (d * sin(theta_radians)) / lambda;                                //m = (d * sin θ) / λ
    int m_order = (int)round(m);                                         //integar order
    printf("%d-th order maxima\n", m_order);

    return 0;
}
