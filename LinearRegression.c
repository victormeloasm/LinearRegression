#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to perform linear regression
void linearRegression(int n, double x[], double y[]) {
    double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;

    for (int i = 0; i < n; i++) {
        sumX += x[i];
        sumY += y[i];
        sumXY += x[i] * y[i];
        sumX2 += x[i] * x[i];
    }

    double slope = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
    double intercept = (sumY - slope * sumX) / n;

    printf("Linear Regression Equation: y = %.4fx + %.4f\n", slope, intercept);
}

int main() {
    int n;
    printf("Enter the number of data points: ");
    scanf("%d", &n);

    // Seed the random number generator with the current time
    srand(time(NULL));

    double x[n], y[n];

    printf("Generated random data points:\n");
    for (int i = 0; i < n; i++) {
        x[i] = (double)rand() / RAND_MAX * 10.0;  // Generate random x between 0 and 10
        y[i] = 2.0 * x[i] + 3.0 + ((double)rand() / RAND_MAX - 0.5) * 2.0; // Generate corresponding y with some noise
        printf("Data point %d: x=%.4f, y=%.4f\n", i + 1, x[i], y[i]);
    }

    linearRegression(n, x, y);
     getch();
    return 0;
}
