#include <stdio.h>
#include <stdlib.h>
///Problemas secuenciales
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
void ejercicio_2_condicionalSelectivoCompuesto();
///Problemas con repeticiones
void ejercicio_1_conRepeticion();
void ejercicio_2_conRepeticion();
void ejercicio_3_conRepeticion();
void ejercicio_4_conRepeticion();
void ejercicio_5_conRepeticion();
void ejercicio_6_conRepeticion();
int main()
{
    int problema,ejercicio;
    do
    {
        system("cls");
        printf("\t\t\t\t\tTrabajo Practico N%c0: Inicial",167);
        printf("\n\n1.Problemas Secuenciales.");
        printf("\n2.Problemas Condicionales Selectivos Simples.");
        printf("\n3.Problemas Condicionales Selectivos Compuestos.");
        printf("\n4.Problemas con repeticiones.");
        printf("\n0. Salir.");
        printf("\n\nElija el tipo de ejercicio que desa resolver: [ ]\b\b");
        scanf("%i",&problema);
        switch(problema)
        {
        case 1:///Problemas secuenciales
            do
            {
                system("cls");
                printf("\t\t\t\t\tTrabajo Practico N%c0: Inicial",167);
                printf("\n\nProblemas Secuenciales:");
                printf("\n1. Invertir su capital en un banco.");
                printf("\n2. Descuento en una tienda.");
                printf("\n3. Porcentaje de hombres y mujeres.");
                printf("\n0. Atras.");
                printf("\n\nQue ejercio desea resolver? [ ]\b\b");
                scanf("%i",&ejercicio);
                switch(ejercicio)
                {
                case 1:
                    system("cls");
                    printf("\t\t\t\t\tTrabajo Practico N%c0: Inicial\n\n",167);
                    ejercicio_1_secuencial();
                    printf("\n\n");
                    system("pause");
                    break;
                case 2:
                    system("cls");
                    printf("\t\t\t\t\tTrabajo Practico N%c0: Inicial\n\n",167);
                    ejercicio_2_secuencial();
                    printf("\n\n");
                    system("pause");
                    break;
                case 3:
                    system("cls");
                    printf("\t\t\t\t\tTrabajo Practico N%c0: Inicial\n\n",167);
                    ejercicio_3_secuencial();
                    printf("\n\n");
                    system("pause");
                    break;
                }
            }while(ejercicio!=0);

            break;

        case 2:///Problemas Condicionales Selectivos Simples
            do
            {
                system("cls");
                printf("\t\t\t\t\tTrabajo Practico N%c0: Inicial",167);
                printf("\n\nProblemas Condicionales Selectivos Simples:");
                printf("\n1. Determinar si un alumno aprueba a reprueba un curso.");
                printf("\n2. Si tendre descuento en la compra de un almacen.");
                printf("\n3. Calcular el salario semanal de un obrero.");
                printf("\n4. Ordenar dos numeros de forma acendente.");
                printf("\n5. Calcular descuento en una tienda de camisas.");
                printf("\n0. Atras.");
                printf("\n\nQue ejercio desea resolver? [ ]\b\b");
                scanf("%i",&ejercicio);
                switch(ejercicio)
                {
                case 1:
                    system("cls");
                    printf("\t\t\t\t\tTrabajo Practico N%c0: Inicial\n\n",167);
                    ejercicio_1_condicionalSelectivoSimple();
                    printf("\n\n");
                    system("pause");
                    break;
                case 2:
                    system("cls");
                    printf("\t\t\t\t\tTrabajo Practico N%c0: Inicial\n\n",167);
                    ejercicio_2_condicionalSelectivoSimple();
                    printf("\n\n");
                    system("pause");
                    break;
                case 3:
                    system("cls");
                    printf("\t\t\t\t\tTrabajo Practico N%c0: Inicial\n\n",167);
                    ejercicio_3_condicionalSelectivoSimple();
                    printf("\n\n");
                    system("pause");
                    break;
                case 4:
                    system("cls");
                    printf("\t\t\t\t\tTrabajo Practico N%c0: Inicial\n\n",167);
                    ejercicio_4_condicionalSelectivoSimple();
                    printf("\n\n");
                    system("pause");
                    break;
                case 5:
                    system("cls");
                    printf("\t\t\t\t\tTrabajo Practico N%c0: Inicial\n\n",167);
                    ejercicio_5_condicionalSelectivoSimple();
                    printf("\n\n");
                    system("pause");
                    break;
                }
            }while(ejercicio!=0);

            break;
        case 3:///Problemas Condicionales Selectivos Compuestos
            do
            {
                system("cls");
                printf("\t\t\t\t\tTrabajo Practico N%c0: Inicial",167);
                printf("\n\nProblemas Condicionales Selectivos Compuestos:");
                printf("\n1. Leer dos numeros y realizar una ecuacion.");
                printf("\n2. Leer 3 numeros diferentes y mostrar el mayor.");
                printf("\n0. Atras.");
                printf("\n\nQue ejercio desea resolver? [ ]\b\b");
                scanf("%i",&ejercicio);
                switch(ejercicio)
                {
                case 1:
                    system("cls");
                    printf("\t\t\t\t\tTrabajo Practico N%c0: Inicial\n\n",167);
                    ejercicio_1_condicionalSelectivoCompuesto();
                    printf("\n\n");
                    system("pause");
                    break;
                case 2:
                    system("cls");
                    printf("\t\t\t\t\tTrabajo Practico N%c0: Inicial\n\n",167);
                    ejercicio_2_condicionalSelectivoCompuesto();
                    printf("\n\n");
                    system("pause");
                    break;
                }
            }while(ejercicio!=0);

            break;
        case 4:///Problemas con repeticiones
            do
            {
                system("cls");
                printf("\t\t\t\t\tTrabajo Practico N%c0: Inicial",167);
                printf("\n\nProblemas con repeticion:");
                printf("\n1. Calcular el promedio de 7 notas.");
                printf("\n2. Leer 10 numeros y obtener su cubo y su cuarta.");
                printf("\n3. Leer 10 numeros e imprimir solamente los numeros positivos.");
                printf("\n4. Leer 15 numeros negativos y convertirlos en positivos.");
                printf("\n5. Sacar pormedio de 40 notas y la nota mas chica.");
                printf("\n6. Mostrar tabla de multiplicacion.");
                printf("\n0. Atras.");
                printf("\n\nQue ejercio desea resolver? [ ]\b\b");
                scanf("%i",&ejercicio);
                switch(ejercicio)
                {
                case 1:
                    system("cls");
                    printf("\t\t\t\t\tTrabajo Practico N%c0: Inicial\n\n",167);
                    ejercicio_1_conRepeticion();
                    printf("\n\n");
                    system("pause");
                    break;
                case 2:
                    system("cls");
                    printf("\t\t\t\t\tTrabajo Practico N%c0: Inicial\n\n",167);
                    ejercicio_2_conRepeticion();
                    printf("\n\n");
                    system("pause");
                    break;
                case 3:
                    system("cls");
                    printf("\t\t\t\t\tTrabajo Practico N%c0: Inicial\n\n",167);
                    ejercicio_3_conRepeticion();
                    printf("\n\n");
                    system("pause");
                    break;
                case 4:
                    system("cls");
                    printf("\t\t\t\t\tTrabajo Practico N%c0: Inicial\n\n",167);
                    ejercicio_4_conRepeticion();
                    printf("\n\n");
                    system("pause");
                    break;
                case 5:
                    system("cls");
                    printf("\t\t\t\t\tTrabajo Practico N%c0: Inicial\n\n",167);
                    ejercicio_5_conRepeticion();
                    printf("\n\n");
                    system("pause");
                    break;
                case 6:
                    system("cls");
                    printf("\t\t\t\t\tTrabajo Practico N%c0: Inicial\n\n",167);
                    ejercicio_6_conRepeticion();
                    printf("\n\n");
                    system("pause");
                    break;
                }
            }while(ejercicio!=0);
            break;
        }
    }while(problema!=0);


    return 0;
}
///Problemas Secuenciales
void ejercicio_1_secuencial()
{
    //1. Suponga que un individuo desea invertir su capital en un banco y desea saber cuánto dinero ganará después de un mes si el banco paga a razón de 2% mensual.
    float dinero,ganancia;
    printf("Ingrese el monto de su cuenta bancaria: $");
    scanf("%f",&dinero);
    ganancia=dinero+(dinero*0.02);//le sumo el 20% de ganancia
    printf("\nDespues de un mes su monto sera de: $%.2f",ganancia);
}
void ejercicio_2_secuencial()
{
    //2. Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea saber cuánto deberá pagar finalmente por su compra.
    float dinero,precioFinal;
    printf("Ingrese el monto a pagar: $");
    scanf("%f",&dinero);
    precioFinal=dinero-(dinero*0.15);//le resto el descuento del 15%
    printf("\nLa compra con el 15%% de descuenta sera de: $%.2f",precioFinal);

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
    porcentajeHombre=(((float)hombres/(float)totalPersonas)*100);//saco la cantidad de porcentaje de hombre sobre el total
    porcentajeMujeres=(((float)mujeres/(float)totalPersonas)*100);//saco la cantidad de porcentaje de mujeres sobre el total
    printf("\nEl porcentaje de Hombres es del: %.2f%%",porcentajeHombre);
    printf("\nEl porcentaje de Mujeres es del: %.2f%%",porcentajeMujeres);
}
///Problemas Condicionales Selectivos Simples
void ejercicio_1_condicionalSelectivoSimple()
{
    //1. Determinar si un alumno aprueba a reprueba un curso, sabiendo que aprobara si su promedio de tres calificaciones es mayor o igual a 7; reprueba en caso contrario.
    float nota1,nota2,nota3,promedio;
    int cantidadNotas=3;

    printf("Ingrese sus 3 notas:\n");
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
    if(montoDeCompra>limiteDescuento)//si el monto de la compra es mayor a la cantidad minima para el descuento
    {
        montoConDescuento-=montoConDescuento*descuento;//se aplica el descuento
        printf("El monto a pagar sera de:$%.2f con un descuento del %.2f%%",montoConDescuento,descuento*100);
    }
    else
        printf("El monto a pagar sera de:$%.2f",montoConDescuento);

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
void ejercicio_4_condicionalSelectivoSimple()
{
    //4. Desarrolle un algoritmo que lea dos números y los imprima en forma ascendente
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
    //5. Hacer un algoritmo que calcule el total a pagar por la compra de camisas. Si se compran tres camisas o más se aplica un descuento del 20% sobre el total de la compra
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
    //1. Leer 2 números; si son iguales que los multiplique, si el primero es mayor que el segundo que los reste y si no que los sume
    int numero1,numero2,resultado=0;
    printf("Ingrese dos numeros para luego hacer el calculo: \n");
    printf("Numero 1: ");
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
void ejercicio_2_condicionalSelectivoCompuesto()
{
    //2. Leer tres números diferentes e imprimir el número mayor de los tres.
    int numero1=0,numero2=0,numero3=0,numeroMayor=0;
    printf("Ingrese tres numeros diferes para saber cual es el mayor: ");
    printf("\nNumero 1: ");
    scanf("%i",&numero1);
    numeroMayor=numero1;
    do//se repite hasta que ingrese un numero distinto a primero ingresado
    {
        printf("Numero 2: ");
        scanf("%i",&numero2);
        if(numero2==numero1)
            printf("ERROR: El numero que intenta ingresar ya a sido registrado antes, por favor ingrese un numero distinto.\n");
    }
    while(numero2==numero1);
    if(numero2>numeroMayor)
        numeroMayor=numero2;
    do//se repite hasta que ingreses un numero dintinto al primero y al segundo
    {
        printf("Numero 3: ");
        scanf("%i",&numero3);
        if(numero3==numero1||numero3==numero2)
            printf("ERROR: El numero que intenta ingresar ya a sido registrado antes, por favor ingrese un numero distinto.\n");
    }
    while(numero3==numero1||numero3==numero2);
    if(numero3>numeroMayor)
        numeroMayor=numero3;
    printf("\nEl numero mayor es el: %i",numeroMayor);
}
///Problemas con repeticiones
void ejercicio_1_conRepeticion()
{
    //1. Calcular el promedio de un alumno que tiene 7 calificaciones en la materia de Programación 1
    int i=0,cantidadNotas=7,sumaDeNotas=0;
    int notas[cantidadNotas];
    float promedio=0;
    printf("Ingrese las 7 notas de Programacion para calcular el promedio: \n");
    for(i=0; i<cantidadNotas; i++) //cargo un arreglo con las notas y al mismo tiempo las voy sumando para sacar el promedio
    {
        printf("Nota %i: ",i+1);
        scanf("%i",&notas[i]);
        sumaDeNotas+=notas[i];
    }
    promedio=(float)sumaDeNotas/(float)cantidadNotas;
    printf("El promedio de las %i notas es de: %.2f",cantidadNotas,promedio);
}
void ejercicio_2_conRepeticion()
{
    //2. Leer 10 números y obtener su cubo y su cuarta.
    int cantidadNumeros=10,i;
    int numeros[cantidadNumeros];
    int numerosAlCubo[cantidadNumeros];
    int numerosALaCuarta[cantidadNumeros];
    printf("Ingrese 10 numeros para calcular su cubu y cuarta: \n");
    for(i=0; i<cantidadNumeros; i++) //mientras voy cargando los numeros voy calculando el cubo y la cuarta
    {
        printf("Nota %i: ",i+1);
        scanf("%i",&numeros[i]);
        numerosAlCubo[i]=numeros[i]*numeros[i]*numeros[i];
        numerosALaCuarta[i]=numerosAlCubo[i]*numeros[i];
    }
    printf("\nNumeros ingresados: ");
    for(i=0; i<cantidadNumeros; i++)
    {
        printf("\n%i al cubo es: %i ",numeros[i],numerosAlCubo[i]);
        printf("y a la cuarta es: %i",numerosALaCuarta[i]);
    }
}
void ejercicio_3_conRepeticion()
{
    //3. Leer 10 números e imprimir solamente los números positivos
    int cantidadNumeros=10,i=0;
    int numeros[cantidadNumeros];
    printf("Ingrese un total de %i numeros(positivos o negativos):\n",cantidadNumeros);
    for(i=0; i<cantidadNumeros; i++)
    {
        printf("Numero %i: ",i+1);
        scanf("%i",&numeros[i]);
    }
    printf("\nLos numeros positivos son: ");
    for(i=0; i<cantidadNumeros; i++) //si los numero ingresados son positivos los muestro por pantalla
    {
        if(numeros[i]>=0)
            printf("%i,",numeros[i]);
    }
}
void ejercicio_4_conRepeticion()
{
    //4. Leer 15 números negativos y convertirlos en positivos e imprimir dichos números.
    int cantidadNumeros=15,i=0;
    int numerosNegativos[cantidadNumeros];
    int numerosPositivos[cantidadNumeros];
    printf("Ingrese %i numeros negativos:\n",cantidadNumeros);
    for(i=0; i<cantidadNumeros; i++)
    {
        do
        {
            printf("Numero %i: ",i+1);
            scanf("%i",&numerosNegativos[i]);
            if(numerosNegativos[i]>0)
                printf("ERROR: el numero ingresado no es negativo, por favor ingrese un numero valido.\n");
        }
        while(numerosNegativos[i]>0);
        numerosPositivos[i]=numerosNegativos[i]-numerosNegativos[i]-numerosNegativos[i];
    }
    printf("Los numeros pasados a positivos son: ");
    for(i=0; i<cantidadNumeros; i++)
    {
        printf("%i,",numerosPositivos[i]);
    }
}
void ejercicio_5_conRepeticion()
{
    //5. Suponga que se tiene un conjunto de calificaciones de un grupo de 40 alumnos.
    //Realizar un algoritmo para calcular la calificación promedio y la calificación más baja de todo el grupo.
    int cantidadAlumnos=40,i;
    float promedio,sumaNotas=0,notaMenor=0;
    float notas[cantidadAlumnos];
    printf("Ingrese las notas de los %i alumnos:\n",cantidadAlumnos);
    for(i=0; i<cantidadAlumnos; i++) //cargo las notas de los alumnos y las voy sumando para sacar el promedio luego y encontrar el menor elemento
    {
        printf("Alumno %i: ",i+1);
        scanf("%f",&notas[i]);
        sumaNotas+=notas[i];
        if(i==0)
            notaMenor=notas[i];
        else
        {
            if(notaMenor>notas[i])
                notaMenor=notas[i];
        }
    }
    promedio=sumaNotas/(float)cantidadAlumnos;
    printf("\nEl promedio de las %i notas es de: %.2f",cantidadAlumnos,promedio);
    printf("\nLa nota menor de los alumnos es de: %.2f",notaMenor);
}
void ejercicio_6_conRepeticion()
{
    //6. Calcular e imprimir la tabla de multiplicar de un número cualquiera. Imprimir el multiplicando, el multiplicador y el producto
    int numero,i,maximoTabla=10;
    printf("Ingrese el numero de que tabla desea saber: ");
    scanf("%i",&numero);
    for(i=1; i<maximoTabla+1; i++)
    {
        printf("\n%i x %i = %i",numero,i,numero*i);
    }
}
