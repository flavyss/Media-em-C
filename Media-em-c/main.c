#include <stdio.h>
#include <stdlib.h>

int main(){
    //Setando variaveis para as notas e media
    float nota1, nota2, media;
    int i, count; 

    //setando quantas medias queremos pegar
    printf("Quantas Medias Serão Consultadas: ");
    scanf("%d", &count);

    //inicando um laço de repetiução com base na quantidade de medias que o usuario fornece
    for (i = 0; i < count; i++){

        //capturando as informações com as notas do usuario
        printf("Digite as 2 notas do aluno:\n");
        scanf("%f %f", &nota1, &nota2);


        //validando as informações do usuario
        for(;;){       //o for serrve pra so deixar ele sair daqui quando as informações se encaixarem nos padrões reais setados por nos

            if (nota1 > 10 || nota1 < 0 || nota2 > 10 || nota2 < 0){   //validando nota maxima e minima 
                //apenas se escreverem errado no scan de cima
                //capturando as informações com as notas do usuario corretnas
                printf("Digite as 3 notas do aluno CORRETAMENTE:\n");
                scanf("%f %f ", &nota1, &nota2);
            }
            //dizendo que se estiver tudo certo com os inputs a cima, podemos sair do loop 
            else{
                break;
            }

        }

        // calculando a media com base nas informações fornecidas
        media=( nota1 + nota2 )/ 2;

        //validando, quem pontou acima de 7, passou, se não reprovou
        if (media >= 7){
            printf("O aluno foi aprovado com media : %.2f \n", media);
        }
        else{
            printf("O aluno foi reprovado com media : %.2f \n", media);
        }
    
    }
    
    //somos educados, vamos dar um tchau
    printf("Obrigado por ultilizar o programa\n");

    return 0;
}

//fim do programa!