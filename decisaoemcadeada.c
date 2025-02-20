#include <stdio.h>

int main(){
     
    int idade;

    printf("difite sua idade:");
     scanf("%d", &idade);

     //criança < 12
    //adolecente  12 <= x < 18 
   //adulto 18 <= x < 60
  // idoso > 60

  if (idade < 12){
    printf("voçe e criança! \n");
  } else if (idade >= 12 && idade < 18){
     printf("voçe é um adolecente! \n");
  } else if (idade >= 18 && idade < 60 ){
     printf("voçe e um adulto! \n");
  } else { 
    printf("voçe ja e um idoso! \n");
  }

}