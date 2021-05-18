#include<cs50.h>
#include<stdio.h>


//define function
void greedyAlgorithm(int c);

int main (void)
{
    int changeowed;

    printf("How much change is owned in cents?"); //user input
    scanf("%d", &changeowed); //ask user for change owed
    greedyAlgorithm(changeowed); //I forgot to add this line, this runs the algorithm to give the change breakdown. without this line we won't see change output
}

void greedyAlgorithm(int c)
   {
   int numQ=0, numN=0, numD=0, numP=0, count =0;

   while(c >= 25)
   {
       numQ++;
       c=c-25;
   }

   while(c >= 10)
   {
       numD++;
       c=c-10;
   }

   while(c >= 5)
   {
       numN++;
       c=c-5;
   }

   while(c >= 1)
   {
       numP++;
       c=c-1;
   }

   //print change statement
printf("Cashier, please give user the following:\n"); // msg to cashier
   printf("%d Quaters\n", numQ);
   printf("%d Dimes\n", numD);
   printf("%d Nickels\n", numN);
   printf("%d Pennies\n", numP);

 }
