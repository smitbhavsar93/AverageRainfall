/*
 * Number 1
 */

#include <math.h>
#include <stdio.h>

int main(void)
{
FILE* ptr = fopen("//Users//smitbh//Desktop//text.dat" , "r");

int year[365], day[365];

//     Superior,     Michigan,       Huron,      Erie,   Ontario,   St.Clair
double lake1[365] , lake2[365], lake3[365], lake4[365], lake5[365], lake6[365];
double sum1=0, avg_l1=0, sum2=0, avg_l2=0 , sum3=0, avg_l3=0, sum4=0, avg_l4=0, sum5=0, avg_l5=0, sum6=0, avg_l6=0;
double tot_avg=0;

for(int i = 0; i < 365; i++){
fscanf(ptr,"%d", &year[i]);
fscanf(ptr,"%d", &day[i]);
fscanf(ptr,"%lf", &lake1[i]);
fscanf(ptr,"%lf", &lake2[i]);
fscanf(ptr,"%lf", &lake3[i]);
fscanf(ptr,"%lf", &lake4[i]);
fscanf(ptr,"%lf", &lake5[i]);
fscanf(ptr,"%lf", &lake6[i]);

	sum1 = sum1 + lake1[i];
	sum2 = sum2 + lake2[i];
	sum3 = sum3 + lake3[i];
	sum4 = sum4 + lake4[i];
	sum5 = sum5 + lake5[i];
	sum6 = sum6 + lake6[i];
}

avg_l1=sum1/365;
printf("The average temperature of lake Superior is: %.2lf degrees C\n", avg_l1);

avg_l2=sum2/365;
printf("The average temperature of lake Michigan is: %.2lf degrees C\n", avg_l2);

avg_l3=sum3/365;
printf("The average temperature of lake Huron is: %.2lf degrees C\n", avg_l3);

avg_l4=sum4/365;
printf("The average temperature of lake Erie is: %.2lf degrees C\n", avg_l4);

avg_l5=sum5/365;
printf("The average temperature of lake Ontario is: %.2lf degrees C\n", avg_l5);

avg_l6=sum6/365;
printf("The average temperature of lake St.Clair is: %.2lf degrees C\n", avg_l6);

tot_avg= (avg_l1+avg_l2+avg_l3+avg_l4+avg_l5+avg_l6)/6;
printf("The total average of all six lakes is: %.2lf degrees C\n", tot_avg);

return 0;
}
