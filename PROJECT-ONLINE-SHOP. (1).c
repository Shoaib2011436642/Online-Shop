#include<stdio.h>
#include<string.h>
typedef struct info{
    char name[50],add[100];
    int Phone_no;
}st;
st details(){
    st n;
    printf("\n\n\tOrder done!\n");
    printf("\nGive your information down below: \n");
    fflush(stdin);
    printf("Name:");
    gets(n.name);
    printf("Address:");
    gets(n.add);
    printf("Phone:");
    scanf("%d",&n.Phone_no);

    return n;

}

int main ()
{
    char z[100] = "ZazaBaba.com";
    printf("\t\t\t\t\t  %s", z);
    printf("\n\n");
    char a[100] = "Welcome to Zaza Online Shop";
    printf("\t\t\t\t  %s", a);
    printf("\n");




    st p;
    //int n1,n2,n3,n4,n5,n6,n7,sum=0,i=0,itm=0,pdt=0;
    int n[20],sum=0,i=0,itm=0,pdt=0;
    char ch;
    printf("\n\t\t\t1-Main menu\t\t\t\t2-Exit\n\n Press-1 for Menu or 2 for Exit: ");
    scanf("%d",&n[1]);
    if(n[1]==2){
        goto exit;
    }


    //Main menu




    else if(n[1]==1){
            main:

            printf("main manu:\n 1.Electronics\t 2.Foods\t 3.Stationary\t 4.Sports Kit\t 5.Garments\t 6.Cosmetics\n\n *If you don't find your desired category, you may leave pressing-(0)*\n");
            printf("\nselect product category(by serial no.):");
            scanf("%d",&n[2]);
            if(n[2]==0){
                goto exit;
            }

            previous_menu1:
            //First menu : Electronics
            if(n[2]==1){

                          FILE *p;

                          p=fopen("ELECTRONICS.txt","r");



                          if(p==NULL){
                          printf("no file found");
                          }

                          else{
                            printf("\n\nElectronics:\n\t");
                          while(!feof(p)){
                            ch=fgetc(p);
                            printf("%c",ch);
                          }
                          fclose(p);


                printf("\n\n");
                printf("*If you don't find your desired item, you may leave pressing-(0) or go to Main-menu pressing-(8) *\n");
                printf("\nselect product(by serial no.):");
                scanf("%d",&n[3]);
                if(n[3]==0){
                        if(itm>0){

                            goto exit1;
                        }
                        else{
                            goto exit;
                        }
                }
                if(n[3]==8){
                    goto main;
                }


				//submenu of first menu

				//First option : Phone
                if(n[3]==1){
                        printf("\nPhone-(8,000 tk)\n quantity:"); //change
                        scanf("%d",&n[4]);
                        itm++;
                        pdt+=n[4];
                        sum+=n[4]*8000; // change
                        //printf("sum:%d",sum);
                        printf("\nDo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                        printf("\nChoose your option(by serial no.):");
                        scanf("%d",&n[7]);
                         printf("\n\n");


                        if(n[7]==1){
                            goto main;
                        }
                        if(n[7]==2){
                            goto previous_menu1 ;
                        }
                        if(n[7]==3){
                            goto exit1;
                        }

                    }

                //Second option : Camera
                if(n[3]==2){
                        printf("\n Camera-(27,000 tk)\n quantity:"); //change
                        scanf("%d",&n[4]);
                        itm++;
                        sum+=n[4]*27000;
                        pdt+=n[4]; //change
                        //printf("sum:%d",sum);

                         printf("\nDo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                         printf("\nChoose your option(by serial no.):");
                        scanf("%d",&n[7]);
                         printf("\n\n");
                        //Go to
                        if(n[7]==1){
                            goto main;
                        }
                        if(n[7]==2){
                            goto previous_menu1 ;
                        }
                        if(n[7]==3){
                            goto exit1;
                        }

                    }

                //Third option : Laptop
                if(n[3]==3){
                        printf("\nLaptop-(70,000 tk)\n quantity:"); //change
                        scanf("%d",&n[4]);
                        itm++;
                        sum+=n[4]*70000;
                        pdt+=n[4]; //change
                        //printf("sum:%d",sum);
                        printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                        printf("\nChoose your option(by serial no.):");
                        scanf("%d",&n[7]);
                         printf("\n\n");

                        //Go to
                        if(n[7]==1){
                            goto main;
                        }
                        if(n[7]==2){
                            goto previous_menu1 ;
                        }
                        if(n[7]==3){
                            goto exit1;
                        }

                    }
                //Fourth option : Television
                if(n[3]==4){
                        printf("\nTV-(40,000 tk)\n quantity:"); //change
                        scanf("%d",&n[4]);
                        itm++;
                        sum+=n[4]*40000;
                        pdt+=n[4];  //change
                        //printf("sum:%d",sum);
                        printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                        printf("\nChoose your option(by serial no.):");
                        scanf("%d",&n[7]);
                         printf("\n\n");

                        //Go to
                        if(n[7]==1){
                            goto main;
                        }
                        if(n[7]==2){
                            goto previous_menu1 ;
                        }
                        if(n[7]==3){
                            goto exit1;
                        }

                    }
                //Fifth option : Monitor
                if(n[3]==5){
                        printf("\nMonitor-(10,000 tk)\n quantity:"); //change
                        scanf("%d",&n[4]);
                        itm++;
                        sum+=n[4]*10000;
                        pdt+=n[4];  //change
                        //printf("sum:%d",sum);
                        printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                        printf("\nChoose your option(by serial no.):");
                        scanf("%d",&n[7]);
                         printf("\n\n");

                        //Go to
                        if(n[7]==1){
                            goto main;
                        }
                        if(n[7]==2){
                            goto previous_menu1 ;
                        }
                        if(n[7]==3){
                            goto exit1;
                        }

                    }
                }
            }
    	//Second menu : Foods
                previous_menu2:
                if(n[2]==2){
                              FILE *p;

                              p=fopen("FOOD.txt","r");



                              if(p==NULL){
                                printf("no file found");
                              }

                              else{
                                    printf("\n\nFoods:\n\t");

                                while(!feof(p)){
                                    ch=fgetc(p);
                                    printf("%c",ch);
                                }
                                fclose(p);

                 printf("\n\n");
                 printf("*If you don't find your desired item, you may leave pressing-(0) or go to Main-menu pressing-(8) *\n");
                 printf("\nselect product(by serial no.):");
                 scanf("%d",&n[3]);
                 if(n[3]==0){
                        if(itm>0){

                            goto exit1;
                        }
                        else{
                            goto exit;
                        }
                }
                if(n[3]==8){
                    goto main;
                }

				//submenu of second menu

				//First option : Burger
                if(n[3]==1){
                        printf("\n Burger-(120 tk)\n quantity:"); //change
                        scanf("%d",&n[4]);
                        itm++;
                        sum+=n[4]*120;
                        pdt+=n[4]; // change
                        //printf("sum:%d",sum);
                        printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                        printf("\nChoose your option(by serial no.):");
                        scanf("%d",&n[7]);

                         printf("\n\n");
                        if(n[7]==1){
                            goto main;
                        }
                        if(n[7]==2){
                            goto previous_menu2;
                        }
                        if(n[7]==3){
                            goto exit1;
                        }

                    }

                //Second option : Pizza
                if(n[3]==2){
                        printf("\n Pizza-(480 tk)\n quantity:"); //change
                        scanf("%d",&n[4]);
                        sum+=n[4]*480;
                        itm++;
                        pdt+=n[4]; //change
                        //printf("sum:%d",sum);

                         printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                         printf("\nChoose your option(by serial no.):");
                        scanf("%d",&n[7]);

                        if(n[7]==1){
                            goto main;
                        }
                        if(n[7]==2){
                            goto previous_menu2 ;
                        }
                        if(n[7]==3){
                            goto exit1;
                        }

                    }

                //Third option : Noodles
                if(n[3]==3){
                        printf("\n Noodles-(70 tk)\n quantity:"); //change
                        scanf("%d",&n[4]);
                        sum+=n[4]*70;
                        itm++;
                        pdt+=n[4]; //change
                        //printf("sum:%d",sum);
                        printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                        printf("\nChoose your option(by serial no.):");
                        scanf("%d",&n[7]);

                         printf("\n\n");
                        if(n[7]==1){
                            goto main;
                        }
                        if(n[7]==2){
                            goto previous_menu2;
                        }
                        if(n[7]==3){
                            goto exit1;
                        }

                    }
                //Fourth option : Shwarma
                if(n[3]==4){
                        printf("\n Shawarma-(130 tk)\n quantity:"); //change
                        scanf("%d",&n[4]);
                        sum+=n[4]*130;
                        itm++;
                        pdt+=n[4];  //change
                        //printf("sum:%d",sum);
                        printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                        printf("\nChoose your option(by serial no.):");
                        scanf("%d",&n[7]);
                         printf("\n\n");

                        //Go to
                        if(n[7]==1){
                            goto main;
                        }
                        if(n[7]==2){
                            goto previous_menu2;
                        }
                        if(n[7]==3){
                            goto exit1;
                        }

                    }
                //Fifth option : Chicken Fried
                if(n[3]==5){
                        printf("\n Fried Chicken-(250-tk)\n quantity:"); //change
                        scanf("%d",&n[4]);
                        sum+=n[4]*250;
                        itm++;
                        pdt+=n[4];
                         //change
                        //printf("sum:%d",sum);
                        printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                        printf("\nChoose your option(by serial no.):");
                        scanf("%d",&n[7]);

                         printf("\n\n");
                        if(n[7]==1){
                            goto main;
                        }
                        if(n[7]==2){
                            goto previous_menu2;
                        }
                        if(n[7]==3){
                            goto exit1;
                        }

                    }
                }
            }
    	//Third menu : Stationary
                previous_menu3:
                if(n[2]==3){
                              FILE *p;

                              p=fopen("STATIONARY.txt","r");



                              if(p==NULL){
                                printf("no file found");
                              }

                              else{
                                    printf("\n\nStationary:\n\t");
                                while(!feof(p)){
                                    ch=fgetc(p);
                                    printf("%c",ch);
                                }
                                fclose(p);



          //end of usage of file
                 printf("\n\n");
                 printf("*If you don't find your desired item, you may leave pressing-(0) or go to Main-menu pressing-(8) *\n");
                 printf("\nselect product(by serial no.):");
                 scanf("%d",&n[3]);
                 if(n[3]==0){
                        if(itm>0){

                            goto exit1;
                        }
                        else{
                            goto exit;
                        }
                }
                if(n[3]==8){
                    goto main;
                }

				//submenu of third menu

				//First option : Pencil
                if(n[3]==1){
                        printf("\n Pencil-(10 tk)\n quantity:"); //change
                        scanf("%d",&n[4]);
                        itm++;
                        sum+=n[4]*10;
                        pdt+=n[4]; // change
                        //printf("sum:%d",sum);
                        printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                        printf("\nChoose your option(by serial no.):");
                        scanf("%d",&n[7]);
                         printf("\n\n");

                        //Go to
                        if(n[7]==1){
                            goto main;
                        }
                        if(n[7]==2){
                            goto previous_menu3;
                        }
                        if(n[7]==3){
                            goto exit1;
                        }

                    }

                //Second option : Eraser
                if(n[3]==2){
                        printf("\n Eraser-(20 tk)\n quantity:"); //change
                        scanf("%d",&n[4]);
                        sum+=n[4]*20;
                        itm++;
                        pdt+=n[4]; //change
                        //printf("sum:%d",sum);

                        printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                        printf("\nChoose your option(by serial no.):");
                        scanf("%d",&n[7]);
                         printf("\n\n");
                        //Go to
                        if(n[7]==1){
                            goto main;
                        }
                        if(n[7]==2){
                            goto previous_menu3;
                        }
                        if(n[7]==3){
                            goto exit1;
                        }

                    }

                //Third option : Sharpner
                if(n[3]==3){
                        printf("\n Sharpner-(10 tk)\n quantity:"); //change
                        scanf("%d",&n[4]);
                        sum+=n[4]*10;
                        itm++;
                        pdt+=n[4]; //change
                        //printf("sum:%d",sum);
                        printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                        printf("\nChoose your option(by serial no.):");
                        scanf("%d",&n[7]);
                         printf("\n\n");

                        //Go to
                        if(n[7]==1){
                            goto main;
                        }
                        if(n[7]==2){
                            goto previous_menu3;
                        }
                        if(n[7]==3){
                            goto exit1;
                        }

                    }
                //Fourth option : Stapler
                if(n[3]==4){
                        printf("\n Stapler-(50 tk)\n quantity:"); //change
                        scanf("%d",&n[4]);
                        sum+=n[4]*50;
                        itm++;
                        pdt+=n[4];  //change
                        //printf("sum:%d",sum);
                        printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                        printf("\nChoose your option(by serial no.):");
                        scanf("%d",&n[7]);

                         printf("\n\n");
                        if(n[7]==1){
                            goto main;
                        }
                        if(n[7]==2){
                            goto previous_menu3;
                        }
                        if(n[7]==3){
                            goto exit1;
                        }

                    }
                //Fifth option : Pen
                if(n[3]==5){
                        printf("\n Pen (5 tk)\n quantity:"); //change
                        scanf("%d",&n[4]);
                        sum+=n[4]*5;
                        itm++;
                        pdt+=n[4]; //change
                        //printf("sum:%d",sum);
                        printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                        printf("\nChoose your option(by serial no.):");
                        scanf("%d",&n[7]);

                         printf("\n\n");
                        if(n[7]==1){
                            goto main;
                        }
                        if(n[7]==2){
                            goto previous_menu3;
                        }
                        if(n[7]==3){
                            goto exit1;
                        }

                    }
                }
            }
    	//Fourth menu : Sports
                previous_menu4:
                if(n[2]==4){
                                  FILE *p;

                                  p=fopen("SPORTS KIT.txt","r");



                                  if(p==NULL){
                                    printf("no file found");
                                  }

                                  else{
                                        printf("\n\nSports Kit:\n\t");
                                    while(!feof(p)){
                                        ch=fgetc(p);
                                        printf("%c",ch);
                                    }
                                    fclose(p);
          //end of usage of file
                 printf("\n\n");
                 printf("*If you don't find your desired item, you may leave pressing-(0) or go to Main-menu pressing-(8) *\n");
                 printf("\nselect product(by serial no.):");
                 scanf("%d",&n[3]);
                 if(n[3]==0){
                        if(itm>0){

                            goto exit1;
                        }
                        else{
                            goto exit;
                        }
                }
                if(n[3]==8){
                    goto main;
                }

				//submenu of fourth menu

				//First option : Jersey
                if(n[3]==1){
                        printf("\n Jersey-(200 tk)\n quantity:"); //change
                        scanf("%d",&n[4]);
                        sum+=n[4]*200;
                        pdt+=n[4];
                        itm++; // change
                        //printf("sum:%d",sum);
                        printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                        printf("\nChoose your option(by serial no.):");
                        scanf("%d",&n[7]);
                         printf("\n\n");

                        //Go to
                        if(n[7]==1){
                            goto main;
                        }
                        if(n[7]==2){
                            goto previous_menu4;
                        }
                        if(n[7]==3){
                            goto exit1;
                        }

                    }

                //Second option : Shorts
                if(n[3]==2){
                        printf("\n Shorts-(550 tk)\n quantity:"); //change
                        scanf("%d",&n[4]);
                        sum+=n[4]*550;
                        itm++;
                        pdt+=n[4]; //change
                        //printf("sum:%d",sum);

                        printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                        printf("\nChoose your option(by serial no.):");
                        scanf("%d",&n[7]);
                         printf("\n\n");
                        if(n[7]==1){
                            goto main;
                        }
                        if(n[7]==2){
                            goto previous_menu4;
                        }
                        if(n[7]==3){
                            goto exit1;
                        }

                    }

                //Third option : Boots
                if(n[3]==3){
                        printf("\nBat-(1200 tk)\n quantity:"); //change
                        scanf("%d",&n[4]);
                        sum+=n[4]*1200;
                        itm++;
                        pdt+=n[4]; //change
                        //printf("sum:%d",sum);
                        printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                        printf("\nChoose your option(by serial no.):");
                        scanf("%d",&n[7]);

                         printf("\n\n");
                        if(n[7]==1){
                            goto main;
                        }
                        if(n[7]==2){
                            goto previous_menu4;
                        }
                        if(n[7]==3){
                            goto exit1;
                        }

                    }
                //Fourth option : Football
                if(n[3]==4){
                        printf("\n Boots-(2500 tk)\n quantity:"); //change
                        scanf("%d",&n[4]);
                        sum+=n[4]*2500;
                        itm++;
                        pdt+=n[4];  //change
                        //printf("sum:%d",sum);
                        printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                        printf("\nChoose your option(by serial no.):");
                        scanf("%d",&n[7]);
                         printf("\n\n");

                        //Go to
                        if(n[7]==1){
                            goto main;
                        }
                        if(n[7]==2){
                            goto previous_menu4;
                        }
                        if(n[7]==3){
                            goto exit1;
                        }

                    }
                //Fifth option : Cricket kit
                if(n[3]==5){
                        printf("\n Cricket kit-(15,000 tk)\n quantity:"); //change
                        scanf("%d",&n[4]);
                        sum+=n[4]*15000;
                        itm++;
                        pdt+=n[4];  //change
                        //printf("sum:%d",sum);
                        printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                        printf("\nChoose your option(by serial no.):");
                        scanf("%d",&n[7]);
                         printf("\n\n");

                        //Go to
                        if(n[7]==1){
                            goto main;
                        }
                        if(n[7]==2){
                            goto previous_menu4;
                        }
                        if(n[7]==3){
                            goto exit1;
                        }

                    }
                }
            }
    	//Fifth menu : Garments
                previous_menu5:
                if(n[2]==5){
                                  FILE *p;

                                  p=fopen("GARMENTS.txt","r");



                                  if(p==NULL){
                                    printf("no file found");
                                  }

                                  else{
                                        printf("\n\nGarments:\n\t");
                                    while(!feof(p)){
                                        ch=fgetc(p);
                                        printf("%c",ch);
                                    }
                                    fclose(p);
          //end of usage of file
                            printf("\n\n");
                            printf("*If you don't find your desired item, you may leave pressing-(0) or go to Main-menu pressing-(8) *\n");
                            printf("\nselect product(by serial no.):");
                            scanf("%d",&n[3]);
                            if(n[3]==0){
                        if(itm>0){

                            goto exit1;
                        }
                        else{
                            goto exit;
                        }
                        }
                        if(n[3]==8){
                            goto main;
                        }

				//submenu of fifth menu

				//First option : T-shirt
                    if(n[3]==1){
                            printf("\nT-shirt(350 tk)\n quantity:"); //change
                            scanf("%d",&n[4]);
                            itm++;
                            sum+=n[4]*350;
                            pdt+=n[4]; // change
                            //printf("sum:%d",sum);
                            printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                            printf("\nChoose your option(by serial no.):");
                            scanf("%d",&n[7]);

                             printf("\n\n");
                            if(n[7]==1){
                                goto main;
                            }
                            if(n[7]==2){
                                goto previous_menu5;
                            }
                            if(n[7]==3){
                                goto exit1;
                            }

                        }

                    //Second option : Jeans
                    if(n[3]==2){
                            printf("\n Jeans-(1700 tk)\n quantity:"); //change
                            scanf("%d",&n[4]);
                            sum+=n[4]*1700;
                            pdt+=n[4];
                            itm++; //change
                            //printf("sum:%d",sum);

                             printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                             printf("\nChoose your option(by serial no.):");
                            scanf("%d",&n[7]);
                             printf("\n\n");
                            if(n[7]==1){
                                goto main;
                            }
                            if(n[7]==2){
                                goto previous_menu5;
                            }
                            if(n[7]==3){
                                goto exit1;
                            }

                        }

                    //Third option : Formal shirt
                    if(n[3]==3){
                            printf("\n Formal Shirt-(1100 tk)\n quantity:"); //change
                            scanf("%d",&n[4]);
                            sum+=n[4]*1100;
                            itm++;
                            pdt+=n[4]; //change
                            //printf("sum:%d",sum);
                            printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                            printf("\nChoose your option(by serial no.):");
                            scanf("%d",&n[7]);
                             printf("\n\n");

                            //Go to
                            if(n[7]==1){
                                goto main;
                            }
                            if(n[7]==2){
                                goto previous_menu5;
                            }
                            if(n[7]==3){
                                goto exit1;
                            }

                        }
                    //Fourth option : Suit
                    if(n[3]==4){
                            printf("\n Hats-(200 tk)\n quantity:"); //change
                            scanf("%d",&n[4]);
                            sum+=n[4]*200;
                            itm++;
                            pdt+=n[4];  //change
                            //printf("sum:%d",sum);
                            printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                            printf("\nChoose your option(by serial no.):");
                            scanf("%d",&n[7]);
                             printf("\n\n");

                            //Go to
                            if(n[7]==1){
                                goto main;
                            }
                            if(n[7]==2){
                                goto previous_menu5;
                            }
                            if(n[7]==3){
                                goto exit1;
                            }

                        }
                    //Fifth option : Hat
                    if(n[3]==5){
                            printf("\n Blazzer(4,500 tk)\n quantity:"); //change
                            scanf("%d",&n[4]);
                            sum+=n[4]*4500;
                            itm++;
                            pdt+=n[4];  //change
                            //printf("sum:%d",sum);
                            printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                            printf("\nChoose your option(by serial no.):");
                            scanf("%d",&n[7]);
                            printf("\n\n");

                            //Go to
                            if(n[7]==1){
                                goto main;
                            }
                            if(n[7]==2){
                                goto previous_menu5;
                            }
                            if(n[7]==3){
                                goto exit1;
                            }

                        }
                    }
            }
    	//Sixth menu : Cosmetics
                previous_menu6:
                if(n[2]==6){
                                  FILE *p;

                                  p=fopen("COSMETICS.txt","r");



                                  if(p==NULL){
                                    printf("no file found");
                                  }

                                  else{
                                        printf("\n\nCosmetics:\n\t");
                                    while(!feof(p)){
                                        ch=fgetc(p);
                                        printf("%c",ch);
                                    }
                                    fclose(p);
          //end of usage of file
                                printf("\n\n");
                                printf("*If you don't find your desired item, you may leave pressing-(0) or go to Main-menu pressing-(8) *\n");
                                printf("\nselect product(by serial no.):");
                                scanf("%d",&n[3]);
                                if(n[3]==0){
                                        if(itm>0){

                                            goto exit1;
                                        }
                                        else{
                                            goto exit;
                                        }
                                    }
                                if(n[3]==8){
                                    goto main;
                                }

				//submenu of sixth menu

				//First option : Eye liner
                        if(n[3]==1){
                                printf("\n Eye liner-(120 tk)\n quantity:"); //change
                                scanf("%d",&n[4]);
                                sum+=n[4]*120;
                                pdt+=n[4];
                                itm++; // change
                                //printf("sum:%d",sum);
                                printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                                printf("\nChoose your option(by serial no.):");
                                scanf("%d",&n[7]);
                                printf("\n\n");

                                //Go to
                                if(n[7]==1){
                                    goto main;
                                }
                                if(n[7]==2){
                                    goto previous_menu6;
                                }
                                if(n[7]==3){
                                    goto exit1;
                                }

                            }

                        //Second option : Foundation
                        if(n[3]==2){
                                printf("\n Lipstick-(300 tk)\n quantity:"); //change
                                scanf("%d",&n[4]);
                                sum+=n[4]*300;
                                itm++;
                                pdt+=n[4]; //change
                                //printf("sum:%d",sum);

                                 printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                                 printf("\nChoose your option(by serial no.):");
                                scanf("%d",&n[7]);
                                 printf("\n\n");
                                //Go to
                                if(n[7]==1){
                                    goto main;
                                }
                                if(n[7]==2){
                                    goto previous_menu6;
                                }
                                if(n[7]==3){
                                    goto exit1;
                                }

                            }

                            //Third option : Lip stick
                            if(n[3]==3){
                                printf("\n Foundation-(1100 tk)\n quantity:"); //change
                                scanf("%d",&n[4]);
                                sum+=n[4]*1100;
                                itm++;
                                pdt+=n[4]; //change
                                //printf("sum:%d",sum);
                                printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                                printf("\nChoose your option(by serial no.):");
                                scanf("%d",&n[7]);
                                 printf("\n\n");

                                //Go to
                                if(n[7]==1){
                                    goto main;
                                }
                                if(n[7]==2){
                                    goto previous_menu6;
                                }
                                if(n[7]==3){
                                    goto exit1;
                                }

                            }
                        //Fourth option : mascara
                        if(n[3]==4){
                                printf("\n Mascara-(850 tk)\n quantity:"); //change
                                scanf("%d",&n[4]);
                                sum+=n[4]*850;
                                itm++;
                                pdt+=n[4];  //change
                                //printf("sum:%d",sum);
                                printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                                printf("\nChoose your option(by serial no.):");
                                scanf("%d",&n[7]);
                                 printf("\n\n");

                                //Go to
                                if(n[7]==1){
                                    goto main;
                                }
                                if(n[7]==2){
                                    goto previous_menu6;
                                }
                                if(n[7]==3){
                                    goto exit1;
                                }

                            }
                        //Fifth option : nail polish
                        if(n[3]==5){
                                printf("\n Nail Polish-(650 tk)\n quantity:"); //change
                                scanf("%d",&n[4]);
                                sum+=n[4]*650;
                                itm++;
                                pdt+=n[4];  //change
                                //printf("sum:%d",sum);
                                printf("\ndo u want to buy anything more?\n 1.main manu\t 2.previous menu\t 3.Shopping done! Place order.\n");
                                printf("\nChoose your option(by serial no.):");
                                scanf("%d",&n[7]);
                                printf("\n\n");

                                //Go to
                                if(n[7]==1){
                                    goto main;
                                }
                                if(n[7]==2){
                                    goto previous_menu6;
                                }
                                if(n[7]==3){
                                    goto exit1;
                                }

                            }
                    }
            }


    }

        exit1:

            p=details();
            printf("total price:%d",sum);
            printf("\n\n How do you want to pay?");
            printf("\n 1.Bkash \t\t2.Credit Card\t\t3.Cash on delivery ");
            printf("\n\n Choose your opinion(By serial no.): ");
            scanf("%d", &n[9]);
            printf("\n");

                if(n[9]==1){
                            printf(" Enter your Bkash number: ");
                            scanf("%d", &n[10]);
                            printf("\n\n");
                            printf(" Enter your PIN: ");
                            scanf("%d", &n[11]);
                            printf("\n\n");
                            printf(" Enter the amount: ");
                            scanf("%d", &n[12]);
                            printf("\n\n");
                            printf(" 1.Send");
                            printf("\n\n Enter 1: ");
                            scanf("%d", &n[13]);
                    if(n[13]==1){
                        printf("\n Payment done!");
                    }
                 }


                  else if(n[9]==2){

                            printf("\n\n Please do scratch the Credit Card on the machine.");
                            printf("\n The Credit Card machine will be brought by the delivery man.");
                        }

                  else if(n[9]==3){
                            printf("\n\n You will pay Our deivery man!");
                            printf("\n\n");
                        }


         printf("\n\n\t==============ORDER DETAILS==============");
        printf("\n\n\tOrder from:%s\n",p.name);
        printf("\tAddress:%s\n",p.add);
        printf("\tPhone no:%d\n",p.Phone_no);
        printf("\tTracking no:%d\n",i+=100);
        printf("\tTotal item ordered:%d\n",itm);
        printf("\tTotal product ordered:%d\n",pdt);
        printf("\tTOTAL PRICE=%dtk\n",sum);
        if(n[9]==1){
            printf("\tPayment through:Bkash");
            printf("\n\tThe order will be delivered in 3-5 days.");
        }
        else if(n[9]==2){
            printf("\tPayment through:Credit Card.");
            printf("\n\tThe order will be delivered in 3-5 days.");
        }
        else if(n[9]==2){
            printf("\tPayment through:Cash on delivery.");
            printf("\n\tThe order will be delivered in 3-5 days.\n");
        }
        printf("\n\t\t============================");
        printf("\n\n");


        printf("\nThanks for purchasing from us. Hope you will order again.");
        printf("\n\n\t\t  ""HAVE A GOOD DAY"" ");


    exit:


    return 0;

}
