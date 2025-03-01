#include <stdio.h>


int isFakeProfile(int profileAge, int friendCount, int postCount, int profilePicture, int suspiciousActivity) {
    int score = 0;

    if (profileAge <03) score += 2; 
    if (friendCount < 10) score += 2; 
    if (postCount < 5) score += 2; 
    if (profilePicture == 0) score += 3; 
    if (suspiciousActivity == 1) score += 3; 

    if (score >= 5) {
        return 1; 
    }
    return 0; 
}

int main() {
    int profileAge, friendCount, postCount, profilePicture, suspiciousActivity;
    
    printf("Enter profile age (in months): ");
    scanf("%d", &profileAge);

    printf("Enter number of friends: ");
    scanf("%d", &friendCount);

    printf("Enter number of posts: ");
    scanf("%d", &postCount);

    printf("Does the profile have a profile picture? (1 for Yes, 0 for No): ");
    scanf("%d", &profilePicture);

    printf("Is there any suspicious activity (1 for Yes, 0 for No)? ");
    scanf("%d", &suspiciousActivity);

    if (isFakeProfile(profileAge, friendCount, postCount, profilePicture, suspiciousActivity)) {
        printf("WARNING: This profile is likely FAKE!\n");
    } else {
        printf("This profile seems real\n");
    }

    return 0;
}