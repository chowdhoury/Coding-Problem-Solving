#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int caseNum = 1; caseNum <= t; caseNum++) {
        int q;
        scanf("%d", &q);
        int energy = 0;

        printf("Case %d:\n", caseNum);

        while (q--) {
            int type, p;
            scanf("%d %d", &type, &p);

            if (type == 1) {
                energy += p;
            } else if (type == 2) {
                energy -= p;
                if (energy < 0) {
                    energy = 0;
                }
            } else if (type == 3) {
                printf("%d units of energy\n", energy);
            }
        }

        printf("\n");
    }

    return 0;
}
