#include<stdio.h>
#include<math.h>
int main(){
	int NumeroBinario,exponente,residuo,decimal;
	printf("Ingresa un numero binario: ");
	scanf("%d",&NumeroBinario);
	exponente = 0,decimal = 0;
	while(NumeroBinario!=0){
		residuo=NumeroBinario%10;
		NumeroBinario=NumeroBinario/10;
		printf("\nSeccion del numero Binario actual: %d",NumeroBinario);
		printf("\nResiduo de la division #%d entre 10 es: %d",exponente+1,residuo);
		printf("\nValor del exponente: %d \n",exponente);
		printf("operacion: %d + %d * 2 Exp %d ",decimal,residuo,exponente);
		decimal=decimal+residuo*(pow(2,exponente));
		printf("\nDecimal: %d\n",decimal);
		exponente++;
	}
	printf("\n Resultado: %d",decimal);
	return 0;
}
