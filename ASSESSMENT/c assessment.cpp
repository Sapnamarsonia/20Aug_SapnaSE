// program to show food billing system
#include<stdio.h>   
main()
{
	int item,quantity;   // declaring variable
	char response ;
	float amount=0,total=0;      //taking amount and total as 0 in initial

	menu: // return to menu using goto statement
	printf("\nMENU");  //presenting menu to user
	printf("\n1) pizza      price = 180rs/pcs");       //diffrent option are given with its price 
	printf("\n2) Burger     price = 100rs/pcs");
	printf("\n3) Dosa       price = 120rs/pcs");
	printf("\n4) Idli       price = 50rs/pcs");
	
	printf("\n\nPlease enter your choice... : ");     //choice to be enter to place order
	scanf("%d",&item); // store the input value
	
	if(item == 1)    // here we are using else if ladder to take our order and calculating amount for the selected option and quantity
	{
		printf("\nYou have selected Pizza...");
		printf("\nEnter the quantity : ");
		scanf("%d", &quantity);
		amount = (quantity * 180);
	    printf("\nAmount = %f",amount);
	}
	else if(item == 2)
	{
		printf("\nYou have selected Burger...");
		printf("\nEnter the quantity : ");
		scanf("%d", &quantity);
		amount = (quantity * 100);
	    printf("\nAmount = %f",amount);
	}
	else if( item == 3)
	{
		printf("\nYou have selected Dosa...");
		printf("\nEnter the quantity : ");
		scanf("%d", &quantity);
		amount = (quantity * 120);
	    printf("\nAmount = %f",amount);
	}
	else if( item == 4)
	{
		printf("\nYou have selected Idli...");
		printf("\nEnter the quantity : ");
		scanf("%d", &quantity);
		amount = (quantity * 50);
	    printf("\nAmount = %f",amount);
	}
	else
	{
		printf("please select valid choice...");
	}
	
	total = total+amount; // total +=amount shorthand operater
	printf("\n\nTOTAL AMOUNT = %f" ,total);     //showing total amount

	printf("\nDo you want to continue (Y/N):"); //asking for the ordeer to place again 
	scanf(" %c", &response);     //saving the given option 
	

    if (response == 'y' || response == 'Y')   //using else if ladder to to conitnue with the order if response is yes 
	{
        goto menu;  //if yes then goto menu will take to the menu for taking order 
    } 
	else if (response == 'n' || response == 'N') //  if response is no then here it will exit 
	{
        printf("\nThank you...");
    } 
	else 
	{
        printf("\nInvalid input. Please enter 'y' or 'n'."); // and if correct response is not given then this message will come
    }
	
}

