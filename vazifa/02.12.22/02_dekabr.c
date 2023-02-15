#include <stdio.h>
int main()
{
    // int n, m;
    // scanf("%d", &n);
    // scanf("%d", &m);
    // int arr[n][m];
    // for (int i = 0; i < n * m; i++)
    // {
    //     scanf("%d", *(arr + 0) + i);
    // }
    // int max = arr[0][0];
    // for (int i = 0; i < n * m; i++)
    // {
    //     if(max < arr[0][i])
    //     {
    //     max = arr[0][i];
    //     }
    // }
    // printf("%d", max);


    // int n, m;
    // scanf("%d", &n);
    // scanf("%d", &m);
    // int arr[n][m], sum[32]={};
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         scanf("%d", &arr[i][j]);
    //         sum[i] += arr[i][j];
    //     }
        
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d-qator yig'indisi - > %d\n", i + 1, sum[i]);
    // }
    


    // int n, m;
    // scanf("%d", &n);
    // scanf("%d", &m);
    // int arr[n][m], sum[32]={};
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         scanf("%d", &arr[j][i]);
    //         sum[j] += arr[j][i];
    //     }
        
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     printf("%d-ustun yig'indisi - > %d\n", i + 1, sum[i]);
    // }



    // int n, m;
    // scanf("%d", &n);
    // scanf("%d", &m);
    // int arr[n][m];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         scanf("%d", &arr[i][j]);
    //     }
        
    // }
    // ///-------------------------------------------------------------------------
    // int max = arr[0][0], min = arr[0][0];
    // for (int i = 0; i < n * m; i++)
    // {
    //     if (arr[0][i] > max)
    //     {
    //         max = arr[0][i];
    //     }
    //     else if (arr[0][i] < min)
    //     {
    //         min =arr[0][i];
    //     }
    // }
    
    // //--------------------------------------------------------------------------
    // for (int i = 0; i < n * m; i++)
    // {
    //     if (arr[0][i]==max)
    //     {
    //         arr[0][i] = min;
    //         break;
    //     }
        
    // }
    // for (int i = 0; i < n * m; i++)
    // {
    //     if (arr[0][i]==min)
    //     {
    //         arr[0][i] = max;
    //         break;
    //     }
        
    // }
    // //-------------------------------------------------------------------------
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     puts("");
    // }



    // int n;
    // puts("Arrayni ikki xonasiga birdan qiymat bering");
    // scanf("%d", &n);
    // int arr[n][n];
    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         scanf("%d", &arr[i][j]);
    //         if(i==j)
    //         {
    //             sum+=arr[i][j];
    //         }
    //     }
        
    // }
    // printf("%d", sum);
    



    // int n;
    // puts("Arrayni ikki xonasiga birdan qiymat bering");
    // scanf("%d", &n);
    // int arr[n][n];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         scanf("%d", &arr[i][j]);
        
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if(i!=j)
    //         {
    //             printf("%d ", arr[i][j]);

    //         }
    //         else
    //         {
    //             printf("* ");
    //         }
    //     }
    //     puts("");
    // }



    // int n;
    // puts("Arrayni ikki xonasiga birdan qiymat bering");
    // scanf("%d", &n);
    // int arr[n][n];
    // int sumtoq = 1, sumjuft = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         scanf("%d", &arr[i][j]);
    //         if(arr[i][j]%2==0)
    //         {
    //             sumjuft += arr[i][j];
    //         }
    //         else
    //         {
    //             sumtoq *= arr[i][j];
    //         }
            
    //     }
    // }
    // printf("juftlar yig'indisi -> %d toqlar kopaytmasi -> %d", sumjuft, sumtoq);

    //--------------------------------------------------------------------------------

    int n;
    puts("Arrayni ikki xonasiga birdan qiymat bering");
    scanf("%d", &n);
    int arr[n][n];
    int sum = 0,max;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }
    max = arr[0][0];
    for (int i = 0; i < n * n; i++)
    {
        if (arr[0][i] > max)
        {
            max = arr[0][i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i!=j)
            {
                printf("* ");
            }
            else
            {
                printf("%d ", arr[i][j]);
            }
        }
        puts("");
    }

    // printf("yig'indisi -> %d max -> %d", sumjuft, max);










}