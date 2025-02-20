#include <stdio.h>  

     int main(){
       float temperatura, umidade;
       unsigned int estoque, estoqueminimo = 200;
 
    printf("entre com a temperatura: \n");
      scanf("%f", &temperatura);

    printf("entre com a umidade:   \n");
      scanf("%f", &umidade);

    printf("entre com o estoque: \n");
      scanf("%u", &estoque);

      if (temperatura > 30){
printf("temperatura esta alta. \n");
      }
else{
printf("temperatura esta normal. \n");

}

if (umidade > 50){
    printf("umidade esta critica! \n");
}else{
    printf("umidade esta dentro dos limites. \n");
}

if (estoque < estoqueminimo){
printf("estoque abaixo do minimo! \n");
}else{
    printf("estoque padrao. \n");
}

     }