#include <stdio.h>
#include <ctype.h>
#include <string.h>
int isunli(char h)
{
    if(h=='e' || h=='u' || h=='i' || h=='o' || h=='a') return 1;
    if(h=='E' || h=='U' || h=='I' || h=='O' || h=='A') return 1;
    return 0;
}
// int len(int *arr)
// {
//     return sizeof(arr);
// }
int main()
{
    // FILE *ptr = fopen("ism.txt", "w");
    // // int n;
    // // scanf("%d", &n);
    // // for (int i = 1;i <= 10; i++)
    // // {
    // //     fprintf(ptr, "%d * %d = %d\n", n, i, n * i);   
    // // }
    // fclose(ptr);


    // int n;
    // scanf("%d", &n);
    // FILE *ptt = fopen("juft.txt", "w");
    // FILE *ttp = fopen("toq.txt", "w");
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    //     if(arr[i]%2==0) fprintf(ptt, "%d ", arr[i]);
    //     else fprintf(ttp, "%d ", arr[i]);
    // }
    
    // fclose(ttp);
    // fclose(ptt);
    




    //bir
    // FILE *lower = fopen("low.txt", "w");
    // FILE *upper = fopen("up.txt", "w");
    // char arr[100] = {};
    // scanf("%[^\n]s", arr);
    // for (int i = 0; arr[i]!='\0' ; i++)
    // {
    //     if(isalpha(arr[i]))
    //     {
    //         if(islower(arr[i])) fprintf(lower, "%c ", arr[i]);
    //         else fprintf(upper, "%c ", arr[i]);
    //     }
    // }
    // fclose(lower);
    // fclose(upper);
    

    //ikki
    // FILE *unli = fopen("unli.txt", "w");
    // FILE *undosh = fopen("undosh.txt", "w");
    // FILE *ism = fopen("ism.txt", "r");
    // char jfj;
    // while((jfj = fgetc(ism))!= -1)
    // {
    //     if(isunli(jfj)) fprintf(unli, "%c ", jfj);
    //     else fprintf(undosh, "%c ", jfj);
    // }
    // fclose(unli);
    // fclose(undosh);
    // fclose(ism);

    //uch
    // FILE *ops = fopen("test.txt", "w");
    // char arr[100] = {};
    // scanf("%[^\n]s", arr);
    // for (int i = 0;i < strlen(arr); i++)
    // {
    //     if (isalnum(arr[i]) && arr[i+1]==' ')
    //     {
    //         arr[i+1]='\n';
    //     }
    //     else if(arr[i]==)
    // }
    // fputs(arr, ops);
    // fclose(ops);
    
    // FILE *unli = fopen("unli.txt", "r");
    // int arr[100] = {};
    // fgets()
    // printf("%d", sizeof(arr));
    // fclose(lower);
    // fclose(upper);
    
 
}
