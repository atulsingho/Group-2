#include <stdio.h>
#include <math.h>

int main() {
    double lambda, theta, d;
    double m;

    printf("Enter wavelength (nm): ");
    scanf("%lf", &lambda);

    // Check wavelength range
    if (lambda < 380 || lambda > 750) {
        printf("Out of the range. Please enter a valid number.\n");
        return 0;
    }

    printf("Enter angle theta (in degrees): ");
    scanf("%lf", &theta);

    printf("Enter slit separation d (in nm): ");
    scanf("%lf", &d);

    // Convert degrees to radians for sin()
    double theta_radians = theta * (M_PI / 180.0);

    // Formula: m = (d * sin θ) / λ
    m = (d * sin(theta_radians)) / lambda;

    // Round m to nearest integer (order must be integer)
    int m_order = (int)round(m);

    printf("%d-th order maxima\n", m_order);

    return 0;
}
