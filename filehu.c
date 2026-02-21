#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp1, *fp2;
    char str[100], ch;
    printf("Enter a string:\n");
    scanf("%[^\n]", str);
    fp1 = fopen("text.txt", "w");

    if (fp1 == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    for (int i = 0; i < strlen(str); i++)
    {
        fprintf(fp1, "%c", str[i]);
    }
    fclose(fp1);
    fp1 = fopen("text.txt", "r");
    fp2 = fopen("paste.txt", "w");
    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    while (fscanf(fp1, "%c", &ch) != EOF)
    {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
        {
            fprintf(fp2, "%c", ch);
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}