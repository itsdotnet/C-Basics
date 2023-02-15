#include <stdio.h>
int main(){
// birinchi masala shahmatda fil
// int qator1, ustun1;
//     int qator2, ustun2;

//     printf("Filni qayerda turganligini ko'rsating: ");
//     scanf("%d%d", &qator1, &ustun1);
//     printf("Filni qayerga yurg'azmoqchisiz: ");
//     scanf("%d%d", &qator2, &ustun2);
    

//     if((ustun2==ustun1+1 || ustun2==ustun1-1)&&(qator2==qator1+1 || qator2==qator1-1)){
//         puts("Yura oladi");
//     }else if((ustun2==ustun1+2 || ustun2==ustun1-2)&&(qator2==qator1+2 || qator2==qator1-2)){
//         printf("Yura oladi");
//     }else if((ustun2==ustun1+3 || ustun2==ustun1-3)&&(qator2==qator1+3 || qator2==qator1-3)){
//         printf("Yura oladi");
//     }else if((ustun2==ustun1+4 || ustun2==ustun1-4)&&(qator2==qator1+4 || qator2==qator1-4)){
//         printf("Yura oladi");
//     }else if((ustun2==ustun1+5 || ustun2==ustun1-5)&&(qator2==qator1+5 || qator2==qator1-5)){
//         printf("Yura oladi");
//     }else if((ustun2==ustun1+6 || ustun2==ustun1-6)&&(qator2==qator1+6 || qator2==qator1-6)){
//         printf("Yura oladi");
//     }else if((ustun2==ustun1+7 ||ustun2==ustun1-7)&&(qator2==qator1+7 || qator2==qator1-7)){
//         printf("Yura oladi");
    
//     }else{
//         puts("Yura olmaydi");
//     }



// //ikkinchi masala shaxmatda ot

// int qator,qatorr,ustun,ustunn;
// puts("Otning hozirgi o'rnini kiriting:");
// scanf("%d%d",&ustun,&qator);
// puts("O'zgartirmoqchi bo'lgan o'rningizni kiriting:");
// scanf("%d%d",&ustunn,&qatorr);
// if ((ustunn==ustun-1&&qatorr==qator-2)||(ustunn==ustun+1&&qatorr==qator+2))
// {
//     puts("Yura oladi");
// }else if((ustunn==ustun-2&&qatorr==qator-1)||(ustunn==ustun+2&&qatorr==qator+1)){
//     puts("Yura oladi");
// }else if((ustunn==ustun-2&&qatorr==qator+1)||(ustunn==ustun+2&&qatorr==qator+1)){
//     puts("Yura oladi");
// }else if((ustunn==ustun-2&&qatorr==qator+2)||(ustunn==ustun+2&&qatorr==qator+2)){
//     puts("Yura oladi");
// }else if((ustunn==ustun-1&&qatorr==qator-2)||(ustunn==ustun+1&&qatorr==qator-2)){
//     puts("Yura oladi");
// }else if((ustunn==ustun-1&&qatorr==qator+2)||(ustunn==ustun+1&&qatorr==qator+2)){
//     puts("Yura oladi");
// }else if((ustunn==ustun-2&&qatorr==qator+2)||(ustunn==ustun+2&&qatorr==qator+2)){
//     puts("Yura oladi");
// }
// else {
//     puts("Yura olmaydi");
// }



// //uchinchi masala
// int son, son1;
// printf("Birinchi sonni kiriting\n");
// scanf("%d", &son);
// printf("Ikkinchi sonni kiriting\n");
// scanf("%d", &son1);
// if ((son%2==0 && son1%2!=0) && (son%3==0 && son1%3==0))
// {
//     printf("True");
// }else if((son%2!=0 && son1%2==0) && (son%3==0 && son1%3==0)){
//     puts("True");
// }else{
//     puts("False");
// }


// //to'rtinchi masala
// int p,o,i,u,h=0;
// puts("Tortta son kiriting");
// scanf("%d%d%d%d",&p,&o,&i,&u);
// if (p%2==0){
//     printf("%d, ",p);
// }
// if (o%2==0){
//     printf("%d, ",o);
// }
// if (i%2==0){
//     printf("%d, ",i);
// }
// if (u%2==0){
//     printf("%d, ",u);
// }
// else{
//     printf("%d", 0);
// }

// //beshinchi masala
// int fan1,fan2,fan3,fan4,fan5,u;
// puts("5 ta fanni bahosini kiriting");
// scanf("%1i%1i%1i%1i%1i",&fan1,&fan2,&fan3,&fan4,&fan5);
// u=(fan1+fan2+fan3+fan4+fan5)/5;
// if(u>5){
//     puts("Xato kiritdingiz");
// }
// else if (u==5){
//     printf("A'lo");
// }else if (u==4){
//     printf("Yaxshi");
// }else if (u==3){
//     printf("Qoniqarli");
// }else {
//     printf("Qoniqarsiz");
// }



// //oltinchi masala
// int x,y,c;
// puts("10 va 99 oralig'idagi sonni kiriting");
// scanf("%2i",&x);
// y=x%10;
// c=x-y;
// if (c==10){
//     printf("O'n ");
// }else if(c==20){
//     printf("Yigirma ");
// }else if(c==30){
//     printf("O'ttiz ");
// }else if(c==40){
//     printf("Qirq ");
// }else if(c==50){
//     printf("Ellik ");
// }else if(c==60){
//     printf("Oltmish ");
// }else if(c==70){
//     printf("Yetmish ");
// }else if(c==80){
//     printf("Sakson ");
// }else if(c==90){
//     printf("To'qson ");
// }else {
//     printf("Siz 10 dan katta son kiritmadingiz!");
// }
// if (y==1){
//     printf("bir");
// }else if(y==2){
//     printf("ikki");
// }else if(y==3){
//     printf("uch");
// }else if(y==4){
//     printf("to'rt");
// }else if(y==5){
//     printf("besh");
// }else if(y==6){
//     printf("olti");
// }else if(y==7){
//     printf("yetti");
// }else if(y==8){
//     printf("sakkiz");
// }else if(y==9){
//     printf("to'qqiz");
// }else{
//     printf(" ");
// }




// //yettinchi masala

// int z,x,c,v,b;
// puts("Beshta son kiriting");
// scanf("%i%i%i%i%i",&z,&x,&c,&v,&b);
// if (z<x && z<c && z<v && z<b)
// {
//     printf("Eng kichigi %d", z);
// }
// else if(x<c && x<v && x<b){
//     printf("Eng kichigi %i\n",x);
// }else if(c<b && c<v){
//     printf("Eng kichigi %i\n",c);
// }else if(b<v){
//     printf("Eng kichigi %i\n", b);
// }else{
//     printf("Eng kichigi %i\n",v);
// }
// if (z>x && z>c && z>v && z>b)
// {
//     printf("Eng kattasi %d\n", z);
// }
// else if(x>c && x>v && x>b){
//     printf("Eng kattasi %i",x);
// }else if(c>b && c>v){
//     printf("Eng kattasi %i",c);
// }else if(b>v){
//     printf("Eng kattasi %i", b);
// }else{
//     printf("Eng kattasi %i",v);
// }











//vazifa bo'lmagan majburiy ishlar
//if1
// int c;
// puts("Sonni kiriting");
// scanf("%i",&c);
// if (c%2==0)
// {
//     printf("%i",c+1);
// }else{
//     printf("%i",c);
// }




//if2
// int p;
// puts("Sonni kiriting");
// scanf("%i",&p);
// if (p%2==0)
// {
//     printf("%i",p+1);
// }else{
//     printf("%i",p-2);
// }





//if3
// int c;
// puts("Sonni kiriting");
// scanf("%i",&c);
// if (c==0)
// {
//     printf("%i",c=10);
// }

// else if (c%2==0)
// {
//     printf("%i",c+1);
// }else{
//     printf("%i",c-2);
//}



// //if4
// int l,k,j,h;
// puts("Uchta son kiriting");
// scanf("%i%i%i",&l,&k,&j);
// if (l>0){
//     h=h+1;
// }if (k>0)
// {
//     h=h+1;
// }if (j>0){
//     h=h+1;
// }printf("%i ta musbat son bor.",h);




// //if5
// int l,k,j,h=0,g=0;
// puts("Uchta son kiriting");
// scanf("%i%i%i",&l,&k,&j);
// if (l>0){
//     h=h+1;
// }if (k>0)
// {
//     h=h+1;
// }if (j>0){
//     h=h+1;
// }if (l<0){
//     g=g+1;
// }if (k<0)
// {
//     g=g+1;
// }if (j<0){
//     g=g+1;
// }printf("%i ta musbat son bor.\n",h);
// printf("%i ta manfiy son bor.",g);


// //if6
// int a,b;
// printf("Sonlarni kiriting\n");
// scanf("%i%i",&a,&b);
// if(a<b){
//     printf("%i katta",b);
// }else{
//     printf("%i katta",a);
// }




// //if7
// int a,b;
// printf("Sonlarni kiriting\n");
// scanf("%i%i",&a,&b);
// if(a<b){
//     printf("Birinchi kiritgan soningiz kichik");
// }else{
//     printf("Ikkinchi kiritgan soningiz kichik");
// }



//if8
// int a,b;
// printf("Sonlarni kiriting\n");
// scanf("%i%i",&a,&b);
// if(a<b){
//     printf("%i\n%i",b,a);
// }else{
//     printf("%i \n%i",a,b);
// }



// //if9
// float a,b,c;
// printf("Sonlarni kiriting\n");
// scanf("%f%f",&a,&b);
// if(a<b){
//     printf("%.2f\n",b);
//     printf("%.2f",a);
// }else if(b<a){
//     c=a;
//     a=a+b-a;
//     b=c;
//     printf("%.2f\n",c);
//     printf("%.2f",a);
// }




// //if10
// int a,b;
// puts("Ikkita butun son kiriting");
// scanf("%i%i",&a,&b);
// if (a!=b){
//     a=a+b;
//     b=a;
// }else{
//     a=0;
//     b=a;
// }printf("%i",a);



// //if11
// int a,b;
// puts("Ikkita butun son kiriting");
// scanf("%i%i",&a,&b);
// if (a!=b){
//     if(a>b){
//         b=a;
//     }else{
//         a=b;
//     }
    
// }else{
//     a=0;
//     b=a;
// }printf("%i",a);




// //if12
// int z,x,c;
// puts("Uchta son kiriting");
// scanf("%i%i%i",&z,&x,&c);
// if(z<x && z<c){
//     printf("%i eng kichigi",z);
// }else if(x<c){
//     printf("%i eng kichigi",x);
// }else{
//     printf("%i eng kichigi",c);
// }




// //if13
// int m,n,b;
// puts("Uchta son kiriting");
// scanf("%d%d%d",&m,&n,&b);
// if(m<n && m>b){
//     printf("%i o'rtacha",m);
// }else if(n<m && n>b){
//     printf("%i o'rtacha",n);
// }else{
//     printf("%i o'rtacha",b);
// }



// //if14
// int z,x,c;
// puts("Uchta son kiriting");
// scanf("%i%i%i",&z,&x,&c);
// if(z<x && z<c){
//     printf("%i eng kichigi\n",z);
// }else if(x<c){
//     printf("%i eng kichigi\n",x);
// }else{
//     printf("%i eng kichigi\n",c);
// }
// if(z>x && z>c){
//     printf("%i eng kattasi",z);
// }else if(x>c){
//     printf("%i eng kattasi",x);
// }else{
//     printf("%i eng kattasi",c);
// }





// //if15
// int a,b,c;
// puts("Uchta son kiriting");
// scanf("%i%i%i",&a,&b,&c);
// if ((a+b)>(a+c)&&(a+b)>(b+c))
// {
//     printf("%i va %i ning yig'indisi eng katta",a,b);
// }else if((a+c)>(a+b)){
//     printf("%i va %i ning yig'indisi eng katta",a,c);
// }else{
//     printf("%i va %i ning yig'indisi eng katta",b,c);
// }




// //if16
// float g,f,d;
// puts("Uchta haqiqiy son kiriting");
// scanf("%e%e%e",&g,&f,&d);
// if (g<f && f<d)
// {
// g=g*2;
// f=f*2;
// d=d*2;
// }else{
// g=g-(g*2);
// f=f-(f*2);
// d=d-(d*2);

// }
// printf("%.2f\n%.2f\n%.2f",g,f,d);



// //if17
// float g,f,d;
// puts("Uchta haqiqiy son kiriting");
// scanf("%e%e%e",&g,&f,&d);
// if ((g<f && f<d)||(g>f && f>d))
// {
// g=g*2;
// f=f*2;
// d=d*2;
// }else{
// g=g-(g*2);
// f=f-(f*2);
// d=d-(d*2);

// }
// printf("%.2f\n%.2f\n%.2f",g,f,d);


// //if18
// int a,d,s;
// puts("Uchta son kiriting");
// scanf("%i%i%i",&a,&d,&s);
// if (a!=d && a!=s){
//     puts("Birinchi son");
// }else if(d!=a && d!=s){
//     puts("Ikkinchi son");
// }else{
//     puts("Uchinchi son");
// }


// //if19
// int a,d,s,f;
// puts("To'rta son kiriting");
// scanf("%i%i%i%i",&a,&d,&f,&s);
// if (a!=d && a!=s && a!=f){
//     puts("Birinchi son");
// }else if(d!=a && d!=s && d!=f){
//     puts("Ikkinchi son");
// }else if(f!=a && f!=s && f!=d){
//     puts("Uchinchi son");
// }else{
//     puts("To'rtinchi son");
// }

}