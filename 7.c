#include <stdio.h>

int main(void)
{
    int x, y, z;
    for (x = 0; x <= 20; x++)

        for (y = 0; y <= 33; y++)

            for (z = 0; z <= 99; z++)
            {
                if ((x + y + z == 0) && (5 * x + 3 * y + z / 3.0 == 100))

                    printf("X=%3d,Y=%3d,Z=%3d\n", x, y, z);
            }
    return 0;
}