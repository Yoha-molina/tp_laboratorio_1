/*
 ============================================================================
 Name        : Yohama Molina
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas
 para ofrecerlos a sus clientes.
 Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
 El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <math.h>
#include "funcionesDeCalculoTp1.h"

float calcularKilometraje(float km);
float calcularPrecioDelVuelo(float precioDelVuelo);
float calcularPrecioDelVuelo(float precioLatam);
float calcularPagoConTarjetaDebito(float valorDelVuelo);
float calcularPagoConTarjetaCredito(float valorDelVuelo);
float calcularPagoConBitcoin(float valorBitcoin);
float calcularPrecioPorKilometraje(float valorDelVuelo, float valorKilometraje);
float calcularDiferenciaDePrecio(float varDelVuelo, float valorDelVuelo);
float informarDatos(float valorConTarjetaDebito,
		float valorConTarjetaCredito, float valorConBitCoin,
		float valorPrecioUnitario);

int main(void) {
	int opcion;
	float kilometraje;
	float precioAerolinea;
	float precioLatam;
	float pagoDebitoAE;
	float pagoDebitoLatam;
	float pagoCreditoAE;
	float pagoCreditoLatam;
	float pagoConBitcoinAe;
	float pagoConBitcoinLatam;
	float precioBitcoinAe;
	float precioPorKilometroAe;
	float precioPorKilometroLatan;
	float diferenciaDePrecios;
	float informacionDatosAerolinea;
	float inforomacionDeDatosLatam;
	int kilometraje1;
	int continuar = 1;

	do {
		printf("============ MENU DE OPCIONES =============\n\n");
		printf("1.- Ingresar kilometraje\n");
		printf("2.- Ingrese precio de vuelos\n");
		printf("3.- Calcular datos\n");
		printf("4.- Informar resultado\n");
		printf("5.- Carga forzada de datos\n");
		printf("6.- Salir\n");
		printf("============================================\n");
		__fpurge(stdin);
		scanf("%d", &opcion);

		switch (opcion) {
		case 1:
				kilometraje = calcularKilometraje(kilometraje);
				break;

		case 2:
			precioAerolinea = calcularPrecioDelVueloAerolinea(precioAerolinea);
			precioLatam = calcularPrecioDelVueloLatam(precioLatam);

			break;
		case 3:
			pagoDebitoAE = calcularPagoConTarjetaDebito(precioAerolinea);
			pagoDebitoLatam = calcularPagoConTarjetaDebito(precioLatam);
			pagoCreditoAE = calcularPagoConTarjetaCredito(precioAerolinea);
			pagoCreditoLatam = calcularPagoConTarjetaCredito(precioLatam);
			pagoConBitcoinAe = calcularPagoConBitcoin(precioAerolinea);
			pagoConBitcoinLatam = calcularPagoConBitcoin(precioLatam);
			precioPorKilometroAe = calcularPrecioPorKilometraje(precioAerolinea,
					kilometraje);
			precioPorKilometroLatan = calcularPrecioPorKilometraje(precioLatam,
					kilometraje);
			diferenciaDePrecios = calcularDiferenciaDePrecio(precioAerolinea,
					precioLatam);
			break;
		case 4:
			printf("Aerolineas\n\n");
			informacionDatosAerolinea = informarDatos(pagoDebitoAE,
					pagoCreditoAE, pagoConBitcoinAe, precioPorKilometroAe);
			printf("Latam\n\n");
			inforomacionDeDatosLatam = informarDatos(pagoDebitoLatam,
					pagoCreditoLatam, pagoConBitcoinLatam,
					precioPorKilometroLatan);
			printf("La diferencia de precio es:%2.f\n\n", diferenciaDePrecios);

			break;
		case 5:

			kilometraje1 = 7090;
			precioAerolinea = 162965;
			precioLatam = 159339;
			pagoDebitoAE = calcularPagoConTarjetaDebito(precioAerolinea);
			pagoDebitoLatam = calcularPagoConTarjetaDebito(precioLatam);
			pagoCreditoAE = calcularPagoConTarjetaCredito(precioAerolinea);
			pagoCreditoLatam = calcularPagoConTarjetaCredito(precioLatam);
			pagoConBitcoinAe = calcularPagoConBitcoin(precioAerolinea);
			pagoConBitcoinLatam = calcularPagoConBitcoin(precioLatam);
			precioPorKilometroAe = calcularPrecioPorKilometraje(precioAerolinea,
					kilometraje1);
			precioPorKilometroLatan = calcularPrecioPorKilometraje(precioLatam,
					kilometraje1);
			diferenciaDePrecios = calcularDiferenciaDePrecio(precioAerolinea,
					precioLatam);
			printf("KMs %d\n", kilometraje1);
			printf("Precio Aerolineas: $%2.f\n\n", precioAerolinea);
			informacionDatosAerolinea = informarDatos(pagoDebitoAE,
					pagoCreditoAE, pagoConBitcoinAe, precioPorKilometroAe);
			printf("Latam: $%2.f\n\n", precioLatam);
			inforomacionDeDatosLatam = informarDatos(pagoDebitoLatam,
					pagoCreditoLatam, pagoConBitcoinLatam,
					precioPorKilometroLatan);
			printf("La diferencia de precio es:$%2.f\n\n", diferenciaDePrecios);

			break;
		case 6:
			continuar = 0;
			printf("Gracias por preferirnos!!!");
			break;

		default:
			printf("La opcion que ingreso es incorrecta.\n\n");
			break;
		}
	} while (continuar);

	return EXIT_SUCCESS;
}

float calcularKilometraje(float km) {
	float kilometraje;
	printf("Ingrese el kilometraje mayor a 0\n");
	__fpurge(stdin);
	scanf("%f", &kilometraje);

	while (kilometraje < 1) {
		printf("ERROR. Ingrese el kilometraje mayor a 0\n");
		__fpurge(stdin);
		scanf("%f", &kilometraje);
	}
	return kilometraje;
}
float calcularPrecioDelVueloAerolinea(float precioVuelo) {
	float precioAerolinea;
	printf("Ingrese el precio del vuelo\n");
	__fpurge(stdin);
	scanf("%f", &precioAerolinea);
	while (precioAerolinea < 1) {
		printf("Error al ingresar el precio del vuelo\n.");
		__fpurge(stdin);
		scanf("%f", &precioAerolinea);
	}
	return precioAerolinea;
}

 float calcularPrecioDelVueloLatam(float precioVuelo){
 float precioLatam;
 printf("Ingrese el precio del vuelo LATAM\n");
 __fpurge(stdin);
 scanf("%f", &precioLatam);
 while(precioLatam < 1){
 printf("Error ingrese el precio del vuelo LATAM\n");
 __fpurge(stdin);
 scanf("%f", &precioLatam);
 }
 return precioLatam;
 }

float calcularPagoConTarjetaDebito(float valorDelVuelo) {
	float pagoConTarjetaDebito;
	pagoConTarjetaDebito = valorDelVuelo - (valorDelVuelo * 10 / 100);
	__fpurge(stdin);

	return pagoConTarjetaDebito;
}
float calcularPagoConTarjetaCredito(float valorDelVuelo) {
	float pagoConTarjetaCredito;
	pagoConTarjetaCredito = (valorDelVuelo * 25 / 100) + valorDelVuelo;
	__fpurge(stdin);

	return pagoConTarjetaCredito;

}
float calcularPagoConBitcoin(float valorDelVuelo) {
	float pagoConBitcoin;
	float precioBicoint = 4586787;
	pagoConBitcoin = (valorDelVuelo / precioBicoint);
	__fpurge(stdin);
	return pagoConBitcoin;
}
float calcularPrecioPorKilometraje(float valorDelVuelo, float valorKilometraje) {
	float precioPorKilometraje;
	precioPorKilometraje = (valorDelVuelo / valorKilometraje);
	__fpurge(stdin);
	return precioPorKilometraje;
}
float calcularDiferenciaDePrecio(float varDelVuelo, float valorDelVuelo) {
	float resultadoDiferenciaDePrecio = abs(varDelVuelo - valorDelVuelo);
	return resultadoDiferenciaDePrecio;
}
float informarDatos(float valorConTarjetaDebito,
		float valorConTarjetaCredito, float valorConBitCoin,
		float valorPrecioUnitario) {
	printf(
			"a)El precio total  con tarjeta de debito : $%2.f \nb)El precio total con tarjeta de credito: $%.2f \nc)Precio pagando con Bitcoin: %.2f BTC \nd)Precio unitario; $%.2f \n\n",
			valorConTarjetaDebito, valorConTarjetaCredito, valorConBitCoin,
			valorPrecioUnitario);
}


