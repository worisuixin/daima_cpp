#include <stdio.h>
int main() 
{
    FILE *fp1, *fp2;
    char c, prev;
    int comment = 0;
    fp1 = fopen("hello.c", "r");
    fp2 = fopen("new_hello.c", "w");
    if (fp1 == NULL || fp2 == NULL) 
    {
        printf("Unable to open file.\n");
        return 0;
    }

    while ((c = fgetc(fp1)) != EOF) 
    {
        if (comment == 1) 
        {
            if (prev == '*' && c == '/')
                comment = 0;
        } 
        else 
        {
            if (prev == '/' && c == '*') 
            {
                comment = 1;
                continue;
            } 
            else if (prev == '/' && c == '/') 
            {
                while ((c = fgetc(fp1)) != '\n');
            } 
            else 
            {
                fputc(prev, fp2);
            }
        }
        prev = c;
    }
    fclose(fp1);
    fclose(fp2);
    printf("Comments removed successfully.\n");
    return 0;
}
