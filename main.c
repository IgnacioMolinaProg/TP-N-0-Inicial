#include <stdio.h>
#include <stdlib.h>
///PROBLEMAS SECUENCIALES
void ejercicio_1_secuencial();
void ejercicio_2_secuencial();
void ejercicio_3_secuencial();
///Problemas Condicionales Selectivos Simples
void ejercicio_1_condicionalSelectivoSimple();
void ejercicio_2_condicionalSelectivoSimple();
void ejercicio_3_condicionalSelectivoSimple();
void ejercicio_4_condicionalSelectivoSimple();
void ejercicio_5_condicionalSelectivoSimple();
///Problemas Condicionales Selectivos Compuestos
void ejercicio_1_condicionalSelectivoCompuesto();
int main()
{
    ///PROBLEMAS SECUENCIALES
    //ejercicio_1_secuencial();
    //ejercicio_2_secuencial();
    //ejercicio_3_secuencial();
    ///PROBLEMAS SECUENCIALES
    //ejercicio_1_condicionalSelectivoSimple();
    //ejercicio_2_condicionalSelectivoSimple();
    //ejercicio_3_condicionalSelectivoSimple();
    //ejercicio_4_condicionalSelectivoSimple();
    //ejercicio_5_condicionalSelectivoSimple();
    ///Problemas Condicionales Selectivos Compuestos
    ejercicio_1_condicionalSelectivoCompuesto();

    return 0;
}
///PROBLEMAS SECUENCIALES
void ejercicio_1_secuencial()
{
    //1. Suponga que un individuo desea invertir su capital en un banco y desea saber cu�nto dinero ganar� despu�s de un mes si el banco paga a raz�n de 2% mensual.
    float dinero,ganancia;
   printf("Ingrese el monto de su cuenta bancaria: ");
   scanf("%f",&dinero);
   ganancia=dinero+(dinero*0.02);//le sumo el 20% de ganancia
   printf("\nDespues de un mes su monto sera de: %.2f",ganancia);
}
void ejercicio_2_secuencial()
{
    //2. Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea saber cu�nto deber� pagar finalmente por su compra.
    float dinero,precioFinal;
    printf("Ingrese el monto a pagar: ");
    scanf("%f",&dinero);
    precioFinal=dinero-(dinero*0.15);//le resto el descuento del 15%
    printf("\nLa compra con el 15%% de descuenta sera de: %.2f",precioFinal);

}
void ejercicio_3_secuencial()
{
    //3. Un maestro desea saber qu� porcentaje de hombres y que porcentaje de mujeres hay en un grupo de estudiantes.
    int hombres,mujeres,totalPersonas;
    float porcentajeHombre,porcentajeMujeres;
    printf("Ingrese la cantidad de alumnos Hombre: ");
    scanf("%i",&hombres);
    printf("Ingrese la cantidad de alumnos Mujeres: ");
    scanf("%i",&mujeres);
    totalPersonas=mujeres+hombres;
    porcentajeHombre=(((float)hombres/(float)totalPersonas)*100);//saco la cantidad de porcentaje de hombre sobre el total
    porcentajeMujeres=(((float)mujeres/(float)totalPersonas)*100);//saco la cantidad de porcentaje de mujeres sobre el total
    printf("El porcentaje de Hombres es de: %.2f%%",porcentajeHombre);
    printf("\nEl porcentaje de Mujeres es de: %.2f%%",porcentajeMujeres);
}
///PROBLEMAS SECUENCIALES
void ejercicio_1_condicionalSelectivoSimple()
{
    //1. Determinar si un alumno aprueba a reprueba un curso, sabiendo que aprobara si su promedio de tres calificaciones es mayor o igual a 7; reprueba en caso contrario.
    float nota1,nota2,nota3,promedio;
    int cantidadNotas=3;

    printf("Ingrese sus notas:\n");
    printf("Nota 1: ");
    scanf("%f",&nota1);
    printf("Nota 2: ");
    scanf("%f",&nota2);
    printf("Nota 3: ");
    scanf("%f",&nota3);

    promedio=(nota1+nota2+nota3)/(float)cantidadNotas;

    printf("\nSu pormedio es de: %.2f, ",promedio);
    if(promedio>6)
        printf("aprobo el curso.");
    else
        printf("reprobo el curso.");
}
void ejercicio_2_condicionalSelectivoSimple()
{
    //2. En un almac�n se hace un 20% de descuento a los clientes cuya compra supere los $5000 �Cu�l ser� la cantidad que pagara una persona por su compra?
    float montoDeCompra,descuento=0.2,montoConDescuento,limiteDescuento=5000;

    printf("Ingrese el monto de su compra: $");
    scanf("%f",&montoDeCompra);

    montoConDescuento=montoDeCompra;
    if(montoDeCompra>limiteDescuento)//si el monto de la compra es mayor a la cantidad minima para el descuento
        montoConDescuento-=montoConDescuento*descuento;//se aplica el descuento
    printf("El monto a pagar sera de:$%.2f con un descuento del %.2f%%",montoConDescuento,descuento*100);
}
void ejercicio_3_condicionalSelectivoSimple()
{
    /*3. Un obrero necesita calcular su salario semanal, el cual se obtiene de la sig. manera:
    Si trabaja 40 horas o menos se le paga $300 por hora Si trabaja m�s de 40 horas se le paga $300 por cada una de las primeras 40 horas y $400 por cada hora extra.*/
    float salarioFinal=0,salarioMinimo=300,salarioExtra=400;
    int horasTrabajadas=0,horasLimite=40,horasExtrasTrabajadas=0;
    printf("Ingrese cantidad de horas trabajadas: ");
    scanf("%i",&horasTrabajadas);
    if(horasTrabajadas<=horasLimite)
        salarioFinal=horasTrabajadas*salarioMinimo;
    else
    {
        horasExtrasTrabajadas=horasTrabajadas-horasLimite;
        salarioFinal=(horasLimite*salarioMinimo)+(horasExtrasTrabajadas*salarioExtra);
    }
    printf("Su salario sera de $%.2f",salarioFinal);
}
void ejercicio_4_condicionalSelectivoSimple()
{
    //4. Desarrolle un algoritmo que lea dos n�meros y los imprima en forma ascendente
    int numero1,numero2,numeroMenor,numeroMayor;

    printf("Ingrese dos numeros y los ordenare de menor a mayor:\n");
    printf("ingrese el primer numero: ");
    scanf("%i",&numero1);
    printf("Ingrese el segundo numero: ");
    scanf("%i",&numero2);

    if(numero1<numero2)
    {
        numeroMenor=numero1;
        numeroMayor=numero2;
    }
    else
    {
        numeroMenor=numero2;
        numeroMayor=numero1;
    }
    printf("\nLos numero en orden son: %i, %i",numeroMenor,numeroMayor);
}
void ejercicio_5_condicionalSelectivoSimple()
{
    //5. Hacer un algoritmo que calcule el total a pagar por la compra de camisas. Si se compran tres camisas o m�s se aplica un descuento del 20% sobre el total de la compra
    //y si son menos de tres camisas un descuento del 10%
    float descuentoMinorista=0.1,descuentoMayorista=0.2,precioCamisa,precioFinalVenta=0;
    int cantidadCamisasCompradas,minimoDeCamisasXmayorista=3;
    printf("Ingrese cantidad de camisas compradas: ");
    scanf("%i",&cantidadCamisasCompradas);
    printf("Ingrese el precio unitario de las camisas: $");
    scanf("%f",&precioCamisa);
    precioFinalVenta=cantidadCamisasCompradas*precioCamisa;
    if(cantidadCamisasCompradas>=minimoDeCamisasXmayorista)//si la cantidad de camisas es mayor o igual a la cantidad minima del descuento para moyoristas
    {
        precioFinalVenta-=precioFinalVenta*descuentoMayorista;
        printf("\nEl precio Final de venta es de: $%.2f con el %.2f%% de descuento",precioFinalVenta,descuentoMayorista*100);
    }
    else//si la cantidad de camisas es menor a la cantidad tope de precio minorista
    {
        precioFinalVenta-=precioFinalVenta*descuentoMinorista;
        printf("\nEl precio Final de venta es de: $%.2f con el %.2f%% de descuento",precioFinalVenta,descuentoMinorista*100);
    }
}
///Problemas Condicionales Selectivos Compuestos
void ejercicio_1_condicionalSelectivoCompuesto()
{
    //1. Leer 2 n�meros; si son iguales que los multiplique, si el primero es mayor que el segundo que los reste y si no que los sume
    int numero1,numero2,resultado=0;
    printf("Ingrese dos numeros para luego hacer el calculo: \n");
    printf("Numero1: ");
    scanf("%i",&numero1);
    printf("Numero 2: ");
    scanf("%i",&numero2);
    if(numero1==numero2)
    {
        resultado=numero1*numero2;
        printf("Los numeros son iguales, el resultado de la multiplicacion");
    }
    if(numero1>numero2)
    {
        resultado=numero1-numero2;
        printf("El primer numero es mayor que el segundo, el resultado de la resta");
    }
    if(numero1<numero2)
    {
        resultado=numero1+numero2;
        printf("El primer numero es menor que el segundo, el resultado de la suma");
    }
    printf(" es de: %i",resultado);
}
