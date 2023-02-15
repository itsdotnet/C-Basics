#include <stdio.h>
int main(){
//vazifa 
//1-masala
//int yuz,on,bir,c;
/*puts("Sonni kiriting");
scanf("%i",&c);
bir=c%100;
bir=bir%10;
on=c%100;
on=(on-bir)/10;
yuz=c%100;
yuz=c-yuz;
yuz=yuz/100;
switch (yuz)
{
case 1:
    puts("Bir yuz ");
    break;
case 2:
    puts("Ikki yuz ");
    break;
case 3:
    puts("Uch yuz ");
    break;
case 4:
    puts("To'rt yuz ");
    break;
case 5:
    puts("Besh yuz ");
    break;
case 6:
    puts("Olti yuz ");
    break;
case 7:
    puts("Yetti yuz ");
    break;
case 8:
    puts("Sakkiz yuz ");
    break;
case 9:
    puts("To'qqiz yuz ");
}
switch (on)
{
case 1:
    puts("o'n ");
    break;
case 2:
    puts("yigirma ");
    break;
case 3:
    puts("o'ttiz ");
    break;
case 4:
    puts("qirq ");
    break;
case 5:
    puts("ellik ");
    break;
case 6:
    puts("oltmish ");
    break;
case 7:
    puts("yetmish ");
    break;
case 8:
    puts("sakson ");
    break;
case 9:
    puts("to'qson ");
}
switch (bir)
{
case 1:
    puts("bir");
    break;
case 2:
    puts("ikki");
    break;
case 3:
    puts("uch");
    break;
case 4:
    puts("to'rt");
    break;
case 5:
    puts("besh");
    break;
case 6:
    puts("olti");
    break;
case 7:
    puts("yetti");
    break;
case 8:
    puts("sakkiz");
    break;
case 9:
    puts("to'qqiz");
}*/




//2-masala
// char l;
// puts("Harf kiriting");
// scanf("%c",&l);
// if ((l>96 && l<123)||(l>64&&l<91))
// {

// switch (l)
// {
// case 65 ... 90:
//     l=l+32;
//     break;
// case 97 ... 122:
//     l=l-32;


// }printf("%c",l);

// }


// //3-masala
// int oy,kun,f;
// puts("Kunni kiriting");
// scanf("%i",&kun);
// puts("Oyni kiriting");
// scanf("%i",&oy);
//     switch (oy)
//     {
//     case 1:
//         switch (kun)
//         {
//         case 1 ... 31:
//             printf("%i-yanvar ",kun);
        
//         break;
//         default:
//             puts("Bunday kun yo'q");
//         }
//         break;
//     case 2:
//         switch (kun)
//         {
//         case 1 ... 29:
//             printf("%i-fevral",kun);
//         break;
//         default:
//             puts("Bunday kun yo'q");
//         }
//         break;
//     case 3:
//         switch(kun){ 
//             case 1 ... 31:
//             printf("%i-mart",kun);
        
//         break;
//         default:
//             puts("Bunday kun yo'q");
//         }
//         break;
//     case 4:
//         switch(kun){
//             case 1 ... 30: 
//         printf("%i-aprel",kun);
        
//         break;
//         default:
//             puts("Bunday kun yo'q");
//         }
//      case 5:
//         switch(kun){ 
//             case 1 ... 31:
//             printf("%i-may",kun);
        
//         break;
//         default:
//             puts("Bunday kun yo'q");
//         }
//         break;
//     case 6:
//         switch(kun){
//             case 1 ... 30: 
//         printf("%i-iyun",kun);
        
//         break;
//         default:
//             puts("Bunday kun yo'q");
//         }
//         break;

//     case 7:
//         switch(kun){ 
//             case 1 ... 31:
//             printf("%i-iyul",kun);
        
//         break;
//         default:
//             puts("Bunday kun yo'q");
//         }
//         break;
//     case 8:
//         switch(kun){
//             case 1 ... 31: 
//         printf("%i-avgust",kun);
        
//         break;
//         default:
//             puts("Bunday kun yo'q");
//         }
//         break;
//     case 9:
//         switch(kun){ 
//             case 1 ... 30:
//             printf("%i-sentyabr",kun);
        
//         break;
//         default:
//             puts("Bunday kun yo'q");
//         }
//         break;
//     case 10:
//         switch(kun){
//             case 1 ... 31: 
//         printf("%i-oktyabr",kun);
        
//         break;
//         default:
//             puts("Bunday kun yo'q");
//         }
//         break;
//     case 11:
//         switch(kun){ 
//             case 1 ... 30:
//             printf("%i-noyabr",kun);
        
//         break;
//         default:
//             puts("Bunday kun yo'q");
//         }
//     case 12:
//         switch(kun){
//             case 1 ... 31: 
//         printf("%i-dekabr",kun);
        
//         break;
//         default:
//             puts("Bunday kun yo'q");
//         }
//         break;
//     default:
//         puts("Bunday oy yo'q");
//     }




//4-masala

// int n;
// char h;
// puts("Harfni kiriting");
// scanf("%c",&h);
// puts("Butun son kiriting");
// scanf("%i",&n);
// n=n%26;
// if (h>'`' && h<'{'){
//     h=h+n;
//         if (h+n>'{'){
//             h=(h+n)-26;
//         }printf("%c",h);
// }else if (h<'[' && h>'@')
// {
//     h=h+n;
//         if (h+n>'[')
//         {
//             h=(h+n)-28;
//         }printf("%c",h);
        
// }else
// {
//     printf("Bunday harf yo'q");
// }








// // 5-masala
// int soat,minut,sekund;
// puts("Soat, minut, sekundni kiriting");
// scanf("%i%i%i",&soat,&minut,&sekund);

// if (soat<19){
//     printf("%i %i %i",soat+5,minut,sekund);
// }else if (soat<24 && soat>19)
// {
//     soat=soat+5;
//     soat=soat-29;
//     printf("%i %i %i",soat+5,minut,sekund);
// }else if (soat<19)
// {
//     soat=soat+5;
//     printf("%i %i %i",soat+5,minut,sekund);
// }

// else{
//     puts("Bunday vaqt yo'q");
// }




//6-masala
// int soat,minut,sekund;
// puts("Soat, minut, sekundni kiriting");
// scanf("%i%i%i",&soat,&minut,&sekund);

// if (minut<55)
// {
//     minut=minut+5;
//     printf("%i %i %i",soat,minut,sekund);
// }else if (minut>54)
// {
//     minut=minut+5;
//     minut=minut-60;
//     soat=soat+1;
//         if (soat>23)
//         {
//             soat=soat-24;
//                 printf("0%i 0%i %i",soat,minut,sekund);
//         }
//     else{
//         printf("%i 0%i %i",soat,minut,sekund);
//     }
// }else{
//     puts("Bunday vaqt yo'q");
// }



//7-masala
int soat,minut,sekund;
puts("Soat, minut, sekundni kiriting");
scanf("%i%i%i",&soat,&minut,&sekund);

if (sekund>45){
    sekund=sekund-45;
    printf("%i %i %i",soat,minut,sekund);

}else if (sekund<45)
{
    sekund=sekund-45;
    sekund=sekund+60;
    minut=minut-1;
        printf("%i %i %i",soat,minut,sekund);//togri
        if (minut==0){
            soat=soat-1;
               minut=minut+59;
               printf("%i %i %i",soat,minut,sekund);
                if (soat==0)
                {
                  soat=23;
                   printf("%i %i %i",soat,minut,sekund);
                }
                
                        
            }
}

}