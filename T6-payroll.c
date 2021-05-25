#include <stdio.h>

int main (void)
{ 
	/* Variable Initialization*/
	int paycode;
	float amt_total = 0;
	float to_pay, sales, hours;
        int item_A, item_B, item_C;
        float gross_A, gross_B, gross_C;
        int piece_1,piece_2,piece_3;
        float value_1,value_2,value_3;
	
	printf ("\nEnter employee code (-1 to end): ");
	scanf ("%d", &paycode);
	
	while (paycode != -1)
	{

		switch (paycode)
		{
			case 1:
				printf ("Enter weekly salary for manager: ");
				scanf ("%f", &to_pay);
                		printf ("Manager salary of: %.2f\n\n", to_pay);
		        	amt_total += to_pay;
		        	break;

			case 2:
				printf ("Enter the hourly wage for employee: ");
				scanf ("%f", &to_pay);
				printf ("Enter hours worked for hourly employee: ");
				scanf ("%f", &hours);

				if (hours > 40)
					to_pay = (to_pay * 40) + ((hours - 40) * (to_pay * 1.5));
				else
					to_pay = to_pay * hours;
      
				printf ("Wages are : %.2f\n\n", to_pay);
				amt_total += to_pay;

				break;

			case 3: 
                		printf("Enter sales value of item A:");
                		scanf("%d",&item_A);
                		printf("Enter sales value of item B:");
                		scanf("%d",&item_B);
                		printf("Enter sales value of item C:");
                		scanf("%d",&item_C);
                		gross_A = item_A*5.7/100;
                		gross_B = item_B*6.4/100;
                		gross_C = item_C*7.2/100;
                		to_pay = 250+gross_A+gross_B+gross_C;         
                		printf("Commsion wage is $%.2f <$250.50 base + $%.2f comissions <$%.2f item A, $%.2f item B,$%.2f item C>",
                			to_pay,gross_A+gross_B+gross_C,gross_A,gross_B,gross_C);
                		amt_total += to_pay;
                		break;

				

		       case 4:
                		printf("Enter the number produced of item 1:");
                		scanf("%d",&piece_1);
                		printf("Enter the number produced of item 2:");
	                	scanf("%d",&piece_2);
                		printf("Enter the number produced of item 3:");
                		scanf("%d",&piece_3);
                		value_1 = piece_1*22.50;
                		value_2 = piece_2*24.50;
                		value_3 = piece_3*26.00;
                		to_pay = value_1+value_2+value_3;
                		printf("Pieceworker wage: $%.2f <items 1 $%.2f, items 2 $%.2f, items 3 $%.2f>",to_pay,value_1,value_2,value_3);
                		amt_total += to_pay;
				break;

			default: 
				printf("Unrecognised paycode.Please only enter 1 for manager, 2 for hourly , 3 for comission ,4 for pieceworker and Q to quit and see total\n");
		}

		printf ("\nEnter employee's number code (-1 to end): ");
		scanf ("%d", &paycode);
	}

	/* Print the total pay for the week */
	printf ("Manager salary of: %.2f\n\n", to_pay);
	printf ("Wages are : %.2f\n\n", to_pay);
	printf("Commsion wage is $%.2f\n\n",to_pay);
	printf("Pieceworker wage: $%.2f\n\n",to_pay);
	printf ("\nThe total payroll for the week is: %.2f\n", amt_total);

	return 0;
}
