#include <stdio.h>

void Sum(int arr[], int n, int T) {
    int printedPairs[n][n]; // To track printed pairs (initialize with 0)
    
    // Initialize tracking array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printedPairs[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            if (arr[i] + arr[j] == T && !printedPairs[i][j]) {
                printf("%d %d\n", arr[i], arr[j]); 
                
                // Mark the pair as printed
                printedPairs[i][j] = 1;
                printedPairs[j][i] = 1; // Avoid reversing order
            }
        }
    }
}

int main() {
    int n, T;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &T);
    Sum(arr, n, T);
    return 0;
}
