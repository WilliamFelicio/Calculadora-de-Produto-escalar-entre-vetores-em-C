/* Created by: William Felicio dos Santos */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float vetorv[3], vetoru[3], vetorw[3], escalar=0;
  int v, u, w;
  char coord[3];
  coord[0] = 'x';
  coord[1] = 'y';
  coord[2] = 'z';

printf("PARA DESCOBRIR O PRODUTO ESCALAR ENTRE DOIS VETORES, SIGA OS PASSOS ABAIXO:\n");
printf("DIGITE AS COORDENADAS DO  PRIMEIRO VETOR (V):\n\n");

  for(v = 0; v<3; v++){
	printf("coordenada[%c]:", coord[v]);
    scanf("%f", &vetorv[v]);
  }

printf("\nAs coordenadas de V sao:");

  for(v = 0; v<3; v++){
	printf("\ncoordenada[%c] = %f", coord[v], vetorv[v]);
  }

printf("\n\nDIGITE AS COORDENADAS DO SEGUNDO VETOR (U):\n\n");

  for(u = 0; u<3; u++){
	printf("coordenada[%c]", coord[u]);
    scanf("%f", &vetoru[u]);
  }

printf("\nAs coordenadas de U sao:");

  for(u = 0; u<3; u++){
    printf("\ncoordenada[%c] = %f", coord[u], vetoru[u]);
  }

for(w = 0;w<3;w++){
vetorw[0]= vetorv[0]*vetoru[0];
vetorw[1]= vetorv[1]*vetoru[1];
vetorw[2]= vetorv[2]*vetoru[2];
}

escalar=vetorw[0]+vetorw[1]+vetorw[2];

printf("\n\nO PRODUTO ESCALAR ENTRE OS DOIS VETORES DIGITADOS E = %f\n", escalar);

printf("\nFoi realizado a seguinte operacao: v.u= Vx.Ux + Vy.Uy + Vz.Uz \n\n Vx=(%f) x Ux=(%f) = %f\n Vy=(%f) x Uy=(%f) = %f\n Vz=(%f) x Uz=(%f) = %f\n\n%f + %f + %f = ESCALAR = %f \n\n", vetorv[0], vetoru[0], vetorw[0], vetorv[1], vetoru[1], vetorw[1], vetorv[2], vetoru[2], vetorw[2], vetorw[0], vetorw[1], vetorw[2], escalar);


return 0;

}
