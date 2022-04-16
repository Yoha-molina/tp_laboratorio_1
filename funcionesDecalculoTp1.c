/*
 * funcionesDecalculoTp1.c
 *
 *  Created on: 16 abr. 2022
 *  Author: Yohama Molina
 *
	 int funcionValidarOpcion(int valorOpcion){
	 int opcion;
	 printf("ingrese las opciones del  menu del 1 al 6 ");
	 __fpurge(stdin);
	 scanf("%d", &opcion);
	 while(opcion < 1 || opcion > 6){
	 printf("ERROR Opcion incorrecta");
	 __fpurge(stdin);
	 scanf("%d", &opcion);
	 }
	 while(opcion >6){
	 printf("Opcion no valida;");
	 }
	 return opcion;
	 }
 *
 *     float funcionPedirKilometros(float km){
	float kilometraje;
	printf("Ingrese el kilometraje mayor a 0\n");
	__fpurge(stdin);
	scanf("%f", &kilometraje);

	while(kilometraje < 1){
		printf("ERROR. Ingrese el kilometraje mayor a 0\n");
		__fpurge(stdin);
		scanf("%f", &kilometraje);
	}
	return kilometraje;
}
	float funcionPedirPrecioAerolinea(float precioAE){
	float precioAerolinea;
	printf("Ingrese el precio del vuelo Aerolinea");
		__fpurge(stdin);
		scanf("%f", &precioAerolinea);
	while(precioAerolinea < 1){
		printf("Error ingrese el precio del vuelo Aerolinea");
		__fpurge(stdin);
		scanf("%f", &precioAerolinea);
	}
	return precioAerolinea;
}
	float funcionPedirPrecioLatam(float precioLa){
	float precioLatam;
		printf("Ingrese el precio del vuelo LATAM");
			__fpurge(stdin);
		scanf("%f", &precioLatam);
	while(precioLatam < 1){
		printf("Error ingrese el precio del vuelo LATAM");
			__fpurge(stdin);
		scanf("%f", &precioLatam);
	}
		return precioLatam;
}
	float funcionPagarConTarjetaDebito(float valorDelVuelo){
	float pagoConTarjetaDebito;
	pagoConTarjetaDebito = valorDelVuelo -(valorDelVuelo *10/100);
	return pagoConTarjetaDebito;
}
	float funcionPagarConTarjetaCredito(float valorDelVuelo){
	float pagoConTarjetaCredito;
	pagoConTarjetaCredito = (valorDelVuelo *25/100)+valorDelVuelo;
	__fpurge(stdin);
	return pagoConTarjetaCredito;
}
	float funcionPagarConBitcoin(float valorDelVuelo){
	float pagoConBitcoin;
	float precioBicoint=4586787;
	pagoConBitcoin = (valorDelVuelo/precioBicoint);
		__fpurge(stdin);
	return pagoConBitcoin;
}
	float funcionPrecioPorKilometraje(float valorDelVuelo, float valorKilometraje){
	float precioPorKilometraje;
	precioPorKilometraje = (valorDelVuelo/valorKilometraje);
	__fpurge(stdin);
		return precioPorKilometraje;
}
	float funcionDiferenciaDePrecio(float varDelVuelo , float valorDelVuelo){
	float resultadoDiferenciaDePrecio = abs(varDelVuelo-valorDelVuelo);
	return resultadoDiferenciaDePrecio;
}
	float funcionInformarDatos(float valorConTarjetaDebito,float valorConTarjetaCredito,float valorConBitCoin,float valorPrecioUnitario){
printf("a)El precio total  con tarjeta de debito : $%.2f \nb)El precio total con tarjeta de credito: $%.2f \nc)Precio pagando con Bitcoin: %.2f BTC \nd)Precio unitario; $%.2f \n\n",valorConTarjetaDebito,
valorConTarjetaCredito,valorConBitCoin,valorPrecioUnitario);
}
 */


