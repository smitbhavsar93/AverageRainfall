
#include <math.h>
#include <stdio.h>

int main(void)
{
	FILE* ptr = fopen("//Users//smitbh//Desktop//text.dat" , "r");
	
	int year[365], day[365];
	 
	//     Superior,    Michigan,   Huron,      Erie,       Ontraio,    St.Clair
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
	
	double b1 = 0, b2 = 0, b3 = 0, b4 = 0, b5 = 0, b6 = 0;
	
	for (int j = 0; j < 365; j++){
		b1 += lake1[j];
		b2 += lake2[j];
		b3 += lake3[j];
		b4 += lake4[j];
		b5 += lake5[j];
		b6 += lake6[j];
	}
	
	b1 = b1 / 365;
	b2 = b2 / 365;
	b3 = b3 / 365;
	b4 = b4 / 365;
	b5 = b5 / 365;
	b6 = b6 / 365;
	
	double avg2 [6] = {b1, b2, b3, b4, b5, b6};
	char *lakesavg [6] = {"Superior", "Michigan", "Huron", "Erie", "Ontario", "St.Clair"};
	
	double temperature;
	char *temperature2;
	for (int j = 0; j < 6; j++){
      for (int k = j + 1; k < 6; k++) {
         if (avg2[j] < avg2[k])
         {
            temperature = avg2[j];
            avg2[j] = avg2[k];
            avg2[k] = temperature;
            
            temperature2 = lakesavg[j];
            lakesavg[j] = lakesavg[k];
            lakesavg[k] = temperature2;
         }
      }
   }
   
   /*
   printf("\nLakes average yearround temperature in order from warmest to coldest is: \n");
   for (int i = 0; i < 6; i++){
      printf("%-8s\t%.2lf°C\n", lakesavg[i], avg2[i]);
   }
   */
	
	double a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0;
	
	for (int j = 171; j < 265; j++){
		a1 += lake1[j];
		a2 += lake2[j];
		a3 += lake3[j];
		a4 += lake4[j];
		a5 += lake5[j];
		a6 += lake6[j];
	}
	
	a1 = a1 / (265 - 172);
	a2 = a2 / (265 - 172);
	a3 = a3 / (265 - 172);
	a4 = a4 / (265 - 172);
	a5 = a5 / (265 - 172);
	a6 = a6 / (265 - 172);
	
	double avg [6] = {a1, a2, a3, a4, a5, a6};
	char *lakes [6] = {"Superior", "Michigan", "Huron", "Erie", "Ontraio", "St.Clair"};
	
	double temp;
	char *temp2;
	for (int j = 0; j < 6; j++){
      for (int k = j + 1; k < 6; k++) {
         if (avg[j] < avg[k])
         {
            temp = avg[j];
            avg[j] = avg[k];
            avg[k] = temp;
            
            temp2 = lakes[j];
            lakes[j] = lakes[k];
            lakes[k] = temp2;
         }
      }
   }
   printf("\nLakes average summer temperature in order from warmest to coldest is: \n");
   for (int i = 0; i < 6; i++){
	   printf("Lake ");
      printf("%-8s\t%.2lf°C\n", lakes[i], avg[i]);
   }
   
   int counter = 1;
   for (int k = 0; k < 6; k++){
	   if (lakes[k] == lakesavg[k]){
		counter++;
	   }
	}
	
	printf("\n");
	
	if (counter == 6)
		printf("The order of warmest to coldest for summer and yearround (Q2) are the same");
	else 
		printf("The order of warmest to coldest for summer and yearrround (Q2) are NOT same");
		
}
	
