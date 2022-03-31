#include <stdio.h>
#include <math.h>

int BinariosActivos(int TamBinario, int Decimal){
	for (;;TamBinario++){
		if (pow(2,TamBinario) >= Decimal){
			break;
		}
	}
	
	if(pow(2,TamBinario) > Decimal){
		TamBinario--;
	}
	
	return TamBinario;
}

int main(int argc, char *argv[]) {
	int Decimal = 0;
	printf("Ingrese el numero decimal: ");
	scanf("%d", &Decimal);
	
	int Resultado = Decimal;
	int TamanioBinario = 0;
	int Calc = 0;
	TamanioBinario = BinariosActivos(TamanioBinario,Decimal);
	int ArrayBinario[TamanioBinario];
	
	int j = sizeof(ArrayBinario)/sizeof(ArrayBinario[0]);
	for (; j >= 0 ;j--){
		ArrayBinario[j] = 0;
	}
	
	ArrayBinario[TamanioBinario] = 1;
	printf("PocisionBinariaActiva = %d \n", TamanioBinario);
	Calc = pow(2,TamanioBinario);
	printf("Valor en decimal del binario activo = %d \n", Calc);
	Resultado = Resultado - Calc;
	
	int index = 0;
	int PocisionBinariaActiva = 0;
	while(Resultado != 0){
		PocisionBinariaActiva = BinariosActivos(index,Resultado);
		ArrayBinario[PocisionBinariaActiva] = 1;
		printf("PocisionBinariaActiva = %d \n", PocisionBinariaActiva);
		Calc = pow(2,PocisionBinariaActiva);
		printf("Valor en decimal del binario activo = %d \n", Calc);
		Resultado = Resultado - Calc;
	}
	
	printf("\n --> Valor %d en Binario: ",Decimal);
	int i = sizeof(ArrayBinario)/sizeof(ArrayBinario[0]);
	for (; i >= 0 ;i--){
		printf("%d ", ArrayBinario[i] );
	}
	
	return 0;	
}

