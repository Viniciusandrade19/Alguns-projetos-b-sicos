#include <stdio.h>

int main(){

int idade;

printf("digite sua idade");
  scanf("%d", & idade);

//criança < 12
    //adolecente  12 <= x < 18 
   //adulto 18 <= x < 60
  // idoso > 60

  if (idade > 60){
printf("voce e um idoso! \n");
  }else if(idade <= 60 && idade > 18 ){
    printf("voce e um adulto");
  }else if ( idade <= 18 && idade > 12){
    printf("voce e um adolecente! \n");
  }else{
    printf("voce e uma crianca! \n");
  }






}