#include <stdio.h>

#define MAX_OBJECTS 100

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsack(int values[MAX_OBJECTS], int weights[MAX_OBJECTS], int numObjects, int maxWeight) {
    int dp[MAX_OBJECTS + 1][maxWeight + 1];

    for (int i = 0; i <= numObjects; i++) {
        for (int w = 0; w <= maxWeight; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (weights[i - 1] <= w) {
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[numObjects][maxWeight];
}

int main() {
    int numObjects;
    int maxWeight;

    printf("Enter the number of objects: ");
    scanf("%d", &numObjects);

    int values[MAX_OBJECTS];
    int weights[MAX_OBJECTS];

    printf("Enter the values of the objects:\n");
    for (int i = 0; i < numObjects; i++) {
        scanf("%d", &values[i]);
    }

    printf("Enter the weights of the objects:\n");
    for (int i = 0; i < numObjects; i++) {
        scanf("%d", &weights[i]);
    }

    printf("Enter the maximum knapsack weight: ");
    scanf("%d", &maxWeight);

    int result = knapsack(values, weights, numObjects, maxWeight);

    printf("The maximum value that can be obtained is: %d\n", result);}

    
