/* 
NAME;WARREN WANJALA
REG NO;PA106/G/29294/25
DESCRIPTION;PROGARM TO CHECK TOTAL SALES
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    double amount, total = 0.0;

    fp = fopen("sales.txt", "r");
    if (fp == NULL) {
        printf("Could not open file sales.txt\n");
        return 1;
    }

    while (fscanf(fp, "%lf", &amount) == 1) {
        total += amount;
    }

    fclose(fp);

    printf("Total sales of the day: %.2f\n", total);

    return 0;
}