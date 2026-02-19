
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: alex xinyi chen
 * ID: 202028305
 */

int main( void ) {

   //define and initialise variables for the problem data 
   float salary=36250;
   float natins=0.08;
   float tax=0.15;

   //calculate the deductions and final take-home salary
   float natins_amt=salary*natins;
   float after_natins=salary-natins_amt;
   float tax_amt=(after_natins-12500)*tax;
   float final=after_natins-tax_amt;

   //if salary is <=12500, then there will be no tax
   if(salary<=12500){
      final=after_natins;
      tax_amt=0;
   }

   //Use only these print statement with appropriate formatting and variable names
   //printf("Salary £...",var_name);
   //printf("NI contribution £...",var_name);
   //printf("Tax contribution £...",var_name);
   //printf("Take home salary £...",var_name);
   printf("salary: £%.2f\n",salary);
   printf("ni contribution: £%.2f\n",natins_amt);
   printf("tax contribution: £%.2f\n",tax_amt);
   printf("take home salary: £%.2f\n",final);

   return 0;
}