#include<stdio.h>

void main(void)
{
    int code,qty;
    float price, amt, totalAmt, cash, change;
    char addAnother;

    do{
        system("cls");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("SCOLASTICA NYAWIRA MENU\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("[1] Olive Cooking Oil\t\t\t 389.4\n");
        printf("[2] Baking Flour\t\t\t 290.2\n");

        printf("\nEnter code\t:");
        scanf("%d", &code);
        printf("\nEnter Quantity\t:");
        scanf("%d", &qty);

        switch(code){
            case 1: price=389.4;
            break;
            case 2: price=290.2;
            break;
        }
        amt = price*qty;
        printf("\nAmount\t\t\t: %.2f", amt);

        totalAmt= totalAmt + amt;
        printf("\nTotal Amount\t\t: %.2f", totalAmt);

        printf("\nAdd another order(y/n)?");
        addAnother=  getche();
    }while(addAnother == 'y' || addAnother== 'y');
    do {
        printf("\nCash tendered\t:");
        scanf("%f", &cash);
    }while (cash<totalAmt);

    change= cash - totalAmt;
    printf("\nChange\t\t\t: %.2f",change);
}
