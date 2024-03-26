#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char gradeLevel(const int score){
    char ch;
    if(score >= 90)
        ch = 'A';
    else if(score >= 80)
        ch = 'B';
    else if(score >= 70)
        ch = 'C';
    else if(score >= 60)
        ch = 'D';
    else
        ch = 'E';
    return ch;
}

int main()
{
    int origin, newScore;
    char originLevel, newLevel;

    scanf("%d", &origin);

    originLevel = gradeLevel(origin);
    newScore = (int)round(origin * 0.8 + 20);
    newLevel = gradeLevel(newScore);

    printf("%d %c\n", origin, originLevel);
    printf("%d %c", newScore, newLevel);
    return 0;
}
