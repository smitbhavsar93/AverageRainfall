#include <math.h>
#include <stdio.h>

int main(void)
{
	FILE* ptr = fopen("text.txt" , "r");

	int year[365], day[365];
	
	//     Superior,     Michigan,       Huron,      Erie,   Ontario,   St.Clair
	double lake1[365] , lake2[365], lake3[365], lake4[365], lake5[365], lake6[365];
	
	for(int i = 0; i < 365; i++){
	fscanf(ptr,"%d", &year[i]);
	fscanf(ptr,"%d", &day[i]);
	fscanf(ptr,"%lf", &lake1[i]);
	fscanf(ptr,"%lf", &lake2[i]);
	fscanf(ptr,"%lf", &lake3[i]);
	fscanf(ptr,"%lf", &lake4[i]);
	fscanf(ptr,"%lf", &lake5[i]);
	fscanf(ptr,"%lf", &lake6[i]);
	
	}

// Lake Superior
float max1 = 0, min1 = 0;
int n1=365;
 	int day2date[13] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
	int gmonth1, cmonth1;
	int gdate1, cdate1 = 0;
	int gday1 = 0, cday1 = 0;
	
	for (int i=0; i<n1; ++i)
	{
		max1 = min1 = lake1[0];
		
		for (i=1; i<365; ++i)
		{
			if(lake1[i]>max1){
			max1 = lake1[i];
			gday1 = i+1;
			}
			if(lake1[i]<min1){
			min1 = lake1[i];
			cday1 = i+1;
			}
			}
			
	for(int k = 0; k < 13; k++){
		if (gday1 < day2date[k]){
			gmonth1 = k;
			gdate1 = gday1 - day2date[k-1];
			break;
		}
		
	}
	for (int l = 0; l < 13; l++){
		if (cday1 < day2date[l]){
			cmonth1 = l;
			cdate1 = cday1 - day2date[l-1];
			break;
		}
	}
	}
		printf("Lake Superior:\n");
		printf("Warmest: %.2lf°C on date %d/%d/%d \n", max1, gdate1, gmonth1, year[gdate1]);
		printf("Coldest: %.2lf°C on date %d/%d/%d \n\n", min1, cdate1, cmonth1, year[cdate1]);
		
		
//Lake Michigan
float max2 = 0, min2 = 0;
 int n2=365;	
 	int gmonth2, cmonth2;
	int gdate2, cdate2 = 0;
	int gday2 = 0, cday2 = 0;
 
	for (int i=0; i<n2; ++i)
	{
		max2 = min2= lake2[0];
		
		for (i=1; i<365; ++i)
		{
			if(lake2[i]>max2){
			max2 = lake2[i];
			gday2 = i+1;
			}
			
			if(lake2[i]<min2){
			min2 = lake2[i];
			cday2 = i+1;
			} 
			}
			
	for(int k = 0; k < 13; k++){
		if (gday2 < day2date[k]){
			gmonth2 = k;
			gdate2 = gday2 - day2date[k-1];
			break;
		}
		
	}
	
	for (int l = 0; l < 13; l++){
		if (cday2 < day2date[l]){
			cmonth2 = l;
			cdate2 = cday2 - day2date[l-1];
			break;
		}
	}
	}
		printf("Lake Michigan:\n");
		printf("Warmest: %.2lf°C on date %d/%d/%d \n", max2, gdate2, gmonth2, year[gdate2]);
		printf("Coldest: %.2lf°C on date %d/%d/%d\n\n", min2, cdate2, cmonth2, year[cdate2]);
		
// Lake Huron
float max3 = 0, min3=0;
 int n3=365;
  	int gmonth3, cmonth3;
	int gdate3, cdate3 = 0;
	int gday3 = 0, cday3 = 0;
 	
	for (int i=0; i<n3; ++i)
	{
		max3 = min3 = lake3[0];
		
		for (i=1; i<365; ++i)
		{
			if(lake3[i]>max3){
			max3 = lake3[i];
			gday3 = i+1;
			}
			
			if(lake3[i]<min3){
			min3 = lake3[i];
			cday3 = i+1;
			}
			}
			
		for(int k = 0; k < 13; k++){
		if (gday3 < day2date[k]){
			gmonth3 = k;
			gdate3 = gday3 - day2date[k-1];
			break;
		}
		
	}
	
	for (int l = 0; l < 13; l++){
		if (cday3 < day2date[l]){
			cmonth3 = l;
			cdate3 = cday3 - day2date[l-1];
			break;
		}
	}
	}
		printf("Lake Huron:\n");
		printf("Warmest: %.2lf°C on date %d/%d/%d \n", max3, gdate3, gmonth3, year[gdate3]);
		printf("Coldest: %.2lf°C on date %d/%d/%d \n\n", min3, cdate3, cmonth3, year[cdate3]);

// Lake Erie
float max4 = 0, min4=0;
 int n4=365;
 	int gmonth4, cmonth4;
	int gdate4, cdate4 = 0;
	int gday4 = 0, cday4 = 0;
 	
	for (int i=0; i<n4; ++i)
	{
		max4 = min4 = lake4[0];
		
		for (i=1; i<365; ++i)
		{
			if(lake4[i]>max4){
			max4 = lake4[i];
			gday4 = i+1;
			}
			
			if(lake4[i]<min4){
			min4 = lake4[i];
			cday4 = i+1;
			}
			}
			
	for(int k = 0; k < 13; k++){
		if (gday4 < day2date[k]){
			gmonth4 = k;
			gdate4 = gday4 - day2date[k-1];
			break;
		}
		
	}
	
	for (int l = 0; l < 13; l++){
		if (cday4 < day2date[l]){
			cmonth4 = l;
			cdate4 = cday4 - day2date[l-1];
			break;
		}
	}
			
	}
		printf("Lake Erie:\n");
		printf("Warmest: %.2lf°C on date %d/%d/%d \n", max4, gdate4, gmonth4, year[gdate4]);
		printf("Coldest: %.2lf°C on date %d/%d/%d \n\n", min4, cdate4, cmonth4, year[cdate4]);

//Lake Ontario
float max5 = 0, min5=0;
 int n5=365;	
  	int gmonth5, cmonth5;
	int gdate5, cdate5 = 0;
	int gday5 = 0, cday5 = 0;
 	
 
	for (int i=0; i<n5; ++i)
	{
		max5 = min5 = lake5[0];
		
		for (i=1; i<365; ++i)
		{
			if(lake5[i]>max5){
			max5 = lake5[i];
			gday5 = i+1;
			}
			
			if(lake5[i]<min5){
			min5 = lake5[i];
			cday5 = i+1;
			}
			}
			
	for(int k = 0; k < 13; k++){
		if (gday5 < day2date[k]){
			gmonth5 = k;
			gdate5 = gday5 - day2date[k-1];
			break;
		}
		
	}
	
	for (int l = 0; l < 13; l++){
		if (cday5 < day2date[l]){
			cmonth5 = l;
			cdate5 = cday5 - day2date[l-1];
			break;
		}
	}
	}
		printf("Lake Ontario:\n");
		printf("Warmest: %.2lf°C on date %d/%d/%d \n", max5, gdate5, gmonth5, year[gdate5]);
		printf("Coldest: %.2lf°C on date %d/%d/%d \n\n", min5, cdate5, cmonth5, year[cdate5]);

// Lake St.Clair
float max6 = 0, min6=0;
 int n6=365;	
   	int gmonth6, cmonth6;
	int gdate6, cdate6 = 0;
	int gday6 = 0, cday6 = 0;
	
	for (int i=0; i<n6; ++i)
	{
		max6 = min6 = lake6[0];
		
		for (i=1; i<365; ++i)
		{
			if(lake6[i]>max6){
			max6 = lake6[i];
			gday6 = i+1;
			}
			
			if(lake6[i]<min6){
			min6 = lake6[i];
			cday6 = i+1;
			}
			}
			
	for(int k = 0; k < 13; k++){
		if (gday6 < day2date[k]){
			gmonth6 = k;
			gdate6 = gday6 - day2date[k-1];
			break;
		}
		
	}
	
	for (int l = 0; l < 13; l++){
		if (cday6 < day2date[l]){
			cmonth6 = l;
			cdate6 = cday6 - day2date[l-1];
			break;
		}
	}
	}
		printf("Lake St.Clair:\n");
		printf("Warmest: %.2lf°C on date %d/%d/%d \n", max6, gdate6, gmonth6, year[gdate6]);
		printf("Coldest: %.2lf°C on date %d/%d/%d \n\n", min6, cdate6, cmonth6, year[cdate6]);
}
