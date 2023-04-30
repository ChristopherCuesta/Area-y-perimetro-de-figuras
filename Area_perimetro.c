#include <stdio.h>

float area_circulo(float radioa){// rapdio del area
    float areac;//c == circulo
    areac = 3.14*radioa*radioa;
    return areac;
}
float perimetro_circulo(float radiop){//radio del perimetro
    float perimetroc;//c== circulo
    perimetroc = 2*3.14*radiop;
    return perimetroc;
}

float area_triangulo(float baseAT, float alturaAT){//at= area triangulo
    float areaT;
    areaT = (baseAT*alturaAT)/2;
    return areaT;
}

float perimetro_triangulo(float lado1t, float lado2t, float lado3t){//pt==perimetro triangulo
    float perimetroT;
    perimetroT = lado1t + lado2t + lado3t;
    return perimetroT;
}

float area_rectangulo(float baseaR, float alturaaR){
    float areaR;
    areaR = baseaR * alturaaR;
    return areaR;
}

float perimetro_rectangulo(float basepR, float alturapR){
    float perimetroR;
    perimetroR = (basepR + alturapR)*2;
    return perimetroR;
}

float area_cuadrado(float ladoaC){
    float areaCu;
    areaCu = ladoaC * ladoaC;
    return areaCu;
}

float perimetro_cuadrado(float ladoPc){
    float perimetroCu;
    perimetroCu = (ladoPc)*4;
    return perimetroCu;
}

float area_trapecio(float BasemaT, float basemaT, float alturaTr){// Basemat= basemayor del area trapecio, la b menor representa la base menor.
    float areaTra;
    areaTra = ((BasemaT+basemaT)*alturaTr)/2;
    return areaTra;
}

float perimetro_trapecio(float BasempT,float basempT,float ladopT){
    float perimetroTra;
    perimetroTra = basempT + BasempT + ladopT + ladopT;
    return perimetroTra;
}

void imprimir_trapecio(){
    float Basemt, basemt, alturatr, ladot;
    float areatrapecio;
    float perimetrotrapecio;
    printf("\nIngrese la base mayor del trapecio: ");
    scanf("%f", &Basemt);
    printf("\nIngrese la base menor del trapecio: ");
    scanf("%f", &basemt);
    printf("\nIngrese la altura del trapecio: ");
    scanf("%f", &alturatr);
    printf("\nIngrese la medida del lado del trapecio: ");
    scanf("%f", &ladot);
    areatrapecio = area_trapecio(Basemt, basemt, alturatr);
    perimetrotrapecio = perimetro_trapecio(Basemt, basemt, ladot);
    printf("\nEl area del trapecio es %.2f", areatrapecio);
    printf("\nEl perimetro del trapecio es %.2f\n", perimetrotrapecio);
}

void imprimir_cuadrado(){
    float ladoc;
    float areacuadrado;
    float perimetrocuadrado;
    printf("\n Ingrese el lado del cuadrado ");
    scanf("%f", &ladoc);
    areacuadrado = area_cuadrado(ladoc);
    perimetrocuadrado = perimetro_cuadrado(ladoc);
    printf("\nEl area del cuadrado es %.2f", areacuadrado);
    printf("\nEl perimetro del cuadrado es %.2f\n", perimetrocuadrado);
}

void imprimir_rectangulo(){
    float baser, alturar;
    float perimetrorectangulo;
    float arearectangulo;
    printf("\nIngrese la base del rectangulo: ");
    scanf("%f", &baser);
    printf("\nIngrese la altura del rectangulo: ");
    scanf("%f", &alturar);
    perimetrorectangulo = perimetro_rectangulo(baser, alturar);
    arearectangulo = area_rectangulo(baser, alturar);
    printf("\nEl area del rectangulo es %.2f", arearectangulo);
    printf("\nEl perimetro del triangulo es %.2f\n", perimetrorectangulo);
}

void imprimir_triangulo(){
    float baset, alturat, ladot1, ladot2, ladot3;
    float areatriangulo;
    float perimetrotriangulo;
    printf("\nIngrese la base del triangulo: ");
    scanf("%f", &baset);
    printf("\nIngrese la altura del triangulo: ");
    scanf("%f", &alturat);
    printf("\nIngrese la medida del primer lado del triangulo: ");
    scanf("%f", &ladot1);
    printf("\nIngrese la medida del segundo lado del triangulo: ");
    scanf("%f", &ladot2);
    printf("\nIngrese la medida del tercer lado de triangulo: ");
    scanf("%f", &ladot3);
    areatriangulo = area_triangulo(baset, alturat);
    perimetrotriangulo = perimetro_triangulo(ladot1, ladot2, ladot3);
    printf("\nEl area del triangulo es %.2f", areatriangulo);
    printf("\nEl perimetro del triangulo es %.2f\n", perimetrotriangulo);
}
void imprimir_circulo(){
    float radioc;
    float areacirculo;
    float perimetrocirculo;
    printf("\nIngrese el radio del circulo: ");
    scanf("%f", &radioc);
    areacirculo = area_circulo(radioc);
    perimetrocirculo = perimetro_circulo(radioc);
    printf("\nEl area del circulo es %.2f", areacirculo);
    printf("\nEl perimetro del circulo es %.2f\n", perimetrocirculo);
}

void menu(){
    int opc;
    printf("\nPrograma de area y perimetro de distintas figuras\n");
    do{
        
        printf("\nSeleccione la opcion de la figura que necesita(solo numero del 1-6)\n");
        printf("1. Circulo\n");
        printf("2. Triangulo\n");
        printf("3. Rectangulo\n");
        printf("4. Cuadrado\n");
        printf("5. Trapecio\n");
        printf("6. Salir\n");
        printf("Escriba la seleccion: ");
        scanf("%d", &opc);
        switch (opc){ 
            case 1:
                imprimir_circulo();
            break;

            case 2:
                imprimir_triangulo();
            break;

            case 3:
                imprimir_rectangulo();
            break;
            
            case 4:
                imprimir_cuadrado();
            break;

            case 5:
                imprimir_trapecio();
            break;

            case 6:
            printf("Saliendo del programa\n");
            break;

            default:
        	printf("\nOpcion invalida. Por favor, seleccione una opcion valida.\n");
            break;
        }
    }while (opc != 6 );
}

int main(){
menu();  
}