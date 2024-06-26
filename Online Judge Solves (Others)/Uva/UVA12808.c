// Remon Hasan

#include <stdio.h>
#include <math.h>

#define G_ACCELERATION 9810.0   /* In mm/s^2 */

double findLandingPosition(double height, double horizonSpeed) {
  return horizonSpeed * sqrt(2 * height / G_ACCELERATION);
}

int main(void) {
  int numTests, poolLength, distance, height, horizonSpeed;
  double landingPos;

  scanf("%d", &numTests);

  while (numTests) {
    scanf("%d %d %d %d", &poolLength, &distance, &height, &horizonSpeed);

    landingPos = findLandingPosition(height, horizonSpeed);
    if (landingPos < distance - 500.0 ||
        landingPos > distance + poolLength + 500.0) {
      printf("FLOOR\n");
    } else {
      if (landingPos > distance + 500.0 &&
          landingPos < distance + poolLength - 500.0) {
        printf("POOL\n");
      } else {
        printf("EDGE\n");
      }
    }

    numTests--;
  }

  return 0;
}
