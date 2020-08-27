#include <math.h>
#include <stdio.h>

int main(void)
{
	FILE* ptr = fopen("text.dat" , "r");
	
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

    int count1=0, count2=0, count3=0, count4=0, count5=0, count6=0;
    
    for(int k =0; k< 365; k++){
        if(lake1[k]>20){
            count1=count1 +1;
        }
    }

    for(int o =0; o< 365; o++){
        if(lake2[o]>20){
            count2=count2 +1;
        }
    }

   for(int o =0; o< 365; o++){
        if(lake3[o]>20){
            count3=count3 +1;
        }
    }

   for(int o =0; o< 365; o++){
        if(lake4[o]>20){
            count4=count4 +1;
        }
    }

   for(int o =0; o< 365; o++){
        if(lake5[o]>20){
            count5=count5 +1;
        }
    }
    
   for(int o =0; o< 365; o++){
        if(lake6[o]>20){
            count6=count6 +1;
        }
    }
    printf("The Number of Days at Lake Superior that are considered comfortable for swimming are: %d\n", count1);
    printf("The Number of Days at Lake Michigan that are considered comfortable for swimming are: %d\n", count2);
    printf("The Number of Days at Lake Huron that are considered comfortable for swimming are: %d\n", count3);
    printf("The Number of Days at Lake Erie that are considered comfortable for swimming are: %d\n", count4);
    printf("The Number of Days at Lake Ontario that are considered comfortable for swimming are: %d\n", count5);
    printf("The Number of Days at Lake St. Clr that are considered comfortable for swimming are: %d\n", count6);
}   
