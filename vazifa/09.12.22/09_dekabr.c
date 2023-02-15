#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    //dars-bir
    /*
    char gap[50];
    puts("Gapir");
    scanf("%[^\n]", gap);
    char gap2[50];
    puts("Yana gapir");
    scanf(" %[^\n]", gap2);
    if (strlen(gap) > strlen(gap2))
    {
        printf("bu gap uzun -> ");
        printf("%s", gap);
    }
    else
    {
        printf("bu gap uzun -> ");
        printf("%s", gap2);
    }
    */
    
   int n, x = 1;
   scanf("%d", &n);
   for (int i = 0; i < n; i++)
   {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int h = 0; h < i + 1; h++)
        {
            printf("%3d ", x++);
        }        
        puts(""); 
   }
   
} 