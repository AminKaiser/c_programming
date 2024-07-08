#include<stdio.h>

int main()
{
    int a, b;
    FILE *file1, *file2;
    file1 = fopen("in.txt","r");
    file2 = fopen("out.txt","w");

    fscanf(file1,"%d %d", &a, &b);
    int c = a + b;
    fprintf(file2,"Sum is: %d", c);

    fclose(file1);
    fclose(file2);

    return 0;
}
