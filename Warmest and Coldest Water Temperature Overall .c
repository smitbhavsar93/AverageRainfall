
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

	int glake = 0; 
	double greatest = -1;
	int gday = 0;
	
	int clake = 0;
	double coldest = 1000;
	int cday = 0;
	
	 
	for(int j = 0; j < 365; j++){
		if (lake1[j] > greatest){
			greatest = lake1[j];
			glake = 1;
			gday = j+1;
		}
		
		if (lake2[j] > greatest){
			greatest = lake2[j];
			glake = 2;
			gday = j+1;
		}
		
		if (lake3[j] > greatest){
			greatest = lake3[j];
			glake = 3;
			gday = j+1;
		}
		
		if (lake4[j] > greatest){
			greatest = lake4[j];
			glake = 4;
			gday = j+1;
		}
		
		if (lake5[j] > greatest){
			greatest = lake5[j];
			glake = 5;
			gday = j+1;
		}
		
		if (lake6[j] > greatest){
			greatest = lake6[j];
			glake = 6;
			gday = j+1;
		}
		
		
		if (lake1[j] < coldest){
			coldest = lake1[j];
			clake = 1;
			cday = j+1;
		}
		
		if (lake2[j] < coldest){
			coldest = lake2[j];
			clake = 2;
			cday = j+1;
		}
		
		if (lake3[j] < coldest){
			coldest = lake3[j];
			clake = 3;
			cday = j+1;
		}
		
		if (lake4[j] < coldest){
			coldest = lake4[j];
			clake = 4;
			cday = j+1;
		}
		
		if (lake5[j] < coldest){
			coldest = lake5[j];
			clake = 5;
			cday = j+1;
		}
		
		if (lake6[j] < coldest){
			coldest = lake6[j];
			clake = 6;
			cday = j+1;
		}	
		
	}
	
	int day2date[13] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
	int gmonth, cmonth;
	int gdate, cdate = 0;
	char *grlake, *colake;
	
	
	for(int k = 0; k < 13; k++){
		if (gday < day2date[k]){
			gmonth = k;
			gdate = gday - day2date[k-1];
			break;
		}
		
	}
	
	for (int l = 0; l < 13; l++){
		if (cday < day2date[l]){
			cmonth = l;
			cdate = cday - day2date[l-1];
			break;
		}
	}
	
	switch(glake){
		
		case 1:
		grlake = "Superior";
		break;
		
		case 2:
		grlake = "Michigan";
		break;
		
		case 3:
		grlake = "Huron";
		break;
		
		case 4:
		grlake = "Erie";
		break;
		
		case 5:
		grlake = "Ontario";
		break;
		
		case 6:
		grlake = "St.Clair";
		break;
		
	}
	
	switch(clake){
		
		case 1:
		colake = "Superior";
		break;
		
		case 2:
		colake = "Michigan";
		break;
		
		case 3:
		colake = "Huron";
		break;
		
		case 4:
		colake = "Erie";
		break;
		
		case 5:
		colake = "Ontario";
		break;
		
		case 6:
		colake = "St.Clair";
		break;
		
	}
	
	printf("\n(Warmest Temperature) On date %d/%d/%d on Lake %s of temperature %.2lf°C", *&gdate, *&gmonth, year[gdate],*&grlake, *&greatest);
	printf("\n(Coldest Temperature) On date %d/%d/%d on Lake %s of temperature %.2lf°C", *&cdate, *&cmonth, year[cdate],*&colake, *&coldest);
}

