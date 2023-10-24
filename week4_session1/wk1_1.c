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
    int j;
    printf("enter a number of n:");
    for(i=1; i<=n; i++)
    {
        scanf("%d", &n);
        for(j=1; j<=n; j++){
        fprintf(file, "%d\n", j*j);
        }
    }
        fclose(file);
        return 0;
}