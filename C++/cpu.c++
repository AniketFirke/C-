#include<stdio.h>
#include<stdlib.h>
#define n 5
void main()
{
	int queue[n][3],ch=1,front=0,rear=0,i,j=1,x=n, r=0;
 	int f, wt[n];
	printf("Queue using Array");
	printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");

 	while(ch)
 	{
		printf("\nEnter the Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
 				if(rear==x)
				printf("\n Queue is Full");
 			else
 			{
				printf("\n Enter process id, Burst time and Arrival time \n");
				r=rear++;
				scanf("%d %d %d",&queue[r][0], &queue[r][1], &queue[r][2]);
			}
			 break;
			case 2:
 				if(front==rear)
 				{
					printf("\n Queue is empty");
 				}
 				else
 				{
					f=front++;
					printf("\n Executed process ID is %d\n",queue[f][0]);
					x++;
					if(f==0)
					wt[0]=0;
					else
					wt[f]=wt[f-1]+queue[f-1][1]-queue[f][2];
					printf(" WT= %d", wt[f]);
 				}
 				break;
				case 3:
					printf("\n Queue Elements are:\n");
					if(front==rear)
					printf("\n Queue is Empty");
 					else
 					{
						printf(" P_Id\tBT\tAT\n");
						for(i=front; i<rear; i++)
						{
 							for(j=0;j<3;j++)
							printf(" %d\t",queue[i][j]);
							printf("\n");
						}
						break;
 						case 4:
							exit(0);
 							default:printf(" Wrong Choice: please see the options");
 					}
		}
 	}
}