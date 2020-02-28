#include <stdio.h>

int main(){
    int n,a,b,cont2,cont1,cont3;
    scanf("%d",&n);


    for(int i=0;i<n;++i){
    scanf("%d %d",&a,&b);

    if(a<b){//subtract
         cont1 =b - a;
         printf("%d\n",cont1);


    } else if(a>b){//sum

          cont2= a - (b- a);//
          if(cont2%2==0){
            
          }else{

          }

        printf("%d\n",cont2);


    } else if(a=b){
         cont3=0;
         printf("%d\n",cont3);

    }

    }
/*     printf("%d\n",cont1);
     printf("%d\n",cont2);
     printf(" %d\n",cont3);
*/


    return 0;
}
