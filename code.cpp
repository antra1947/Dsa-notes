#include <stdio.h>

int find_majority_candidate(int votes[], int n) {
    int candidate_votes[10001] = {0}; // Assuming candidate IDs are between 1 and 10000
    int majority_threshold = n / 2;
    
    for (int i = 0; i < n; i++) {
        candidate_votes[votes[i]]++;
        if (candidate_votes[votes[i]] > majority_threshold) {
            return votes[i];
        }
    }
    
    return -1; // No majority candidate
}

int main() {
    int N;
    scanf("%d", &N);
    
    int votes[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &votes[i]);
    }
    
    int majority_candidate = find_majority_candidate(votes, N);
    
    if (majority_candidate != -1) {
        printf("Majority candidate: %d\n", majority_candidate);
    } else {
        printf("No majority candidate\n");
        return 0;
    }
    

