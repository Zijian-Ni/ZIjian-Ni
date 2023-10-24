#include <stdio.h>

int main(){
    char filename [] = "squares.dat";
    FILE *file = fopen(filename, "w");
    if (file == NULL){
        perror("");
        return 1;
    }
    int n;
    int i;
    printf("enter a number of n:");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        fprintf(file, "%d\n", i*i);
    }
        fclose(file);
        return 0;
}