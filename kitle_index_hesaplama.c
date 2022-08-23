#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double kitleIndeks(double boy,double kilo);
void vki_hesapla(double boy,double kilo);


int main(){
    double boy,kilo;
    printf("boyunuzu girin:");
    scanf("%lf",&boy);
    printf("kilonuzu kirin:");
    scanf("%lf",&kilo);    


	vki_hesapla(boy,kilo);
	
	return 0 ;
}

double kitleIndeks(double boy,double kilo){
    double vki = kilo / (pow(boy,2));  
    return (vki);	
}


void vki_hesapla(double boy,double kilo){
	
	double vki =  kitleIndeks(boy,kilo);
	
	if(vki >=0 && vki <= 18)

	    printf("zayif");

	else if(vki >=19 && vki <= 25)

		printf("orta");

	else if(vki >=26 && vki <= 30)
		printf("kilolu");
		
	else 
		printf("obez");
	
}

