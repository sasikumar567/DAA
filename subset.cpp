#include <stdio.h>

void subset_sum_backtracking(int s[], int target_sum, int current_sum, int start_index, int path[], int path_size) {
    if (current_sum == target_sum) {
        printf("Subset is ");
        for (int i = 0; i < path_size; i++) {
            printf("%d ", path[i]);
        }
        printf("\n");
        return;
    }

    for (int i = start_index; i < sizeof(s) / sizeof(s[0]); i++) {
        int new_sum = current_sum + s[i];
        path[path_size] = s[i];

        if (new_sum <= target_sum) {
            subset_sum_backtracking(s, target_sum, new_sum, i + 1, path, path_size + 1);
        }
    }
}

int main() {
    int s1[] = {3,6, 2, 8, 1, 5};
    int target_sum1 = 9;

    printf("Set (s1): ");
    for (int i = 0; i < sizeof(s1) / sizeof(s1[0]); i++) {
        printf("%d ", s1[i]);
    }
    printf("\nSum is %d\n", target_sum1);

    int path1[sizeof(s1) / sizeof(s1[0])];
    subset_sum_backtracking(s1, target_sum1, 0, 0, path1, 0);

    int s2[] = {6, -4, 7, -1, 5, 2, 8, 1};
    int target_sum2 = 10;

    printf("\nSet (s2): ");
    for (int i = 0; i < sizeof(s2) / sizeof(s2[0]); i++) {
        printf("%d ", s2[i]);
    }
    printf("\nSum is %d\n", target_sum2);

    int path2[sizeof(s2) / sizeof(s2[0])];
    subset_sum_backtracking(s2, target_sum2, 0, 0, path2, 0);

    return 0;
}
