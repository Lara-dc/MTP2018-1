//Lara Dias Cabral 11721EAU009

#include <stdio.h>

int main()
{
    int i = 0;
	int cumulativa = 0;
	char bits[256];  
	scanf("%s", bits);
	getchar();
	
	while(bits[i])
	{
		
		if(bits[i] >= 48 && bits[i] <= 57) // verifica se o caractere atual é um algarismo
		{
			bits[i] = bits[i] - '0'; //converte char para int 
			
			cumulativa = cumulativa * 10 + bits[i]; //compõe o numero usando cada algarismo
			
		}
		
		i++;
	}
	printf("\n O numero digitado e: %d", cumulativa);
	getch();
	
	return 0;
}
