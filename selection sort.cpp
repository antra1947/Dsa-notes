#include <stdio.h>
int main() {
    int a[100], n, i, j, k, temp, min, loc; 

    printf("Enter the size of an array:");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) 
        scanf("%d", &a[i]);
    
    for (k = 1; k <= n - 1; k++) { 
        
        min = a[k];
        loc = k;
        
        for (j = k + 1; j <= n; j++) { 
            
            if (min > a[j]) {
                min = a[j];
                loc = j;
            }
        }
        
        temp = a[k];
        a[k] = a[loc];
        a[loc] = temp;
    }
    
    for (i = 1; i <= n; i++) { 
        printf("%d ", a[i]); 
    }

    return 0;
}

