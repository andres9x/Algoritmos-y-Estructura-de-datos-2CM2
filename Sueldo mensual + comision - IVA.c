#include <stdio.h>

int main()
{
    float SueldoMensual, VentasMensuales;
    float IngresoMensual, Comision;
    
    printf("Sueldo Mensual\n");
    printf("¿Cual es tu sueldo mensual?\n"); 
    scanf("%f", &SueldoMensual);
    printf("¿Cuanto vendiste en el mes?\n");
    scanf("%f", &VentasMensuales);
    Comision=VentasMensuales*0.04;
    printf("\nTus comisiones del mes son: $");
    printf("%f", Comision);
    
    IngresoMensual=0.84*(SueldoMensual+Comision);
    
    printf("\nTu ingreso mensual fuera de impuestos (IVA) es: $");
    printf("%f", IngresoMensual);

    

    return 0;
}
