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
int main()
{
    ///PROBLEMAS SECUENCIALES
    //ejercicio_1_secuencial();
    //ejercicio_2_secuencial();
    //ejercicio_3_secuencial();
    ///PROBLEMAS SECUENCIALES
    //ejercicio_1_condicionalSelectivoSimple();
    //ejercicio_2_condicionalSelectivoSimple();
    ejercicio_3_condicionalSelectivoSimple();

    return 0;
}
///PROBLEMAS SECUENCIALES
void ejercicio_1_secuencial()
{
    //1. Suponga que un individuo desea invertir su capital en un banco y desea saber cuánto dinero ganará después de un mes si el banco paga a razón de 2% mensual.
    float dinero,ganancia;
   printf("Ingrese el monto de su cuenta bancaria: ");
   scanf("%f",&dinero);
   ganancia=dinero+(dinero*0.02);
   printf("\nDespues de un mes su monto sera de: %.2f",ganancia);
}
void ejercicio_2_secuencial()
{
    //2. Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea saber cuánto deberá pagar finalmente por su compra.
    float dinero,precioFinal;
    printf("Ingrese el monto a pagar: ");
   scanf("%f",&dinero);
   precioFinal=dinero-(dinero*0.15);
   printf("\nLa compra con el 15%% de descuenta sera de: %.2f",precioFinal);

}
void ejercicio_3_secuencial()
{
    //3. Un maestro desea saber qué porcentaje de hombres y que porcentaje de mujeres hay en un grupo de estudiantes.
    int hombres,mujeres,totalPersonas;
    float porcentajeHombre,porcentajeMujeres;
    printf("Ingrese la cantidad de alumnos Hombre: ");
    scanf("%i",&hombres);
    printf("Ingrese la cantidad de alumnos Mujeres: ");
    scanf("%i",&mujeres);
    totalPersonas=mujeres+hombres;
    porcentajeHombre=(((float)hombres/(float)totalPersonas)*100);
    porcentajeMujeres=(((float)mujeres/(float)totalPersonas)*100);
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
    //2. En un almacén se hace un 20% de descuento a los clientes cuya compra supere los $5000 ¿Cuál será la cantidad que pagara una persona por su compra?
    float montoDeCompra,descuento=0.2,montoConDescuento,limiteDescuento=5000;

    printf("Ingrese el monto de su compra: $");
    scanf("%f",&montoDeCompra);

    montoConDescuento=montoDeCompra;
    if(montoDeCompra>limiteDescuento)
        montoConDescuento-=montoConDescuento*descuento;

    printf("El monto a pagar sera de:$%.2f",montoConDescuento);
    if(montoDeCompra>limiteDescuento)
        printf(", con un descuento del 20%%.");
}
void ejercicio_3_condicionalSelectivoSimple()
{
    /*3. Un obrero necesita calcular su salario semanal, el cual se obtiene de la sig. manera:
    Si trabaja 40 horas o menos se le paga $300 por hora Si trabaja más de 40 horas se le paga $300 por cada una de las primeras 40 horas y $400 por cada hora extra.*/
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
