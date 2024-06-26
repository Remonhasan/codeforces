// Remon Hasan
#include <cstdio>
#include <cmath>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    int r2 = x * x + y * y;
    int r = floor(sqrt(static_cast<double>(r2)));
    if (r * r < r2 && (r + 1) * (r + 1) > r2
        && (r % 2 == 1 && x * y > 0 || r % 2 == 0 && x * y < 0))
    {
        printf("white\n");
    }
    else
    {
        printf("black\n");
    }
    return 0;
}
