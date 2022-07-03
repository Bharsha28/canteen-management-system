#include<stdio.h>
#include<stdlib.h>
void time();
void breakfast();
void lunch();
void snacks();
void menu();
void drinks();
void sbreakfast();
void slunch();
void ssnacks();
void specialmenu();
void bill();
float p1=0,p2=0,p3=0,p4=0,p5=0,p6=0,p7=0,p8=0,p9=0,p10=0,p11=0,p12=0,p13=0,p14=0,p15=0,p16=0,p17=0,p18=0,p19=0,p20=0;
float p21=0,p22=0,p23=0,p24=0,p25=0,p26=0,p27=0,p28=0,p29=0,p30=0,p31=0,p32=0,p33=0,p34=0,p35=0,p36=0,p37=0,p38=0;
main()
{
	int day;
	printf("\t===========================\n");
	printf("\tCATEEN  ODERING SYSTEM \n");
	printf("\t============================\n");
    printf("\t   [1].MONDAY\n");
    printf("\t   [2].TUESDAY\n");
    printf("\t   [3]. WEDNESDAY\n");
    printf("\t   [4]. THURSDAY \n");
    printf("\t   [5].FRIDAY\n");
    printf("\t   [6].SATURDAY \n");
    printf("\tEnter DAY \n");
	scanf("%d",&day);
	if(day==1 || day==2 || day==3 || day==4 )
	time();
	 else if(day==5 || day==6 )
	 specialmenu();
	 else
	 printf("INVALID CHOICE");
}
void time()
{
	int time;
printf("Enter time \n");
	scanf("%d",&time);
	if(time==6 || time==7|| time==8)
	{
		printf("CANTTEN is not OPENED\n");
		printf("Please vist after 9 AM\n");
		exit(0);
	}
	 if(time==9 || time==10 || time==11)
	{
		printf("please oder ONLY  breakfast\n");
		breakfast();
	}
	 if(  time==12 || time==1 || time==2 || time== 3)
	{
		printf("breakfast time is over\n");
		printf("please oder ONLY lunch\n");
		lunch();
	}
	if(time==4 || time==5)
	{
		printf("lunch time is over\n");
		printf("please oder ONLY snacks\n");
	    snacks();
	}
	else
	printf("\n***********PLEASE  VIST AGAIN **********\n");
	exit(0);
}
void menu()
{
	int choice;
	printf("\t===========================\n");
	printf("\tCATEEN MANAGEMENT SYSTEM AND ODERS\n");
	printf("\t============================\n");
	printf("\t(1).BREAKFAST\n");
	printf("\t(2).LUNCH\n");
	printf("\t(3).SNACKS\n");
	printf("\t(4).EXIT\n");
    printf("Enter your your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1:
              breakfast();
              break;
        case 2:
           lunch();
            break;
        case 3:
            snacks();
        case 4:
        	exit(0);
        default:
        	printf("Invalid choice");
	}
}
void breakfast()
{
	int ch,plate,again,total1;
	printf("\t            ==============================          \n");
            printf("\t                    Breakfast Menu   \n");
            printf("\t            ==============================          \n\n");
            printf("\t   [1] Pancakes                    - Rs.110 \n");
            printf("\t   [2] Avocado Toasts              - Rs.29 \n");
            printf("\t   [3] Vada                        - Rs.140 \n");
            printf("\t   [4] Dosa                         - Rs.65 \n");
            printf("\t   [5] Puri                          - Rs.50 \n");
            printf("\t   [6] Idli                         - Rs.40 \n");
	printf("enter your choice\n");
	scanf("%d",&ch);
   switch(ch)
    {
       case 1: printf("your food is ==pancake\n");
           printf("how many plates do you want ?\n");
           scanf("%d",&plate);
          p1=110*plate;
          printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - Bill ,Enter[3] - Soft drink :\n ");
           scanf("%d", &again);
           if(again==1)
	      {
	        breakfast();
	      }	
	      else if(again==2)
	     {
		  bill();
	     }
        else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
      case 2:
        printf("your food is ==Avocado Toasts\n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p2=29*plate;
         printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - Bill ,Enter[3] - Soft drink :\n ");
         scanf("%d", &again);
         if(again==1)
	    {
	      breakfast();
	    }	
	    else if(again==2)
	   {
	   bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
    case 3:
    printf("your food is == voda\n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p3=140*plate;
         printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink :\n ");
         scanf("%d", &again);
         if(again==1)
	    {
	      breakfast();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
     case 4:
      printf("your food is == Dosa\n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p4=65*plate;
        printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink : \n");
         scanf("%d", &again);
         if(again==1)
	    {
	      breakfast();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
     case 5:
      printf("your food is == Puri\n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p5=50*plate;
        printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink : \n");
         scanf("%d", &again);
         if(again==1)
	    {
	      breakfast();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
    case 6:
      printf("your food is == Idli\n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p6=40*plate;
         printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink :\n ");
         scanf("%d", &again);
         if(again==1)
	    {
	      breakfast();
	    }	
	    else if(again==2)
	   {
	bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
   }
}
void lunch()
{
	int ch,plate,again,total2;
	printf("\t               ==============================          \n");
            printf("\t                        Lunch Menu   \n");
            printf("\t               ==============================          \n\n");
            printf("\t   [1] Lemon Rice                           - Rs.100 \n");
            printf("\t   [2] Rice with panner butter masala       - Rs.165 \n");
            printf("\t   [3] potatoe curry with rice              - Rs.120 \n");
            printf("\t   [4] curd rice                            - Rs.80 \n");
            printf("\t   [5] Thali                                - Rs.150 \n");
            printf("\t   [6] Vege Fried Rice                      - Rs.220 \n");
            printf("\t   [7] rice                                 - Rs.120 \n");
            printf("\t   [8] panner curry                         - Rs.90 \n");
	printf("enter your choice\n");
	scanf("%d",&ch);
    switch(ch)
    {
       case 1: printf("your food is == LEMON RICE\n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p7=100*plate;
        printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink : \n");
         scanf("%d", &again);
         if(again==1)
	    {
	      lunch();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
  case 2:
      printf("your food is == RICE WITH PANNER BUTTER MASALA\n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p8=165*plate;
         printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink : \n");
         scanf("%d", &again);
         if(again==1)
	    {
	      lunch();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
        case 3:
          printf("your food is ==  POTATOES CURRY WITH RICE \n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p9=120*plate;
         printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink : \n");
         scanf("%d", &again);
         if(again==1)
	    {
	      lunch();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
   case 4:
      printf("your food is == CURD RICE\n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p10=80*plate;
        printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink :\n ");
         scanf("%d", &again);
         if(again==1)
	    {
	     lunch();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
 case 5:
      printf("your food is == THALI \n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p11=150*plate;
        printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink :\n ");
         scanf("%d", &again);
         if(again==1)
	    {
	      lunch();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
case 6:
      printf("your food is == VEGE FRIED RICE \n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p12=220*plate;
         printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink : \n");
         scanf("%d", &again);
         if(again==1)
	    {
	      lunch();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
  case 7:
      printf("your food is ==RICE\n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p13=120*plate;
         printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink : \n");
         scanf("%d", &again);
         if(again==1)
	    {
	     lunch();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
   case 8:
      printf("your food is ==  PANNER CURRY   \n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p14=90*plate;
         printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink : \n");
         scanf("%d", &again);
         if(again==1)
	    {
	      lunch();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
    }
}
void snacks()
{
	int ch,plate,again,total3;
	printf("\t               ==============================          \n");
            printf("\t                       SNACKS MENU  \n");
            printf("\t               ==============================          \n\n");
            printf("\t   [1].Chai         - Rs.20 \n");
            printf("\t   [2].Chaat         - Rs.65 \n");
            printf("\t   [3].Kachori       - Rs.40 \n");
            printf("\t   [4].Momos          - Rs.50 \n");
            printf("\t   [5].Samosa          - Rs.10 \n");
	printf("enter your choice\n");
	scanf("%d",&ch);
   switch(ch)
   {
   	case 1:
        printf("your snacks is == CHAI \n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p15=20*plate;
        printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] -bill ,Enter[3] - Soft drink :\n ");
         scanf("%d", &again);
         if(again==1)
	    {
	      snacks();
	    }	
	    else if(again==2)
	   {
	    bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
   case 2:
      printf("your snacks is == CHAAT\n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p16=65*plate;
         printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink :\n ");
         scanf("%d", &again);
         if(again==1)
	    {
	      snacks();
	    }	
	    else if(again==2)
	   {
	bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
 case 3:
    printf("your snacks is ==  KACHORI\n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p17=40*plate;
         printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink :\n ");
         scanf("%d", &again);
         if(again==1)
	    {
	      snacks();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
   case 5:
      printf("your food is == MOMO\n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p18=50*plate;
        printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink : \n");
         scanf("%d", &again);
         if(again==1)
	    {
	      snacks();
	    }	
	    else if(again==2)
	   {
	bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
    case 6:
      printf("your food is == SAMOSA \n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p19=10*plate;
        printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink : \n");
         scanf("%d", &again);
         if(again==1)
	    {
	      snacks();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
   }

}
void specialmenu()
{
	int choice;
	printf("*************\t SPECIAL MENU\t**********\n");
	printf("\t===========================\n");
	printf("\tCATEEN MANAGEMENT SYSTEM AND ODERS\n");
	printf("\t============================\n");
	printf("\t(1).BREAKFAST\n");
	printf("\t(2).LUNCH\n");
	printf("\t(3).EXIT\n");
    printf("Enter your your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1:
              sbreakfast();
              break;
        case 2:
        	slunch();
            break;
        case 3:
        	exit(0);
        default:
        	printf("Invalid choice");
	}
}
void sbreakfast()
{
	int ch,plate,again,total4;
		printf("\t            ==============================          \n");
            printf("\t            Special Breakfast Menu   \n");
            printf("\t        ==============================          \n\n");
            printf("\t   [1] Bread omlet                 - Rs.110 \n");
            printf("\t   [2] Masala Dosa                 - Rs.50\n");
            printf("\t   [3] Vada Pav                    - Rs.140 \n");
            printf("\t   [4] Panner Dosa                 - Rs.55 \n");
            printf("\t   [5] Uttapam                     - Rs.50 \n");
            printf("\t   [6] Aloo Paratha                - Rs.40 \n");
	printf("enter your choice\n");
	scanf("%d",&ch);
    switch(ch)
    {
    	case 1: printf("your food is == BREAD OMLET\n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p19=210*plate;
        printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill,Enter[3] - Soft drink :\n ");
         scanf("%d", &again);
         if(again==1)
	    {
	      sbreakfast();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
    case 2:
      printf("your food is == MASALA DOSA \n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p20=210*plate;
         printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill,Enter[3] - Soft drink : \n");
         scanf("%d", &again);
         if(again==1)
	    {
	      sbreakfast();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
  case 3:
    printf("your food is == VADA PAV \n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p21=210*plate;
         printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink : \n");
         scanf("%d", &again);
         if(again==1)
	    {
	      sbreakfast();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
   case 4:
      printf("your food is == PANNER DOSA\n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p22=210*plate;
        printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill,Enter[3] - Soft drink : \n");
         scanf("%d", &again);
         if(again==1)
	    {
	      sbreakfast();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
  case 5:
      printf("your food is == UTTAMPAM\n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p23=210*plate;
        printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink :\n ");
         scanf("%d", &again);
         if(again==1)
	    {
	      sbreakfast();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
 case 6:
      printf("your food is ==ALOO PARATHA\n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p24=210*plate;
         printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink :\n ");
         scanf("%d", &again);
         if(again==1)
	    {
	      sbreakfast();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
   }
}
void slunch()
{
	int ch,plate,again,total5;
		printf("\t               ==============================          \n");
            printf("\t               Special   Lunch Menu   \n");
            printf("\t           ==============================          \n\n");
            printf("\t   [1]  Aloo Gobi mutter                   - Rs.100 \n");
            printf("\t   [2] Rice with panner butter masala       - Rs.265 \n");
            printf("\t   [3] Dum Biryani                          - Rs.120 \n");
            printf("\t   [4] curd rice                            - Rs.80 \n");
            printf("\t   [5] Thali  with Butter milk              - Rs.220 \n");
            printf("\t   [6] matton briyani                       - Rs.320 \n");
            printf("\t   [7] Egg rice                             - Rs.120 \n");
            printf("\t   [8] panner curry                         - Rs.90 \n");
	printf("enter your choice\n");
	scanf("%d",&ch);
    switch(ch)
    {
     case 1:   printf("your food is == ALOO GOBI MUTTER \n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p25=100*plate;
        printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink : \n");
         scanf("%d", &again);
         if(again==1)
	    {
	      slunch();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
    case 2:
      printf("your food is == RICE WITH PANNER BUTTER MASALA\n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p26=265*plate;
         printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink :\n ");
         scanf("%d", &again);
         if(again==1)
	    {
	      slunch();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection\n");
	    break;
   case 3:printf("your food is ==  DUM BRIYANI\n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p27=120*plate;
         printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink :\n ");
         scanf("%d", &again);
         if(again==1)
	    {
	      slunch();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
    case 4:
      printf("your food is == CURD RICE\n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p28=80*plate;
        printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink : \n");
         scanf("%d", &again);
         if(again==1)
	    {
	      slunch();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
    case 5:
      printf("your food is == THALI WITH PANNER BUTTER MASALA\n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p29=220*plate;
        printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] -bill ,Enter[3] - Soft drink : \n");
         scanf("%d", &again);
         if(again==1)
	    {
	      sbreakfast();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
   case 6:
      printf("your food is ==MATTOON BRIYANCI \n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p30=320*plate;
         printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] -bill ,Enter[3] - Soft drink :\n ");
         scanf("%d", &again);
         if(again==1)
	    {
	      sbreakfast();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
  case 7:
      printf("your food is == EGG RICE\n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p31=120*plate;
         printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill,Enter[3] - Soft drink :\n ");
         scanf("%d", &again);
         if(again==1)
	    {
	      sbreakfast();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
    case 8:
      printf("your food is ==  PANNER CURRY   \n");
        printf("how many plates do you want ?\n");
        scanf("%d",&plate);
        p32=90*plate;
         printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill ,Enter[3] - Soft drink : \n");
         scanf("%d", &again);
         if(again==1)
	    {
	      sbreakfast();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
    	else if(again==3)
    	{
    		drinks();
		}
		else
	    printf("Invalid selection");
	    break;
    }
}
void drinks()
{
	int ch,plate, again,total6;
	printf("\t               ==============================          \n");
            printf("\t                        DRINKS   \n");
            printf("\t               ==============================          \n\n");
            printf("\t   [1]   Coco Cola    - Rs.30 \n");
            printf("\t   [2] Pepsi          - Rs.50 \n");
            printf("\t   [3] Mountain Dew   - Rs.20 \n");
            printf("\t   [4] Sprite         - Rs.28 \n");
            printf("\t   [5] Butter Milk    - Rs.20 \n");
            printf("\t   [6] Mango Juice    - Rs.32 \n");
	printf("Enter your drink\n");
	scanf("%d",&ch);
     switch(ch)
    {
        case 1:printf("your snacks is == COCO COLA \n");
        printf("how many drinks do you want ?\n");
        scanf("%d",&plate);
        p33=30*plate;
        printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] -bill\n");
         scanf("%d", &again);
         if(again==1)
	    {
	      drinks();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
		else
	    printf("Invalid selection");
	    break;
       case 2:printf("your snacks is == PEPSI \n");
         printf("how many drinks do you want ?\n");
         scanf("%d",&plate);
         p34=50*plate;
         printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill \n");
         scanf("%d", &again);
         if(again==1)
	     {
	      snacks();
	     }	
	     else if(again==2)
	    { 
	 	 bill();
	    }
		else
	    printf("Invalid selection");
	    break;
        case 3:printf("your snacks is == MOUNTAIN DEW \n");
        printf("how many drinks do you want ?\n");
        scanf("%d",&plate);
        p35=20*plate;
         printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill\n ");
         scanf("%d", &again);
         if(again==1)
	    {
	      drinks();
	    }	
	    else if(again==2)
	   {
	bill();
	   }
		else
	    printf("Invalid selection");
	    break;
          case 4:
      printf("your food is == SPRITE\n");
        printf("how many drinks do you want ?\n");
        scanf("%d",&plate);
        p36=28*plate;
        printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill\n ");
         scanf("%d", &again);
         if(again==1)
	    {
	      drinks();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
		else
	    printf("Invalid selection");
	    break;
        case 5:
      printf("your food is == BUTTER MILK \n");
        printf("how many drinks do you want ?\n");
        scanf("%d",&plate);
        p37=20*plate;
        printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill\n ");
         scanf("%d", &again);
         if(again==1)
	    {
	      drinks();
	    }	
	    else if(again==2)
	   {
		bill();
	   }
		else
	    printf("Invalid selection");
	    break;
    case 6:
        printf("your food is == MANGO JUICE \n");
        printf("how many drinks do you want ?\n");
        scanf("%d",&plate);
        p38=32*plate;
        printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - bill \n");
         scanf("%d", &again);
         if(again==1)
	    {
	      drinks();
	    }	
	    else if(again==2)
	    {
	    bill();
		}
	    else 
	   {
		 printf("Invalid selection");
	   }
	   break;
   }	
}
void bill()
{
	int total1,total2,total3,total4,total5,total6,total;
	total1=p1+p2+p3+p4+p5+p6;
	total2=p7+p8+p9+p10+p11+p12+p13+p14;
	total3=	p15+p16+p17+p18;
	total4=p19+p20+p21+p22+p23+p24;
	total5=p25+p26+p27+p28+p29+p30+p31+p32+p33;
	total6=p34+p35+p36+p37+p38;
	printf("*****************YOUR BILL*******************\n\n");
	printf("total =%d",total1+total2+total3+total4+total5+total6);
	 printf("   \n \t\t=========Thanks===========\t\t \n\n");
     printf(" ************We hope to see you again!************ \n");
}
