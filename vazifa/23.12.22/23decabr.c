#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int toBIN(char a)
{
    int n = (int)a;
    int arr[100] = {};
    int j = 0;
    for (int i = n; i ;j++, i/=2)
    {
        arr[j] = i%2;
    }
    int rev = 0;
    j--;
    for (; j >= 0; j--)
    {
        rev*=10;
        rev+=arr[j];
    }
    
    return rev;
    
}
int main()
{
    // FILE *son = fopen("son.txt", "w");
    // FILE *sonJuft = fopen("sonodd.txt", "w");
    // FILE *sonToq = fopen("soneve.txt", "w");
    // int t, f;
    // scanf("%d", &t);
    // for (int i = 0; i < t; i++)
    // {
    //     scanf("%d", &f);
    //     fprintf(son, "%d ", f);
    //     if (f%2==0)
    //         fprintf(sonJuft, "%d ", f);
    //     else
    //         fprintf(sonToq, "%d ", f);
    // }
    
    // fclose(son);
    // fclose(sonToq);
    // fclose(sonJuft);


    // FILE *son = fopen("son.txt", "w");
    // FILE *sonJuft = fopen("sonodd.txt", "w");
    // FILE *sonToq = fopen("soneve.txt", "w");
    // int t, f;
    // scanf("%d", &t);
    // for (int i = 0; i < t; i++)
    // {
    //     scanf("%d", &f);
    //     fprintf(son, "%d ", f);
    // }
    // fclose(son);
    // son = fopen("son.txt", "r");
    // for (int i = 0; i < t; i++)
    // {
    //     fscanf(son, "%d", &f);
    //     if (f%2==0)
    //         fprintf(sonJuft, "%d ", f);
    //     else
    //         fprintf(sonToq, "%d ", f);
    // }
    
    // fclose(son);
    // fclose(sonToq);
    // fclose(sonJuft);
    


    //bir
    /*
    FILE *son = fopen("son.txt", "r+");
    char soz[200] = {};
    for (int i = 0; i < 5; i++)
    {
        fscanf(son, "%s",soz);
    }
    int len = strlen(soz);
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if(soz[j] > soz[j + 1])
            {
                char temp = soz[j];
                soz[j] = soz[j+1];
                soz[j+1] = temp;
            }
        }
        
    }
    printf("%s", soz);
    fclose(son);
    */


   //ikki
   /*
    FILE *son = fopen("son.txt", "r+");
    FILE *bin = fopen("binary.txt", "w+");
    char soz;
    while((soz = fgetc(son))!=EOF)
    {
        fprintf(bin, "%d ", toBIN(soz));
    }
    fclose(son);
    fclose(bin);
   */

    //uch
    /*
    FILE *son = fopen("son.txt", "r+");
    char soz[100] = {};
    int count = 0;
    for (int i = 0;!feof(son); i++)
    {
        fscanf(son,"%s",soz);
            if(soz[0]<='Z' && soz[0]>='A')
            {
                count++;
            } 
    }
    printf("%d", count);
    fclose(son);
    */

   //to'rt
   /*
    FILE *son = fopen("son.txt", "r+");
    FILE *lol = fopen("yangi.txt", "w");
    //son.txt ning ichida text bolishi kerak
    char soz[1000] = {};
    int i = 0;
    while (!feof(son))
    {
        fgets(soz, 1024, son);
        if(i!=3) fputs(soz, lol);
        i++;
    }
    fclose(lol);
    lol = fopen("yangi.txt", "r");
    int count = 0;
    for (int i = 0;!feof(lol); i++)
    {
        fscanf(lol,"%s",soz);
            if(soz[0]<='Z' && soz[0]>='A')
            {
                count++;
            } 
    }
    printf("%d", count);
    fclose(son);
    fclose(lol);
   */

    //besh
    /*
    FILE *son = fopen("son.txt", "r+");
    char soz[200] = {};
    for (int i = 0; i < 5; i++)
    {
        fscanf(son, "%s",soz);
    }
    int len = strlen(soz);
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if(soz[j] > soz[j + 1])
            {
                char temp = soz[j];
                soz[j] = soz[j+1];
                soz[j+1] = temp;
            }
        }
        
    }
    fseek(son, -len, SEEK_CUR);
    fprintf(son, "%s", soz);
    fclose(son);
    */
}