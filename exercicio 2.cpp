#include <stdio.h>
int main(){
  int maior,menor,valor;
    printf("Digite um numero:");
  	  scanf("%d",&valor);
  	  maior = valor;
  	  menor = valor;
  	  printf("Digite outro numero:");
  	  scanf("%d",&valor);
  	  if(valor>maior){
  	  	maior = valor;
	}	
  	  if(valor<menor){
  	  	menor = valor;
	}	
	printf("Digite outro numero:");
    scanf("%d",&valor);
	    if(valor>maior){
	    	maior = valor;
		}
	    if(valor<menor){
	    	menor = valor;
		}
	printf("Digite outro numero:");
    scanf("%d",&valor);
		    if(valor>maior){
		    	maior = valor;
			}
		    if(valor<menor){
		    	menor = valor;
			}
	printf("Digite outro numero:");
    scanf("%d",&valor);
    if(valor>maior){
    	maior = valor;
	}
    if(valor<menor){
    	menor = valor;
	}
	printf("Digite outro numero:");
    scanf("%d",&valor);
    if(valor>maior){
    	maior = valor;
	}
    if(valor<menor){
    	menor = valor;
	}
    printf("maior = %d e menor = %d",maior,menor);
    return 0;
}
