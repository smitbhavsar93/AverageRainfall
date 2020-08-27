#include <math.h>
#include <stdio.h>

int main(void)
{
FILE* ptr = fopen("text.txt" , "r");

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

avg_l1=sum1/365; avg_l2=sum2/365; avg_l3=sum3/365; avg_l4=sum4/365; avg_l5=sum5/365; avg_l6=sum6/365;
tot_avg= (avg_l1+avg_l2+avg_l3+avg_l4+avg_l5+avg_l6)/6;


double LakeAvg[6];
LakeAvg[0]=avg_l1; LakeAvg[1]=avg_l2; LakeAvg[2]=avg_l3; LakeAvg[3]=avg_l4; LakeAvg[4]=avg_l5; 
LakeAvg[5]=avg_l6;

// Finding the coldest and warmest temperatures
double max, min;
int n=6;
	for (int i=0; i<n; ++i)
	{
		max = min = LakeAvg[0];
		
		for (i=1; i<n; ++i)
		{
			if(LakeAvg[i]>max){
			max = LakeAvg[i];
			}
		
			if(LakeAvg[i]<min){
			min = LakeAvg[i];
			}
	}
	}
		// printing the coldest lake
		if (min == LakeAvg[0])
		printf("The coldest lake is Lake Superior.\n");
		if (min == LakeAvg[1])
		printf("The coldest lake is Lake Michigan.\n");
		if (min == LakeAvg[2])
		printf("The coldest lake is Lake Huron.\n");
		if (min == LakeAvg[3])
		printf("The coldest lake is Lake Erie.\n");
		if (min == LakeAvg[4])
		printf("The coldest lake is Lake Ontario.\n");
		if (min == LakeAvg[5])
		printf("The coldest lake is Lake St.Clair.\n");
		
		//printing the warmest lake
		if (max == LakeAvg[0])
		printf("The warmest lake is Lake Superior.\n");
		if (max == LakeAvg[1])
		printf("The warmest lake is Lake Michigan.\n");
		if (max == LakeAvg[2])
		printf("The warmest lake is Lake Huron.\n");
		if (max == LakeAvg[3])
		printf("The warmest lake is Lake Erie.\n");
		if (max == LakeAvg[4])
		printf("The warmest lake is Lake Ontario.\n");
		if (max == LakeAvg[5])
		printf("The warmest lake is Lake St.Clair.\n");
		

//Checking if above, below or same as average
	if (tot_avg < LakeAvg[0])
	printf("Lake Superior is above the average temperatue.\n");
	else if (tot_avg > LakeAvg[0])
	printf("Lake Superior is below the average temperatue.\n");
	else {
		printf("Lake Superior is equal to the average temperatue.\n");}
		
	if (tot_avg < LakeAvg[1])
	printf("Lake Michigan is above the average temperature.\n");
	else if (tot_avg > LakeAvg[1])
	printf("Lake Michigan is below the average temperature.\n");
	else {
		printf("Lake Michigan is equal to the average temperature.\n");}
		
	if (tot_avg < LakeAvg[2])
	printf("Lake Huron is above the average temperature.\n");
	else if (tot_avg > LakeAvg[2])
	printf("Lake Huron is below the average temperature.\n");
	else {
		printf("Lake Huron is equal to the average temperatue.\n");}
		
	if (tot_avg < LakeAvg[3])
	printf("Lake Erie is above the average temperature.\n");
	else if (tot_avg > LakeAvg[3])
	printf("Lake Erie is below the average temperature.\n");
	else {
		printf("Lake Erie is equal to the average temperature.\n");}
		
	if (tot_avg < LakeAvg[4])
	printf("Lake Ontario is above the average temperature.\n");
	else if (tot_avg > LakeAvg[4])
	printf("Lake Onatrio is below the average temperature.\n");
	else {
		printf("Lake Ontario is equal to the average temperature.\n");}
	
	if (tot_avg < LakeAvg[5])
	printf("Lake St.Clair is above the average temperature.\n");
	else if (tot_avg > LakeAvg[5])
	printf("Lake St.Clair is below the average temperature.\n");
	else {
		printf("Lake St.Clair is equal to the average temperature.\n");}
		
return 0;
}
