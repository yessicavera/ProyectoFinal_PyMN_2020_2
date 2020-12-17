#include <stdio.h>
int main()
{
	float per,sal,car,lim,dper,dsal,dcar,dlim,tf,tff,cbp;
	int bp;
	printf (" Ingrese el costo de perfumeria: ");
	scanf("%f",&per);
	printf(" Ingrese el costo de salchichoneria: ");
	scanf("%f",&sal);
	printf(" Ingrese el costo de carniceria: ");
	scanf("%f",&car);
	printf(" Ingrese el costo de limpieza: ");
	scanf("%f",&lim);
	printf(" Cuantas bolsas de plastico utilizo: ");
	scanf("%d",&bp);
	dper=(per)-(per*0.20);
	dsal=(sal)-(sal*0.40);
	dcar=(car)-(car*0.20);
	dlim=(lim)-(lim*0.35);
	tf=(dper+dsal+dcar+dlim);
	cbp=(bp*0.10);
	if (bp==0)
	{
		printf (" La tarifa final es de: %f",tf);
	}
	else
	{
		tff=(tf+cbp);
		printf(" La tarifa final es de: %f",tff);
	}
	return 0;
}
