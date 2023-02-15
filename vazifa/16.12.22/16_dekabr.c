#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int xona(int n)
{
    int xona = 0;
    for (int i = n; i ; i/=10)
    {
        xona++;
    }
    return xona;
    
}
int main()
{
    // puts("Array limitini kiriting");
    // int n;
    // scanf("%d", &n);
    // int *ptt = malloc(n*4);
    // puts("Arrayga qiymatlarni kiriting");
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &ptt[i]);
    // }
    // int max = ptt[0], min = ptt[0];
    // for (int i = 0; i < n; i++)
    // {
    //     if (max < ptt[i])
    //     {
    //         max = ptt[i];
    //     }
    //     if(min > ptt[i])
    //     {
    //         min = ptt[i];
    //     }   
    // }
    // printf("min -> %d\nmax -> %d",min, max);
    



    // puts("Array limitini kiriting");
    // int n;
    // scanf("%d", &n);
    // int *ptt = malloc(n*4);
    // puts("Arrayga qiymatlarni kiriting");
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &ptt[i]);
    // }
    // int max = ptt[0], min = ptt[0];
    // for (int i = 0; i < n; i++)
    // {
    //     if (max < ptt[i])
    //     {
    //         max = ptt[i];
    //     }
    //     if(min > ptt[i])
    //     {
    //         min = ptt[i];
    //     }   
    // }
    // printf("sum of min & max -> %d",min + max);

    srand(time(NULL));
//     puts("Array limitini kiriting");
//     int n;
//     scanf("%d", &n);
//     int *ptt = malloc(n*4);
//     puts("Arrayga qiymatlarni kiriting");
//     for (int i = 0; i < n; i++)
//     {
//         ptt[i] = rand()%21+5;
//         printf("rand - > %d index - >%d\n", ptt[i], i);
//     }
    
//     int *odeve = malloc(8);
//     odeve[0] = 0;
//     odeve[1] = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (ptt[i]%2==0)
//         {
//             odeve[0] += ptt[i];
//         }
//         else
//         {
//             odeve[1] += ptt[i];
//         }   
//     }
//     printf("juft sum -> %d\ntoq sum ->%d", odeve[0], odeve[1]);



    // puts("Array limitini kiriting");
    // int n;
    // scanf("%d", &n);
    // int *ptt = malloc(n*4);
    // puts("Arrayga qiymatlarni kiriting");
    // for (int i = 0; i < n; i++)
    // {
    //     ptt[i] = rand()%21-10;
    //     printf("rand - > %d index - >%d\n", ptt[i], i);
    // }
    // int *mms = malloc(n*4), *smm = malloc(n*4);
    // for (int i = 0; i < n - 1; i++)
    //     for (int j = 0; j < n - i - 1; j++)
    //         if (ptt[j] < ptt[j + 1])
    //         {
    //             int temp = ptt[j];
    //             ptt[j] = ptt[j + 1];
    //             ptt[j + 1] = temp;
    //         }    
    // int i = n - 1, j = 0;
    // for (int f = 0; f < n;f++)
    //     if(ptt[f] > 0)
    //         mms[j++] = ptt[f];
    //     else
    //         smm[i--] = ptt[f];
    // puts("Manfiy quti");
    // for (int k = i + 1; k < n; k++)
    //     printf("%d ", smm[k]);
    // puts("\nMusbat quti");
    // for (int l = 0; l < j; l++)
    //     printf("%d ", mms[l]);

    // puts("Array limitini kiriting");
    // int n;
    // scanf("%d", &n);
    // int *ptt = malloc(n*4), *ttp = malloc(n*4);
    // puts("Arrayga qiymatlarni kiriting");
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &ptt[i]);
    //     ttp[i] = xona(ptt[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", ttp[i]);
    // }
    

    //calloc
    // puts("Array limitini kiriting");
    // int n;
    // scanf("%d", &n);
    // char *ptt = calloc(1,n);
    // puts("Gapni kiriting");
    // scanf(" %[^\n]s", ptt);
    // int harf = 0, son = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (isdigit(ptt[i]))
    //     {
    //         son++;
    //     }
    //     else if (isalpha(ptt[i]))
    //     {
    //         harf++;
    //     }
    // }
    
    // printf("Harflar %d ta\nSonlar %d ta", harf, son);

    
    // char *ptt = calloc(1000000,1);
    // puts("Gapni kiriting");
    // scanf(" %[^\n]s", ptt);
    // int soz = 0;
    // for (int i = 0; i < strlen(ptt); i++)
    // {
    //     if (isspace(ptt[i]))
    //     {
    //         soz++;
    //     }
    // }
    
    // printf("So'zlar %d ta", ++soz);



    

}

















