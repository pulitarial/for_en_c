#include <stdio.h> 
#include <stdbool.h> 

int main(){
    
    const int CONSUMO_ENERGIA_POR_CICLO= 25;
	const int MINIMO_ENERGIA_REQUERIDA= 25;
	const float REQUERIDO_RECURSO_1 = 0.5;
	const float REQUERIDO_RECURSO_2 = 2;
	const float REQUERIDO_RECURSO_3= 1.7;
	const int PRODUCTOS_POR_CICLO= 5;
	int energia_inicial= 0;
	float recurso_1_disponible= 0;
	float recurso_2_disponible=0;
	float recurso_3_disponible= 0;
	int productos_producidos= 0;

	printf("Indique la energia inicial con la que cuenta:\n");
	scanf("%i", &energia_inicial);
	printf("Indique la cantidad del recurso 1 que tiene disponible:\n");
	scanf("%f", &recurso_1_disponible);
	printf("Indique la cantidad del recurso 2 que tiene disponible:\n");
	scanf("%f", &recurso_2_disponible);
	printf("Indique la cantidad de recurso 3 que tiene disponible:\n");
	scanf("%f", &recurso_3_disponible);

	for (int i=25; ((energia_inicial> MINIMO_ENERGIA_REQUERIDA)|| (recurso_1_disponible> REQUERIDO_RECURSO_1) ||(recurso_2_disponible> REQUERIDO_RECURSO_2) || (recurso_3_disponible> REQUERIDO_RECURSO_3)); i= i+CONSUMO_ENERGIA_POR_CICLO){
		productos_producidos= productos_producidos + PRODUCTOS_POR_CICLO;
		printf("Va produciendo %i productos\n", productos_producidos );
		recurso_1_disponible= recurso_1_disponible - REQUERIDO_RECURSO_1;
		recurso_2_disponible = recurso_2_disponible - REQUERIDO_RECURSO_2;
		recurso_3_disponible= recurso_3_disponible - REQUERIDO_RECURSO_3;


	}
   
    
    return 0; 
}