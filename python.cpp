#include<stdio.h>
#include<string.h>
float electricity_amt(int num){
 int electricity_bill;
 if(num<3){
  return (electricity_bill=100);
 }
 if(num>3){
  return (electricity_bill=120);
 }
}

int main()
{
   int a,qty,rate,total;
  char address,name,email,hotel_name;
int room_no,mobile_no,arrival_date,room_price,room_rating;
printf("* HOTEL MANAGEMENT SYSTEM*\n");
printf("=============================\n");
printf("###----customer details:\n");
printf("===========================\n");
printf("enter your name:\n");
scanf("%s",&name);
printf("enter your address:\n");
scanf("%s",&address);
printf("enter your room_no:\n");
scanf("%d",&room_no);
printf("enter your mobile_no:\n");
scanf("%d",&mobile_no);
printf("enter your arrival_date<dd \ nn \ yyy\n");
scanf("%d",&arrival_date);
printf("==========================\n");
printf("###HOTEL RECORD ###\n");
printf("==========================\n");  
printf("enter the hotel_name:\n");
scanf("%s",&hotel_name);
printf("enter room_price is:\n");
scanf("%d",&room_price);
printf("enter room_rating is:\n");
scanf("%d",&room_rating);
int num;
printf("enter the number of person staying in room:");
scanf("%d",&num);
if(num>3){
printf("double bedroom:");
}
else{
printf("single bedroom:");
}
printf("==================\n");
printf("BILL AMOUNT\n");
float electricity_bill,extra_charge,coffee_price,breakfast_price,TOTALAMOUNT;

printf("enter the extra_charging amount:\n");
scanf("%f",&extra_charge);
printf("enter the cofee_price:");
scanf("%f",&coffee_price);
printf("enter the breakfast_price:\n");
scanf("%f",&breakfast_price);
TOTALAMOUNT=electricity_amt(num)+extra_charge+coffee_price+breakfast_price;
printf("THE BILL AMOUNT IS:%f\n",TOTALAMOUNT);
printf("THANK YOU VISIT AGAIN\n");
printf("\nMENU CARD \nSelect your drink \n1.COFFEE \n2.TEA \n3.COLD COFFEE \n4.MILK SHAKE \n5.STALC\n");
 scanf("%d",&a);
 switch(a)
 {
  case 1:
    printf("\nYou have selected Coffee.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=5;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 2:
    printf("\nYou have selected Tea.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=10;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 3:
    printf("\nYou have selected Cold coffee.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=15;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 4:
    printf("\nYou have selected Milk shake.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=20;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 5:
    printf("\nYou have selected Stalc.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=15;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  default:
    printf("\nSorry Unavailable...%ds",a);
    break;
 }
return 0;
}
