#include<stdio.h>
#include<stdlib.h>

int main()
{
    int h,i,j,k,temp,A[3][3]={{0}},B[3][3]={{0}},C[3][3]={{0}};

    printf("\n\t\t********************************************");
    printf("\n\t\t* Ingrese los valores de la primera matriz *");
    printf("\n\t\t********************************************");
    printf("\n\n");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("Elemento [%d , %d] : ", i+1, j+1);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n\t\t********************************************");
    printf("\n\t\t* Ingrese los valores de la segunda matriz *");
    printf("\n\t\t********************************************");
    printf("\n\n");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("Elemento [%d , %d] : ", i+1, j+1);
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n\t\t********************************************");
    printf("\n\t\t*         Esta es la primera matriz        *");
    printf("\n\t\t********************************************");
    printf("\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("\t\t     %d", A[i][j]);
        }
    }
    printf("\n\n\t\t********************************************");
    printf("\n\t\t*         Esta es la segunda matriz        *");
    printf("\n\t\t********************************************");
    printf("\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("\t\t      %d", B[i][j]);
        }
    }
    printf("\n\n\nElige el numero la operacion a realizar: \n\n[1] = Suma\n[2] = Resta\n[3] = Multiplicacion\n\n");
    scanf("%d",&h);
    printf("\t\t********************************************");
    printf("\n\t\t*              El resultado es..           *");
    printf("\n\t\t********************************************");
    printf("\n\n");
    {
    if (h==1)
        {
         for(i=0;i<3;i++)
         {
          for(j=0;j<3;j++)
            {
                C[i][j]=A[i][j]+B[i][j];
                printf("\t\t     %d",C[i][j]);
            }
                printf("\t\t\t\n");
         }
        }
    else
        {
        if (h==2)
           {
            for(i=0;i<3;i++)
            {
             for(j=0;j<3;j++)
               {
                 C[i][j]=A[i][j]-B[i][j];
                 printf("\t\t    %d",C[i][j]);
               }
                 printf("\t\t\t\n");
            }
           }
        else
            {
            if (h==3)
                {
                 for(i=0;i<3;i++)
                 {
                  for(k=0;k<3;k++)
                    {
                      temp=0;
                      for(j=0;j<=2;j++)
                      {
                          temp+=A[i][j]*B[j][k];
                          C[i][k]=temp;
                      }
                      printf("\t\t    %d",C[i][k]);
                    }
                      printf("\t\t\t\n");
                 }
                }
            }
        }
        printf("\n");
    }
        system("pause");
        return EXIT_SUCCESS;
}
