#include<stdio.h>
#include<conio.h>
main()
{
      int maior, num=1;
      int i;

      printf("Digite um numero ou digite 0 para sair...: ");
      scanf("%d",&num);
      maior=num;
       
       
       while(num <= 0) {
       	
       	
	   
    	for( i = 0; i <=3 ; i++){
    
           printf("Digite um numero ou digite 0 para sair...: ");
           scanf("%d",&num);

           if(num>maior)
           {
                maior=num;
           }
}
}
      printf("O maior numero e...: %d",maior);

      getche();
}
