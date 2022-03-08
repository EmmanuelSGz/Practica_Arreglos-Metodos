#include<iostream>
#include<stdio.h>
#include<math.h>
#include<Windows.h>

using namespace std;
// Define el espaciado dentro de las matrices
#define ESPACIO 50

//Metodo para simular carga del sistema
void simula_cargando()
{
    int s;
    s = 10;
    cout << "\t\t\t Cargando Datos...\n";
    for (int i = 0; i <= 65; i++)
    {
        cout << "|";
        Sleep(s * 1000 / 80);
    }
    cout << "\n\n";
}

// Metodo para la tabla de combustibles
void tabla_distancia() 
{
    char destinos_l1[][ESPACIO] = { "Santo Domingo","La Romana","Higuey" };
    // Declaracion de datos de la tabla
    double distancia_c1[] = { 80.800, 194.200, 237.000 };
    double distancia_c2[] = { 116.600, 230.100, 272.900 };
    double distancia_c3[] = { 154.600, 268.100, 310.900 };
    double distancia_c4[] = { 214.900, 328.400, 371.200 };

    // Recorre la longitud de la matriz
    int longitud = sizeof(destinos_l1) / sizeof(destinos_l1[0]);

    // Justifica los datos impresos, donde valores negativos justifican a la izquierda
    int anchoColumna_ini = -20, anchoColumna_sec = -10;

    // Imprime los encabezados de la tabla
    printf("+--------------------+----------+----------+----------+----------+\n");
    printf("|%*s|%*s|%*s|%*s|%*s|\n", anchoColumna_ini, "DISTANCIAS(KM)", anchoColumna_sec, "Bonao",
        anchoColumna_sec, "La Vega", anchoColumna_sec, "Santiago", anchoColumna_sec, "Mao");
    printf("+--------------------+----------+----------+----------+----------+\n");

    // Imprime las matrices 
    for (int x = 0; x < longitud; x++) {
        printf("|%*s|%*.3f|%*.3f|%*.3f|%*.3f|\n", anchoColumna_ini, destinos_l1[x], anchoColumna_sec, distancia_c1[x], anchoColumna_sec,
            distancia_c2[x], anchoColumna_sec, distancia_c3[x], anchoColumna_sec, distancia_c4[x]);
    }
    printf("+--------------------+----------+----------+----------+----------+\n\n");
}

// Metodo para la tabla de combustibles
void tabla_combustible(float r) 
{
    char destinos_l1[][ESPACIO] = { "Santo Domingo","La Romana","Higuey" };
    // Declaracion de datos de la tabla
    double distancia_c1[] = { 80.800, 194.200, 237.000 };
    double distancia_c2[] = { 116.600, 230.100, 272.900 };
    double distancia_c3[] = { 154.600, 268.100, 310.900 };
    double distancia_c4[] = { 214.900, 328.400, 371.200 };

    // Recorre la longitud de la matriz
    int longitud = sizeof(destinos_l1) / sizeof(destinos_l1[0]);

    // Justifica los datos impresos, donde valores negativos justifican a la izquierda (J*)  
    int anchoColumna_ini = -20, anchoColumna_sec = -10;
    printf("+--------------------+----------+----------+----------+----------+\n");
    printf("|%*s|%*s|%*s|%*s|%*s|\n", anchoColumna_ini, "COMBUSTIBLE(KM/GAL)", anchoColumna_sec, "Bonao",
        anchoColumna_sec, "La Vega", anchoColumna_sec, "Santiago", anchoColumna_sec, "Mao");
    printf("+--------------------+----------+----------+----------+----------+\n");

    // Imprime las matrices 
    for (int i = 0; i < longitud; i++) {
        printf("|%*s|%*.2f|%*.2f|%*.2f|%*.2f|\n", anchoColumna_ini, destinos_l1[i], anchoColumna_sec,
            distancia_c1[i] = distancia_c1[i] / r, anchoColumna_sec,
            distancia_c2[i] = distancia_c2[i] / r, anchoColumna_sec,
            distancia_c3[i] = distancia_c3[i] / r, anchoColumna_sec,
            distancia_c4[i] = distancia_c4[i] / r);
    }
    printf("+--------------------+----------+----------+----------+----------+\n");
}

// Metodo para la tabla de cargas
void tabla_cargas(float r, float c) 
{
    char destinos_l1[][ESPACIO] = { "Santo Domingo","La Romana","Higuey" };
    // Declaracion de datos de la tabla
    double distancia_c1[] = { 80.800, 194.200, 237.000 };
    double distancia_c2[] = { 116.600, 230.100, 272.900 };
    double distancia_c3[] = { 154.600, 268.100, 310.900 };
    double distancia_c4[] = { 214.900, 328.400, 371.200 };

    // Recorre la longitud de la matriz
    int longitud = sizeof(destinos_l1) / sizeof(destinos_l1[0]);
    // Justifica los datos impresos, donde valores negativos justifican a la izquierda (J*)  
    int anchoColumna_ini = -20, anchoColumna_sec = -10;
    // Aplica el resultado de rendimiento dentro del metodo
    for (int i = 0; i < longitud; i++)
    {
        distancia_c1[i] = distancia_c1[i] / r, 
        distancia_c2[i] = distancia_c2[i] / r, 
        distancia_c3[i] = distancia_c3[i] / r, 
        distancia_c4[i] = distancia_c4[i] / r;
    }

    printf("+--------------------+----------+----------+----------+----------+\n");
    printf("|%*s|%*s|%*s|%*s|%*s|\n", anchoColumna_ini, "CARGA(GAL)", anchoColumna_sec, "Bonao",
        anchoColumna_sec, "La Vega", anchoColumna_sec, "Santiago", anchoColumna_sec, "Mao");
    printf("+--------------------+----------+----------+----------+----------+\n");

    // Imprime las matrices 
    for (int i = 0; i < longitud; i++) {
        printf("|%*s|%*.2f|%*.2f|%*.2f|%*.2f|\n", anchoColumna_ini, destinos_l1[i], anchoColumna_sec,
            distancia_c1[i] = distancia_c1[i] / c, anchoColumna_sec,
            distancia_c2[i] = distancia_c2[i] / c, anchoColumna_sec,
            distancia_c3[i] = distancia_c3[i] / c, anchoColumna_sec,
            distancia_c4[i] = distancia_c4[i] / c);
    }
    printf("+--------------------+----------+----------+----------+----------+\n");
}
// Metodo para la tabla de costos
void tabla_costos(float r,float p)
{
    char destinos_l1[][ESPACIO] = { "Santo Domingo","La Romana","Higuey" };
    // Declaracion de datos de la tabla
    double distancia_c1[] = { 80.800, 194.200, 237.000 };
    double distancia_c2[] = { 116.600, 230.100, 272.900 };
    double distancia_c3[] = { 154.600, 268.100, 310.900 };
    double distancia_c4[] = { 214.900, 328.400, 371.200 };

    // Recorre la longitud de la matriz
    int longitud = sizeof(destinos_l1) / sizeof(destinos_l1[0]);
    // Aplica el resultado de rendimiento dentro del metodo
    for (int x = 0; x < longitud; x++)
    {
        distancia_c1[x] = distancia_c1[x] / r,
        distancia_c2[x] = distancia_c2[x] / r,
        distancia_c3[x] = distancia_c3[x] / r,
        distancia_c4[x] = distancia_c4[x] / r;
    }

    // Justifica los datos impresos, donde valores negativos justifican a la izquierda (J*)  
    int anchoColumna_ini = -20, anchoColumna_sec = -10;
    printf("+--------------------+----------+----------+----------+----------+\n");
    printf("|%*s|%*s|%*s|%*s|%*s|\n", anchoColumna_ini, "COSTO(GAL)", anchoColumna_sec, "Bonao",
        anchoColumna_sec, "La Vega", anchoColumna_sec, "Santiago", anchoColumna_sec, "Mao");
    printf("+--------------------+----------+----------+----------+----------+\n");

    // Imprime las matrices 
    for (int i = 0; i < longitud; i++) {
        printf("|%*s|%*.2f|%*.2f|%*.2f|%*.2f|\n", anchoColumna_ini, destinos_l1[i], anchoColumna_sec,
            distancia_c1[i] = distancia_c1[i] * p, anchoColumna_sec,
            distancia_c2[i] = distancia_c2[i] * p, anchoColumna_sec,
            distancia_c3[i] = distancia_c3[i] * p, anchoColumna_sec,
            distancia_c4[i] = distancia_c4[i] * p);
    }
    printf("+--------------------+----------+----------+----------+----------+\n");
}

int main()
{
    // Declaracion de variables
    int tipo_comb;
    float precio, capacidad, rendimiento;

    // Llamada al metodo para Tabla de Distancias
    tabla_distancia();

    // Ingreso de los datos para calcular
    cout << "\t\t Datos Del Combustible\n";
    cout << "\t\t ---------------------\n\n";
    cout << "Tipos de Combustible\n";
    cout << "Ingrese [1]Regular o [2]Premium: ";
    cin >> tipo_comb; cout << "\n";
    cout << "Ingrese el precio del combustible: ";
    cin >> precio; cout << "\n";

    cout << "\t\t Datos Del Vehiculo\n";
    cout << "\t\t ------------------\n\n";
    cout << "Ingrese el redimiento del vehiculo (Km/Gal): ";
    cin >> rendimiento; cout << "\n";
    cout << "Ingrese la capacidad del tanque de combustible (Gal): ";
    cin >> capacidad; cout << "\n";

    // Llama la simulacion de carga
    simula_cargando();

    // Llamada al metodo para Tabla de Combustibles
    tabla_combustible(rendimiento);
    // Llamada al metodo para Tabla de Cargas
    tabla_cargas(rendimiento,capacidad);
    // Llamada al metodo para Tabla de Costo
    tabla_costos(rendimiento,precio);

    return 0;
}