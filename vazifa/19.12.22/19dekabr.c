#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct butun
{
    char ism[20];
    int kurs;
    int stip;
};

struct meva
{
    char nomi[20];
    int narxi;
    char rangi[20];
    int soni;
};

struct detall
{
    int videok;
    int protses;
    int oper;
    int monitor;
};


struct komp
{
    char modeli;
    struct detall lol; 
};


// struct teach
// {
//     char familiya[20], ism[20];
// };


// struct shop
// {
//     int ishson;
//     char nomi[25];
//     int soliq;
// };


int main()
{
    // struct butun arr[3] = {{.age = 19, .familiya = "None", .ism = "Not none", .stip = 50000}, {.age = 21, .familiya = "None2", .ism = "Not none2", .stip = 50000}, {.age = 23, .familiya = "None 3", .ism = "Not none 3", .stip = 50000}};
    // int max = arr[0].age;
    // for (int i = 1; i < 3; i++)
    // {
    //     if (arr[i].age > max)
    //     {
    //         max = arr[i].age;
    //     }
        
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     if(arr[i].age==max)
    //     {
    //         printf("ismi %s\nfamiliya %s\nyoshi %d\nstipendiya %d", arr[i].ism, arr[i].familiya, arr[i].age, arr[i].stip);
    //     }
    // }
    
    
    // struct butun arr[3] = {{.age = 19, .familiya = "airnimane", .ism = "abnone", .stip = 50000}, {.age = 21, .familiya = "lol", .ism = "Not none2", .stip = 50000}, {.age = 23, .familiya = "None 3", .ism = "alinone 3", .stip = 50000}};
    // for (int i = 0; i < 3; i++)
    // {
    //     if (strlen(arr[i].ism) > 5 && arr[i].ism[0]=='A' || arr[i].ism[0]=='a')
    //     {
    //         printf("ismi %s\nfamiliya %s\nyoshi %d\nstipendiya %d\n", arr[i].ism, arr[i].familiya, arr[i].age, arr[i].stip);
    //     }
    //     puts("");
    // }

    // struct teach brr[2] = {
    //     {.ism = "Akbar", .familiya = "Kasimov"},
    //     {.ism = "Alisher", .familiya = "Sattarov"}
    // };
    // char temp[20] = "";
    // strcpy(temp, brr[0].ism);
    // strcpy(brr[0].ism, brr[1].ism);
    // strcpy(brr[1].ism, temp);
    // for (int i = 0; i < 2; i++)
    // {
    //     printf("ism %s\nfamiliya %s\n\n", brr[i].ism, brr[i].familiya);
    // }
    


    // struct shop arr[4] = 
    // {
    //     {.ishson = 56, .nomi = "oziq-ovqat", .soliq = 500},
    //     {.ishson = 105, .nomi = "qurilish", .soliq = 600},
    //     {.ishson = 130, .nomi = "oziq-ovqat", .soliq = 930},
    //     {.ishson = 100, .nomi = "kiyimlar", .soliq = 530}
    // };
    // for (int i = 0; i < 4; i++)
    // {
    //     if(arr[i].ishson > 100 && !(strcmp(arr[i].nomi, "oziq-ovqat")))
    //     {
    //         arr[i].soliq *= 2;
    //     }
    //     printf("ishchilar soni -> %d\nmagazin nomi -> %s\nsoliq -> %d\n\n\n", arr[i].ishson, arr[i].nomi, arr[i].soliq);
    // }
    

    // int n;
    // scanf("%d", &n);
    // struct butun arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     puts("Ismingizni kiriting:");
    //     scanf(" %s", arr[i].ism);
    //     puts("Nechanchi kurssiz:");
    //     scanf("%d", &arr[i].kurs);
    //     puts("Stipendiyani kiriting");
    //     scanf("%d", &arr[i].stip);
    // }
    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if(arr[i].kurs==3) sum+=arr[i].stip;
    // }
    // printf("%d", sum);
    


    // int n;
    // scanf("%d", &n);
    // struct butun arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     puts("Ismingizni kiriting:");
    //     scanf(" %s", arr[i].ism);
    //     puts("Nechanchi kurssiz:");
    //     scanf("%d", &arr[i].kurs);
    //     puts("Stipendiyani kiriting");
    //     scanf("%d", &arr[i].stip);
    // }
    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if(strlen(arr[i].ism) < 5 && arr[i].stip==100)
    //     {
    //         printf("ismi -> %s\nkursi -> %d\n\n", arr[i].ism, arr[i].kurs);
    //     }
    // }





    // int n;
    // scanf("%d", &n);
    // struct meva arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     puts("Meva nomini kiriting:");
    //     scanf(" %s", arr[i].nomi);
    //     puts("Meva narxini kiriting:");
    //     scanf("%d", &arr[i].narxi);
    //     puts("Rangini kiriting");
    //     scanf(" %s", arr[i].rangi);
    //     puts("Mevalar sonini kiriting:");
    //     scanf("%d", &arr[i].soni);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if(!strcmp(arr[i].rangi, "qizil") && arr[i].narxi > 12000)
    //     {
    //         printf("Meva nomi -> %s\nMeva soni -> %d\n\n", arr[i].nomi, arr[i].soni);
    //     }
    // }



    // int n;
    // scanf("%d", &n);
    // struct meva arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     puts("Meva nomini kiriting:");
    //     scanf(" %s", arr[i].nomi);
    //     puts("Meva narxini kiriting:");
    //     scanf("%d", &arr[i].narxi);
    //     puts("Rangini kiriting");
    //     scanf(" %s", arr[i].rangi);
    //     puts("Mevalar sonini kiriting:");
    //     scanf("%d", &arr[i].soni);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if(!strcmp(arr[i].rangi, "qizil") && arr[i].narxi > 12000)
    //     {
    //         printf("Meva nomi -> %s\nMeva soni -> %d\n\n", arr[i].nomi, arr[i].soni);
    //     }
    // }



    int n;
    scanf("%d", &n);
    struct komp arr[n];
    for (int i = 0; i < n; i++)
    {
        puts("Modelni kiriting:");
        scanf(" %s", arr[i].modeli);
        puts("Video karta bor yoki yoqligini 1 yoki 0 bilan kiriting:");
        scanf("%d", &arr[i].lol.videok);
        puts("Protsessor bor yoki yoqligini 1 yoki 0 bilan kiriting:");
        scanf("%d", &arr[i].lol.protses);
        puts("Operativka bor yoki yoqligini 1 yoki 0 bilan kiriting:");
        scanf("%d", &arr[i].lol.oper);
        puts("Monitor bor yoki yoqligini 1 yoki 0 bilan kiriting:");
        scanf("%d", &arr[i].lol.monitor);
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i].lol.videok==1)
        {
            printf("Modeli -> %s\n\n", arr[i].modeli);
        }
    }

}