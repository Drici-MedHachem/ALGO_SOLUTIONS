#include <stdio.h>

#define SIZE 10

int main() {
    int T1[SIZE], T2[SIZE], T3[2 * SIZE];
    int i = 0, j = 0, k = 0, t;

    printf("Enter T1[1] : ");
    scanf("%d", &T1[0]);
    for (t = 1; t < SIZE; t++) {
        do {
            printf("Enter T1[%d] : ", t + 1);
            scanf("%d", &T1[t]);
        } while (T1[t] <= T1[t - 1]);
    }

    printf("\nEnter T2[1] : ");
    scanf("%d", &T2[0]);
    for (t = 1; t < SIZE; t++) {
        do {
            printf("Enter T2[%d] : ", t + 1);
            scanf("%d", &T2[t]);
        } while (T2[t] <= T2[t - 1]);
    }

    while (i < SIZE && j < SIZE) {
        if (k == 0) { 
            if (T1[i] < T2[j]) {
                T3[k++] = T1[i++];
            } else if (T1[i] > T2[j]) {
                T3[k++] = T2[j++];
            } else { 
                T3[k++] = T1[i++];
                j++;
            }
        } else { 
            if (T1[i] < T2[j]) {
                if (T3[k - 1] != T1[i]) {
                    T3[k++] = T1[i++];
                } else {
                    i++;
                }
            } else if (T1[i] > T2[j]) {
                if (T3[k - 1] != T2[j]) {
                    T3[k++] = T2[j++];
                } else {
                    j++;
                }
            } else { 
                if (T3[k - 1] != T1[i]) {
                    T3[k++] = T1[i];
                }
                i++;
                j++;
            }
        }
    }

    while (i < SIZE) {
        if (k == 0 || T3[k - 1] != T1[i]) {
            T3[k++] = T1[i];
        }
        i++;
    }

    while (j < SIZE) {
        if (k == 0 || T3[k - 1] != T2[j]) {
            T3[k++] = T2[j];
        }
        j++;
    }
    printf("\n");
    for (i = 0; i < k; i++) {
        printf("T3[%d] = %d\n", i + 1, T3[i]);
    }

    return 0;
}