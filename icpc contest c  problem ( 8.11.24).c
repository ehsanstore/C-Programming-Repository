#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int pa, pb, pc;
        scanf("%d %d %d", &pa, &pb, &pc);

        if ((pa == 6 && pb == 3 && pc == 0) ||
                (pa == 6 && pb == 1 && pc == 1) ||
                (pa == 3 && pb == 3 && pc == 3) ||
                (pa == 4 && pb == 4 && pc == 1))
        {
            printf("Case %d: perfectus\n", i);
        }
        else
        {
            printf("Case %d: invalidum\n", i);
        }
    }

    return 0;
}

