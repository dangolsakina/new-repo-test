# include<stdio.h>
# include<windows.h>
# include<conio.h>
# include<graphics.h>
# include<stdlib.h>
struct reservationName
{
	char name[100];
	long long int phone;
	int roomNumber;
	char address[100];
}reservationArray[100], reservationVariable;
struct regestrationForm
{
	char name[100];
	char address[100];
	long long int phone;
	char email[100];
	char formUsername[100];
	char password[100];
}form, login[100];
struct reserve{
	int id;
	int q;
}order,a;
int main()
{

	char a=219, roomChoice, accountChoice;;
	FILE *ptr1;
	int i=0, value=0, j=0, choice=0, count=0, count1=0;
	FILE *fileLogin;
	char ch, ch1, username[100], pass[100];
	
	FILE *p;
	char add;
	//int choice;
	p=fopen("D:\\reservation.dat","ab+");
	if(p==NULL){
		printf("\n error! File not found");
		exit(0);
	}
	
	// LOGIN AND REGISTRATION PAGE
	
	printf("\n Do you have an Account........ If 'Yes' press 'Y' and if 'No' press 'N' ");
	scanf("%c", &ch);
	system("cls");
	if(ch=='Y'|| ch=='y')
	{
		flag:
		fileLogin=fopen("LoginPage.DAT","rb");
			if(fileLogin==NULL)
			{
				printf("\n File Not Found");
				exit(0);
			}
		rewind(0);
		fread(&login,sizeof(login),1,fileLogin);
		printf("\n                       :------------------------------------------------------:");
		printf("\n                       :    :---------------------------------------------:   :");
		printf("\n                       :    :                   LOGIN                     :   :");
		printf("\n                       :    :---------------------------------------------:   :");
		printf("\n                       :------------------------------------------------------:");
		printf("\n\n\n\n");
		printf("\n                  -------------------------------------------");
		fflush(stdin);
		printf("\n                    Username: ");
		gets(username);
		fflush(stdin);
		printf("\n                  -------------------------------------------");
		printf("\n                    Password: ");
		while(1)
		{
			ch1= _getch();
			pass[i]=ch1;
			if(ch1==13)
			{
				pass[i]='\0';
				break;
			}
			printf("*");
			i++;
		}
		printf("\n                  -------------------------------------------");
		//gets(pass);
		system("cls");
		printf("\n\n\n\n\t\t\t\t\t");
		printf("\n\n\n\n\n\n\n\n\n");                  
		printf("\t\t\t\t\t\t\t");
		printf("Processing Data....\n");
		printf("\t\t\t\t\t\t");
		system("color 0B");
		for(i=0; i<=30; i++)
		{
			printf("%c",a);
			delay(50);
		}
		system("color 07");
		system("cls");
		for(i=0; i<100; i++)
		{
			if(strcmp(username,login[i].formUsername)==0)
			{
				if(strcmp(pass,login[i].password)==0)
				{
					printf("\n Successfully Logged in into System\n\n");
					system("pause");
					goto flagSwitchCase;
					count1++;
					
				}
			}
		}
		if(count1==0)
		{
			printf("\n ------------------------------------------------------------------------------------");
			printf("\n  Wrong Username or Password");
			printf("\n ------------------------------------------------------------------------------------\n");
			exit(0);
		/*	printf("\n\n\n\n");
			printf("\n ------------------------------------------------------------------------------------");
			printf("\n Seems Like You Don't  Have an Accout....... Do You Want To Create an Account?");
			printf("\n If 'Yes' press 'Y' and if 'No' press 'N'");
			printf("\n ------------------------------------------------------------------------------------\n");
			scanf("%c", &accountChoice);
				system("cls");
			if(accountChoice=='Y'|| accountChoice=='y')
			{
			
				goto flagRegistration;
			}*/
			
		}
	}
	
	
	else
	{
	//	count++;
	//	flagRegistration:
	//	system("cls");
		fileLogin=fopen("LoginPage.DAT","ab+");
			if(fileLogin==NULL)
			{
				printf("\n File Not Found");
				exit(0);
			}
			
		//	flagRegistration:
			printf("\n                           ---------------------------------------------");
			printf("\n                                           REGESTRATION ");
			printf("\n                           ---------------------------------------------");
			printf("\n\n\n");
			printf("\n                ---------------------------------------------");
			fflush(stdin);
			printf("\n                   Name: ");
			gets(form.name);
			
			printf("\n                ---------------------------------------------");
			fflush(stdin);
			printf("\n                  Address: ");
			gets(form.address);
		
			printf("\n                ---------------------------------------------");
			printf("\n                   Phone Number: ");
			scanf("%lld", &form.phone);
		
			printf("\n                ---------------------------------------------");
			fflush(stdin);
			printf("\n                    Email: ");
			gets(form.email);
			system("cls");
			printf("\n                        :-----------------------------------------------------:");
			printf("\n                        :    :-------------------------------------------:    :");
			printf("\n                        :    :     Set New Username and Password         :    :");
			printf("\n                        :    :-------------------------------------------:    :");
			printf("\n                        :-----------------------------------------------------:");
			printf("\n\n\n\n\n                :--------------------------------------------:");
			printf("\n                        :      Username: ");
			gets(form.formUsername);
			printf("\n                 :--------------------------------------------:");
			fflush(stdin);
			printf("\n                        :Password: ");
			gets(form.password);
			printf("\n                 :---------------------------------------------");
			fwrite(&form,sizeof(form),1,fileLogin);
			printf("\n Account Regestered Successfully.....\n\n");
			system("pause");
			//clrscr;
			system("cls");
			fclose(fileLogin);
			goto flag;
		}
		
		system("pause");
		system("cls");
		fclose(fileLogin);
		
		// Loading Code
		
		printf("\n\n\n\n\n\n\n\n\n");                  
		printf("\t\t\t\t\t\t\t");
		printf("Please Wait........\n");
		printf("\t\t\t\t\t\t");
		for(i=0; i<=30; i++)
		{
			printf("%c",a);
			delay(50);
		}
		printf("\n\n\n\n\n\n\t\t");
		//system("pause");
		system("cls");
		
		// Hotel Information
		flagSwitchCase:
		printf("\n");
		printf("\n\t\t                                  :--------------------------------------------------:");
		printf("\n\t\t                                  :             HOTEL RESERVATION SYSTEM             :");
		printf("\n\t\t                                  :--------------------------------------------------:");
		printf("\n\n\n\n\n\n\n");
		printf("\n\t\t                                           ---------------------------------------");
		printf("\n\t\t                                            | S.N |          CHOICES             |");
		printf("\n\t\t                                           ---------------------------------------");
		printf("\n\t\t                                           ---------------------------------------");
		printf("\n\t\t                                            |  1. |       Room Information       |");
		printf("\n\t\t                                            --------------------------------------");
		printf("\n\t\t                                            |  2. |       Availability           |");
		printf("\n\t\t                                            --------------------------------------");
		printf("\n\t\t                                            |  2. |       Reservation            |");
		printf("\n\t\t                                            --------------------------------------");
		printf("\n\t\t                                            |  3. |       Cancellation           |");
		printf("\n\t\t                                            --------------------------------------");
		printf("\n\t\t                                            |  4. |       Exit                   |");
		printf("\n\t\t                                            --------------------------------------");
		printf("\n\n\n\n\n                         ");
		printf("\t\t");
		printf("Enter Your Choice (1-4): ");
		scanf("%d", &choice);
		system("cls");
		if(choice<1 || choice>4)
		{
			printf("\n You Entered Wrong Choice...... Please Enter your Choice again!");
			delay(100);
			system("cls");
			goto flag;
		}
		switch(choice)
		{
			case 1:
				printf("\n\t\t\t\t\t\t\t First Paragraph (Introduction) ");
				printf("\n\n\n\t\t\t\t\t\t\t Second Paragraph (Introduction) ");
				printf("\n\n\n\n\t\t\t\t\t\t\t Third Paragraph (Introduction) ");
				printf("\n\n\n\n\t\t\t\t\t\t\t Fourth Paragraph (Location and other details) ");
				printf("\n\n\n\n\n\t\t\t\t ");
				system("pause");
				goto flag;
			break;
			
			case 2:
				
				ptr1 =fopen("FileFirstName.DAT","a+");
				if(ptr1==NULL)
				{
					printf("\n File Not found");
					exit(0);
				}
				flag1:
					
					
				// Scope for Filling Customers Detail	
				
				do
				{
				fflush(stdin);
				printf("\n Enter Your Name: ");
				gets(reservationVariable.name);
				printf("\n Enter Your Phone Number: ");
				scanf("%lld", &reservationVariable.phone);
				fflush(stdin);
				printf("\n Enter Your Address: ");
				gets(reservationVariable.address);
				printf("\n Enter how many room do you want to Reserve: ");
				scanf("%d", &reservationVariable.roomNumber);
				
				// Writing Data to the File
				
				fwrite(&reservationVariable,sizeof(reservationVariable),1,ptr1);
				printf("\n Data added Successfully");
				
				// Asking for more Reservarion
				fflush(stdin);
				printf("\n Do you want to Reserve more Room...... If Yes press Y");
				scanf("%c", &roomChoice);
				
				} while(roomChoice=='Y'|| roomChoice=='y');
				goto flagSwitchCase;
			break;
			case 3:
			/*	#include<stdio.h>
#include<stdlib.h>

struct reserve{
	int id;
	int q;
}order,a;

int main()
{
	FILE *p;
	char add;
	int choice;
	p=fopen("D:\\reservation.dat","ab+");
	if(p==NULL){
		printf("\n error! File not found");
		exit(0);
	}*/
//	printf("               KATHMANDU HOTEL");
    
	printf("\n                    Food Menu");
	printf("\n         *******************************");
	printf("\n\n\t1.Breakfast");
	printf("\n\t2.Lunch");
	printf("\n\t3.Dinner");
	
	flag5:
    printf("\n\tEnter your choice: ");
    scanf("%d",&choice);
    if(choice>3||choice<=0)
    {
    	printf("\n\tPlease enter valid number between 1-3");
    	goto flag5;
	}
	switch(choice)
	{
		case 1:
		    
			printf("\n                            KATHMANDU HOTEL ");
			printf("\n\n                             Breakfast");
		    printf("\n                        ********************");
			printf("\n\n\t1.PLAIN PANCAKES............................RS 100");
			printf("\n\t2.TOMATO SOUP.................................RS 150");
			printf("\n\t3.SANDWICH....................................RS 200");
			printf("\n\t4.BOILED EGG..................................RS 100");
			printf("\n\t5.MIX VEG SOUP................................RS 110");
			printf("\n\t6.TEA/COFEE...................................RS 130");
			printf("\n\t7.FRUIT SALAD.................................RS 250");
			printf("\n\t8.BREAD JAM...................................RS 70");
			printf("\n\t9.SWEET CORN..................................RS140");
			printf("\n\t10.SAUSAGE....................................RS100");
			fast:
			printf("\n\n\tEnter id of the food you want to have for breakfast: ");
			scanf("%d",&order.id);
	
			if(order.id<=0||order.id>10)
			{
				printf("\n\tPlease enter between 1-10");
				goto fast;
			}
			printf("\n\n\tEnter quantity/serving of the food you want to have for breakfast: ");
			scanf("%d",&order.q);
		
			fwrite(&order,sizeof(order),1,p);
			/*rewind(p);
			while(fread(&a,sizeof(a),1,p)==1){
			printf("\n the id and q is %d%d",a.id,a.q);
	}*/
			fflush(stdin);
			printf("\n\t Do you want to add other food");
			printf("\n\t if yes press y or Y else any key to exit: ");
			
			scanf("%c",&add);
			if (add=='y'||add=='Y')
			{
				goto fast;
			}
			else
			{
				exit (0);
			}
			
			break;
		case 2:
		    printf("\n                              KATHMANDU HOTEL");
			printf("\n\n                               Lunch");
			printf("\n                           ***********************");
			printf("\n\t11.SANDWICHES OR WRAPS.............................RS200");
		    printf("\n\t12.KATHI ROLLS.....................................RS100");
		    printf("\n\t13.MOONG DAL CHILLA................................RS210");
		    printf("\n\t14.POHA TIKKA......................................RS70");
		    printf("\n\t15.BIRYANI.........................................RS100");
		    printf("\n\t16.STUFFFED PARATHAS...............................RS150");
		    printf("\n\t17.SIJI PANCAKE....................................RS120");
		    printf("\n\t18.VEG BURGER......................................RS200");
		    printf("\n\t19.MUFFINS.........................................RS170");
		    printf("\n\t20.PIZZA...........................................RS200");
		    lun:
			printf("\n\n\tEnter id of the food you want to have for lunch: ");
			scanf("%d",&order.id);
		
            if(order.id<=10||order.id>20)
			{
				printf("\n\tPlease enter between 11-20");
				goto lun;
			}
			printf("\n\n\tEnter quantity/serving of the food you want to have for lunch: ");
			scanf("%d",&order.q);
			
			fwrite(&order,sizeof(order),1,p);
			fflush(stdin);
			printf("\n\tDo you want to add other food");
			printf("\n\t if yes press y or Y else any key to exit: ");
			scanf("%c",&add);
			if (add=='y'||add=='Y')
			{
				goto lun;
			}
			else
			{
				exit(0);
			}
			break;
		    
		case 3:
			 printf("\n                              KATHMANDU HOTEL");
			printf("\n\n                               Dinner");
			printf("\n                           ***********************");
		    printf("\n\t21.PULAU.........................................RS250");
		    printf("\n\t22.DAL MAKHANI...................................RS200");
		    printf("\n\t23.RAJMA PANEER CURRY............................RS150");
		    printf("\n\t24.CHICKEN RICE..................................RS120");
		    printf("\n\t25.THAKALI KHANA VEG.............................RS100");
		    printf("\n\t26.THAKALI NON-VEG...............................RS200");
		    printf("\n\t27.NAN ROTI WITH CURRY...........................RS210");
		    printf("\n\t28.PASTA.........................................RS130");
		    printf("\n\t29.MIX FRUIT JUICE...............................RS200");
		    printf("\n\t30.PANEER ROTI...................................RS200");
		    din:
			printf("\n\n\tEnter id of the food you want to have for dinner: ");
			scanf("%d",&order.id);
			
			if(order.id<=20||order.id>30)
			{
				printf("\n\tPlease enter between 21-30");
				goto din;
			}
			printf("\n\n\tEnter quantity/serving of the food you want to have for dinner: ");
			scanf("%d",&order.q);			
			fwrite(&order,sizeof(order),1,p);
			fflush(stdin);
			printf("\n\tDo you want to add other food");
			printf("\n\t if yes press y or Y else any key to exit: ");
			scanf("%c",&add);
			if (add=='y'||add=='Y')
			{
				goto din;
			}
			else
			{
				exit(0);
			}
		    break;
			
	}
fclose(p);
//return 0;

}		
		
	
	return 0;
}

