//Write a C program to implement Insertion and Selection sort


#include<stdio.h>
#include<stdlib.h>
//function prototypes
void selection(int *,int);
void insertion(int *,int);
int main()
{
  int count=0;           //size of array
  int choice=0,ch=0;    //variables used to store user choice
  int i=0;             //loop variable
  int list[100];
 
  printf("Enter no of Elements: ");
  scanf("%d",&count);
  //filling in the array
  for(i=0;i<count;i++)
  {
    printf("Enter element %d: ",i+1);
    scanf("%d",&list[i]);
  }
//prints the list
 printf("\nNumbers entered: ");
 for(i=0;i<count;i++)
   printf("%d,",list[i]);
 printf("\n");

//Creates Menu for the user
do{
printf("*******Menu:*******\n\n");
printf("1.Inserton sort\n2.Selection Sort\n3.Exit\nYour choice: ");
scanf("%d",&choice);
switch(choice)
{
  case 1: //performs insertion sort
	  insertion(list,count);
	  break;
  case 2: //performs selection sort
	  selection(list,count);
	  break;
  case 3: return 0;
  default: printf("Invalid option\nRetry: ");
	   break;
 }
 printf("Do you want to continue(press 1 to continue any other number to exit): ");
 scanf("%d",&ch);
 } while(ch==1);
  return 0;
}
void insertion(int *list,int n)
{
	int temp;
	int i=0,j=0;

	for(i=1;i<n;i++)
	{
		temp=list[i];
		j=i-1;
		 while((j>=0)&&(list[j]>temp))
		  {
			list[j+1]=list[j];
			j--;
		  }
	list[j+1]=temp;
	}

  printf("Sorted list is: ");
   for(i=0;i<n;i++)
     {
	printf("%d,",list[i]);
	 }

	printf("\n");
}
void selection(int *list,int n)
{
 int i;
 int j,min;
 int k;
 for(j=0;j<n-1;j++)
  {
     min=list[j];
     k=j;
     for(i=j+1;i<n;i++)
      {

       if(list[i]<min)
       {
	 min=list[i];
	 k=i;
       }
     }

list[k]=list[j];
list[j]=min;
 }
printf("Sorted list is:");
for(i=0;i<n;i++)
{
 printf("%d,",list[i]);
}
printf("\n");
}







Output:-

Enter no of Elements: 4
Enter element 1: 5
Enter element 2: 6
Enter element 3: 9
Enter element 4: 7
Numbers entered: 5,6,9,7,
*******Menu:*******

1.Inserton sort
2.Selection Sort
3.Exit
Your choice: 1
Sorted list is: 5,6,7,9,
Do you want to continue(press 1 to continue any other number to exit): 
1
*******Menu:*******

1.Inserton sort
2.Selection Sort
3.Exit
Your choice: 2
Sorted list is:5,6,7,9,
Do you want to continue(press 1 to continue any other number to exit): 1
*******Menu:*******

1.Inserton sort
2.Selection Sort
3.Exit
Your choice: 3
