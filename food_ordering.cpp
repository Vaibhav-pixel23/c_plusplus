#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
char name[30],roll1[]="chicken fazita",roll2[]="chicken bar BQ",roll3[]="peri peri";
char sand1[]="Club sandwich",sand2[]="chicken crisy sandwich",sand3[]="Extreme Veg";
char bir1[]="Chicken Biryani",bir2[]="Prawn Biryani",bir3[]="Beef Biryani";
char bur1[]="Cheese Burger",bur2[]="Turkey Burger",bur3[]="Cheese Burger";
char gotostart;
int choice,pchoice,pchoice1,quantity;
beginning:
system("CLS");
cout<<"\t\t\t---------------JOEL'S ELLIE FAST FOOD -----------------\n\n";
cout<<"Please Enter Your Name:";
cin.getline(name,20);
cout<<"Hello "<<name<<"\n\nWhat Would You Like To Order?\n\n";
cout<<"\t\t\t\t------------MENU--------------\n\n";
cout<<"1.Burger\n";
cout<<"2.Biryani\n";
cout<<"3.Sandwich\n";
cout<<"4.Rolls\n";


cout<<"Please enter your choice:";
cin>>choice;
if(choice==1)
{
    cout<<"\n1."<<bur1<<"\n";
    cout<<"\n2."<<bur2<<"\n";
    cout<<"\n3."<<bur3<<"\n";
    
    cout<<"\nPlease Enter Which Flavour Would You Like To Have?";
    cin>>pchoice;
    if(pchoice>=1 && pchoice<=4) 
    {
       cout<<"\n1.small Rs.200\n"<<"2.Regular Rs.500\n"<<"3.Large Rs.700\n";
       cout<<"\nChoose size please:";
       cin>>pchoice1;
       if (pchoice1>=1 && pchoice1<=3)
       cout<<"\nPlease Enter Quantity:";
       cin>>quantity;
       switch(pchoice1)
       {
       case 1: choice=200*quantity;
       break;
       case 2: choice=500*quantity;
       break;
       case 3: choice=700*quantity;
       break;
       
       }
       system("CLS");
       switch (pchoice1)
       {

       case 1:
       cout<<"\t\t\t----------Your Order------------\n";
       cout<<""<<quantity<<" "<<bur1;
       cout<<"\nYour Total Bill is"<<choice<<"\nYour order will be delivered in 40 minutes";
       cout<<"\n\nThank You For Ordering From JOEL'S ELLIE FAST FOOD\n ";
       break;
       case 2:
       cout<<"\t\t\t----------Your Order------------\n";
       cout<<""<<quantity<<" "<<bur2;
       cout<<"\nYour Total Bill is"<<choice<<"\nYour order will be delivered in 40 minutes";
       cout<<"\n\nThank You For Ordering From JOEL'S ELLIE FAST FOOD\n ";
       break;
       case 3:
       cout<<"\t\t\t----------Your Order------------\n";
       cout<<""<<quantity<<" "<<bur3;
       cout<<"\nYour Total Bill is"<<choice<<"\nYour order will be delivered in 40 minutes";
       cout<<"\n\nThank You For Ordering From JOEL'S ELLIE FAST FOOD\n ";
    break;
       
       }
       
       cout<<"would you like to order anything else? Y / N:";
       cin>>gotostart;
       if(gotostart=='Y' || gotostart=='y')
       {

        goto beginning;
       }


       }


    }
    else if(choice==2)
    {
        cout<<"\n1."<<bir1<<"Rs 180"<<"\n";
        cout<<"\n2."<<bir2<<"Rs 160"<<"\n";
        cout<<"\n3."<<bir3<<"Rs 140"<<"\n";
        cout<<"\nPlease enter which Birayani you would like to have?:";
        cin>>pchoice1;
       if(pchoice1>=1 && pchoice1<=3)
       {
           cout<<"\nPlease Enter Quantity:";
           cin>>quantity;
           switch(pchoice1)
        {
        case 1: choice=180*quantity;
        break;
        case 2: choice=160*quantity;
        break;
        case 3: choice=140*quantity;
        break;
       }
       system("CLS");
       switch (pchoice1)
       {

       case 1:
       cout<<"\t\t\t----------Your Order------------\n";
       cout<<""<<quantity<<" "<<bir1;
       cout<<"\nYour Total Bill is"<<choice<<"\nYour order will be delivered in 40 minutes";
       cout<<"\n\nThank You For Ordering From JOEL'S ELLIE FAST FOOD\n ";
       break;
       case 2:
       cout<<"\t\t\t----------Your Order------------\n";
       cout<<""<<quantity<<" "<<bir2;
       cout<<"\nYour Total Bill is"<<choice<<"\nYour order will be delivered in 40 minutes";
       cout<<"\n\nThank You For Ordering From JOEL'S ELLIE FAST FOOD\n ";
       break;
       case 3:
       cout<<"\t\t\t----------Your Order------------\n";
       cout<<""<<quantity<<" "<<bir3;
       cout<<"\nYour Total Bill is"<<choice<<"\nYour order will be delivered in 40 minutes";
       cout<<"\n\nThank You For Ordering From JOEL'S ELLIE FAST FOOD\n ";
    break;
       }
       cout<<"\nWould You Like To Order Anything Else? Y / N?:";
       cin>>gotostart;
       if(gotostart=='Y' || gotostart=='y')
       {

        goto beginning;
       }
       

         
       }
    }
    
    else if(choice==3){
       
    cout<<"\n1."<<sand1<<"Rs 240"<<"\n";
    cout<<"\n2."<<sand2<<"Rs 160"<<"\n";
    cout<<"\n3."<<sand3<<"Rs 100"<<"\n";
 
     cout<<"\nPlease enter which buger you would like to have?:";
        cin>>pchoice1;
       if(pchoice1>=1 && pchoice1<=3)
       {
           cout<<"\nPlease Enter Quantity:";
           cin>>quantity;
           switch(pchoice1)
        {
        case 1: choice=240*quantity;
        break;
        case 2: choice=160*quantity;
        break;
        case 3: choice=100*quantity;
        break;
       }
       system("CLS");
       switch (pchoice1)
       {

       case 1:
       cout<<"\t\t\t----------Your Order------------\n";
       cout<<""<<quantity<<" "<<sand1;
       cout<<"\nYour Total Bill is"<<choice<<"\nYour order will be delivered in 40 minutes";
       cout<<"\n\nThank You For Ordering From JOEL'S ELLIE FAST FOOD\n ";
       break;
       case 2:
       cout<<"\t\t\t----------Your Order------------\n";
       cout<<""<<quantity<<" "<<sand2;
       cout<<"\nYour Total Bill is"<<choice<<"\nYour order will be delivered in 40 minutes";
       cout<<"\n\nThank You For Ordering From JOEL'S ELLIE FAST FOOD\n ";
       break;
       case 3:
       cout<<"\t\t\t----------Your Order------------\n";
       cout<<""<<quantity<<" "<<sand3;
       cout<<"\nYour Total Bill is"<<choice<<"\nYour order will be delivered in 40 minutes";
       cout<<"\n\nThank You For Ordering From JOEL'S ELLIE FAST FOOD\n ";
    break;
       } 
       cout<<"\nWould You Like To Order Anything Else? Y / N?:";
       cin>>gotostart;
       if(gotostart=='Y' || gotostart=='y')
       {

    goto beginning;
       }
       }
       else if(choice==4){
       
    cout<<"\n1."<<roll1<<"Rs 150"<<"\n";
    cout<<"\n2."<<roll2<<"Rs 100"<<"\n";
    cout<<"\n3."<<roll3<<"Rs 120"<<"\n";
    
     cout<<"\nPlease enter which buger you would like to have?:";
        cin>>pchoice1;
       if(pchoice1>=1 && pchoice1<=3)
       {
           cout<<"\nPlease Enter Quantity:";
           cin>>quantity;
           switch(pchoice1)
        {
        case 1: choice=150*quantity;
        break;
        case 2: choice=100*quantity;
        break;
        case 3: choice=120*quantity;
        break;
       }
       system("CLS");
       switch (pchoice1)
       {

       case 1:
       cout<<"\t\t\t----------Your Order------------\n";
       cout<<""<<quantity<<" "<<roll1;
       cout<<"\nYour Total Bill is"<<choice<<"\nYour order will be delivered in 40 minutes";
       cout<<"\n\nThank You For Ordering From JOEL'S ELLIE FAST FOOD\n ";
       break;
       case 2:
       cout<<"\t\t\t----------Your Order------------\n";
       cout<<""<<quantity<<" "<<roll2;
       cout<<"\nYour Total Bill is"<<choice<<"\nYour order will be delivered in 40 minutes";
       cout<<"\n\nThank You For Ordering From JOEL'S ELLIE FAST FOOD\n ";
       break;
       case 3:
       cout<<"\t\t\t----------Your Order------------\n";
       cout<<""<<quantity<<" "<<roll3;
       cout<<"\nYour Total Bill is"<<choice<<"\nYour order will be delivered in 40 minutes";
       cout<<"\n\nThank You For Ordering From JOEL'S ELLIE FAST FOOD\n ";
    break;
       } 
       cout<<"\nWould You Like To Order Anything Else? Y / N?:";
       cin>>gotostart;
       if(gotostart=='Y' || gotostart=='y')
       {

    goto beginning;
       }


    
}
       }
     return 0;}   
    }


