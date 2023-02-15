// #include <stdio.h>
// int main(){
//     switch -> tanlash operatori


//     int o;
//     puts("Oyni kiriting");
//     scanf("%i",&o);
//     switch (o)
//     {
//     case 1:
//         printf("Yanvar");
//         break;
//     case 2:
//         printf("Fevral");
//         break;
//     case 3:
//         printf("Mart");
//         break;
//     case 4:
//         printf("Aprel");
//         break;
//     case 5:
//         printf("May");
//         break;
//     case 6:
//         printf("Iyun");
//         break;
//     case 7:
//         printf("Iyul");
//         break;
//     case 8:
//         printf("Avgust");
//         break;
//     case 9:
//         printf("Sentyabr");
//         break;
//     case 10:
//         printf("Oktyabr");
//         break;
//     case 11:
//         printf("Noyabr");
//         break;
//     case 12:
//         printf("Dekabr");
//         break;
//     }




/*    int k;
    puts("Oyni kiriting");
    scanf("%i",&k);
    switch (k)
    {
    case 1:
        printf("31 kundan iborat");
        break;
    case 2:
        printf("28 kundan iborat");
        break;
    case 3:
        printf("31 kundan iborat");
        break;
    case 4:
        printf("30 kundan iborat");
        break;
    case 5:
        printf("31 kundan iborat");
        break;
    case 6:
        printf("30 kundan iborat");
        break;
    case 7:
        printf("30 kundan iborat");
        break;
    case 8:
        printf("31 kundan iborat");
        break;
    case 9:
        printf("30 kundan iborat");
        break;
    case 10:
        printf("31 kundan iborat");
        break;
    case 11:
        printf("30 kundan iborat");
        break;
    case 12:
        printf("31 kundan iborat");
        break;
    }*/
/*
    int baho;
    puts("Bahoni kiriting");
    scanf("%i",&baho);
    switch (baho)
    {
    case 1:
    case 2:
    case 3:
        printf("Qoniqarsiz");
        break;
    case 4:
    case 5:
    case 6:
        printf("Qoniqarli");
        break;
    case 7:
    case 8:
        printf("Yaxshi");
        break;
    case 9:
    case 10:
        printf("A'lo")
    }*/


    // int f;
    // puts("Yoshni kiriting");
    // scanf("%i",&f);
    // switch (f)
    // {
    // case 1 ... 5:
    //     printf("Tekin");
    //     break;
    // case 6 ... 17:
    //     printf("10 ming so'm");
    //     break;
    // case 18 ... 25:
    //     printf("15 ming so'm");
    //     break;
    // case 26 ... 60:
    //     printf("25 ming so'm");
    //     break;
    // case 60 ... 80:
    //     printf("Tekin");
    // }


// int e;
// puts("Sonni kiriting");
// scanf("%i",&e);
// switch (e)
// {
// case 1 ... 9:
//     printf("Bir honali");
//     break;
// case 10 ... 99:
//     printf("Ikki xonali");
//     break;
// case 100 ... 999:
//     printf("Uch xonali");
//     break;
// case 1000 ... 9999:
//     printf("To'rt xonali");
//     break;
// case 10000 ... 99999:
//     printf("Besh xonali");
// default:
//     printf("5 xonagacha son kiritish mumkin");
// }




// char t;
// puts("Element kiriting");
// scanf("%c",&t);
// switch(t){
//     case 65:
//     case 69:
//     case 73:
//     case 79:
//     case 85:
//     case 97:
//     case 101:
//     case 105:
//     case 111:
//     case 117:

//         printf("Unli harf");
//         break;
//     case 66 ... 68: case 70 ... 72: case 74 ... 78: case 80 ... 84: case 86 ... 90:
//     case 98 ... 100: case 102 ... 104: case 106 ... 110: case 112 ... 116: case 118 ... 122:
//     printf("Undosh harf");
//     break;
// default:
//     printf("Harf emas");

// }







// char t;
// puts("element kiriting");
// scanf(" %c",&t);
// switch(t)
// {
// case 65 ... 132:
// case 97 ... 122:
//     printf("Harf");
//     break;
// case 31 ... 64:
// case 91 ... 96:
// case 123 ... 127:
//     printf("belgi");
// default:
//     printf("raqam");
// }



// int o;
// scanf("%i", &o);
// switch (o%2==0)
// {
// case 1:
//     o=o*o;
//     break;
// default:
//     o=o*o*o;
// }printf("%i",o);




// int p;
// scanf("%i", &p);
// switch (p>0){
//     case 0:
//         switch (p==0)
//         {
//         case 1:
//             printf("Musbat ham manfiy ham emas");
//             break;
        
//         default:
//         printf("Manfiy");
//         }
//     break;
//     printf("Manfiy");
// default:
//     printf("Musbat");

// }


// int a,b,l;
// char c;
// puts("Birinchi sonni kiriting");
// scanf("%i",&a);
// puts("Ishorani kiriting");
// scanf("%i",&c);
// puts("Ikkinchi sonni kiriting");
// scanf("%i",&b);
// switch (c)
// {
// case '+':
//     l=a+b;
//     printf("%i",l);
//     break;
// case '-':
//     l=a-b;
//     printf("%i",l);
//     break;
// case '*':
//     l=a*b;
//     printf("%i",l);
//     break;
// case '/':
//     switch (c==0)
//     {
//     case 1:
//         printf("Sonni 0 ga bo'lib bo'lmaydi");
//         break;
    
//     default:
//         l=a/b;
//         printf("%i",l);
//         break;
//     }
//     }




// int a;//hafta kunini dam olish yoki ish ekanligini aytadigan dastur
// puts("Hafta kunini kiriting");
// scanf("%i",&a);
// switch (a)
// {
// case 1 ... 5
//     printf("Ish kuni");
//     break;
// case 6:
// case 7:
//     printf("Dam olish");
//     break;
// default:
//     printf("Bunday kun yo'q");
// }


// int o;//oy kiritilganida qaysi faslga tegishli ekanini aytadigan dastur
// puts("Oyni kiriting");
// scanf("%i",&o);
// switch (o)
// {
// case 12:
// case 1:
// case 2:
//     printf("Qish");
//     break;
// case 3 ... 5:
//     printf("Bahor");
//     break;
// case 6 ... 8:
//     printf("Yoz");
//     break;
// case 9 ... 11:
//     printf("Kuz");
//     break;
// default:
//     printf("Bunday oy yo'q");
// }



// int r,d;//ikkita sonni kattasini aniqlovchi daastur
// puts("Sonlarni kiriting");
// scanf("%i%i",&r,&d);
// switch (r>d)
// {
// case 1:
//     printf("%i katta",r)
//     break;

// default:
//     printf("%i katta", d);
// }




// int oy,ku;
// puts("Kunni kiriting");
// scanf("%i",&ku);
// puts("Oyni kiriting");
// scanf("%i",&oy);
// printf("%i-",ku);
    // switch (oy)
    // {
    // case 1:
    //     printf("Yanvar");
    //     break;
    // case 2:
    //     printf("Fevral");
    //     break;
    // case 3:
    //     printf("Mart");
    //     break;
    // case 4:
    //     printf("Aprel");
    //     break;
    // case 5:
    //     printf("May");
    //     break;
    // case 6:
    //     printf("Iyun");
    //     break;
    // case 7:
    //     printf("Iyul");
    //     break;
    // case 8:
    //     printf("Avgust");
    //     break;
    // case 9:
    //     printf("Sentyabr");
    //     break;
    // case 10:
    //     printf("Oktyabr");
    //     break;
    // case 11:
    //     printf("Noyabr");
    //     break;
    // case 12:
    //     printf("Dekabr");
    //     break;
    // }


    // int k;
    // scanf("%i",&k);
    // printf("")
    // switch (k)
    // {
    // case 1:
    //     printf("Dushanba");
    //     break;
    // case 2:
    //     printf("Seshanba");
    //     break;
    // case 3:
    //     printf("Chorshanba");
    //     break;
    // case 4:
    //     printf("Payshanba");
    //     break;
    // case 5:
    //     printf("Juma");
    //     break;
    // case 6:
    //     printf("Shanba");
    //     break;
    // case 7:
    //     printf("Yakshanba");
    //     break;
    
    // default:
    //     puts("Bunday kun yo'q");
    // }


    // int l;
    // puts("Bahoni kiriting");
    // scanf("%i",&l);
    // switch (l)
    // {
    // case 1:
    //     puts("Yomon");
    //     break;
    // case 2:
    //     puts("Qoniqarsiz");
    //     break;
    // case 3:
    //     puts("Qoniqarli");
    //     break;
    // case 4:
    //     puts("Yaxshi");
    //     break;
    // case 5:
    //     puts("A'lo");
    //     break;
    // default:
    //     puts("Faqat 1 dan 5 gacha baholarni kiriting mumkin");
    // }



    // int o;
    // puts("Oyni kiriting");
    // scanf("%i",&o);
    // switch (o)
    // {
    // case 12:
    // case 1 ... 2:
    //     puts("Qish");
    //     break;
    // case 3 ... 5:
    //     puts("Bahor");
    //     break;
    // case 6 ... 8:
    //     puts("Yoz");
    //     break;
    // case 9 ... 11:
    //     puts("Kuz");
    //     break;
    // default:
    //     puts("Bunday oy mavjud emas");
    // }



    // int m,n;
    // char b;
    // puts("Birinchi sonni kiriting");
    // scanf("%i", &m);
    // puts("Ishorani kiriting");
    // scanf("%c", &b);
    // puts("Ikkinchi sonni kiriting");
    // scanf("%i", &n);
    // switch (b)
    // {
    // case 43:
    //     m=m+n;
    //     break;
    // case 
    // default:
    //     break;
    // }


//  int is,ta,ba1,ba2,ba3;
//  puts("Tartib raqamini kiriting");
//  scanf("%i",&ta);
//  puts("Ismini kiriting");
//  scanf("%i",&is);
//  puts("Birinchi bahosini kiriting");
//  scanf("%i",&ba1);
//  puts("Ikkinchi bahosini kiriting");
//  scanf("%i",&ba2);
//  puts("Uchinchi bahosini kiriting");
//  scanf("%i",&ba3);
//  printf("%i-raqamli talaba,%i ,umumiy %i ball to'pladi",ta,is,(ba1+ba2+ba3)/3);













}