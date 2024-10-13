//Write a program to demonstrate a Food Billing System.
#include<stdio.h>
main()
{
	int i,n,quantity, item; // declaring variables.
	float amount=0,total=0;
	int choice;
	
	printf("\n\n");                            
	printf("*********    WELCOME TO THE FOOD ORDERING SYSTEM    **********"); // showing menu
	printf("\n\n");
	again:
	printf("\n      ___________________   MENU   _________________");         // showing diffrent items with its price
	printf("\n\n");
	printf("\n1  Pizza         price = 200 rs/pcs");
	printf("\n2  Burger        price = 70 rs/pcs");
	printf("\n3  Sandwich      price = 150 rs/pcs");
	printf("\n4  Momos         price = 100 rs/pcs");
	printf("\n5  Coldrink      price = 30 rs/pcs");	
	
	printf("\n\nPlease select your food item (by no.): ");                     // prompt user to select its choice
	scanf("%d",&item);
	switch(item)                                                               // using switch case for taking order and its quantity 
	{
		case 1:
			printf("\nYou have selected Pizza");                                  
		    printf("\nPlease enter quantity : ");
	        scanf("%d",&quantity);
	        amount = (quantity * 200);
	        printf("\nAmount = %f",amount);
	        break;
	    case 2:
	    	printf("\nYou have selected Burger");
			printf("\nPlease enter quantity : ");
	    	scanf("%d",&quantity);
	    	amount =(quantity * 70);
	    	printf("\nAmount = %f",amount);
	    	break;
	    
	    case 3:
	    	printf("\nYou have selected Sandwich");
			printf("\nPlease enter quantity : ");
	    	scanf("%d",&quantity);
	    	amount = (quantity * 150 );
	    	printf("\nAmount = %f", amount);
	    	break;
	    
	    case 4:
	    	printf("\nYou have selected Momos");
			printf("\nPlease enter quantity : ");
	    	scanf("%d",&quantity);
	    	amount=(quantity * 100);
	    	printf("\nAmount = %f", amount);
	    break;
	    
	    case 5:
	    	printf("\nYou have selected Coldrink");
			printf("\nPlease enter quantity :");
	    	scanf("%d",&quantity);
	    	amount=(quantity * 30);
	    	printf("\nAmount = %f",amount);
	    	break;
	    	default:
	    	printf("Please select valid choice...");
	    	
	    }
	    total +=amount;        //(total=total+amount)                 // calculating total amount using shorthand operator      
		printf("\n\nTOTAL AMOUNT = %f" ,total);                       //printing total amount
		printf("\n\nDo you want to place more order ...? 1 = yes OR 2 = No :  ");          // asking to place more order
		scanf("%d",&choice);
		if(choice == 1) 
		{
			goto again;                                // going back to menu
		}
			printf("\n\nfinal bill = %f" ,total);     // showing final bill 
	
			printf("\n\nThank You...");
    		return 0;

}
