#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct carro 
{
    char placa[10], modelo[30];
    int ano;
    float preco, quilometragem[12][4];
}; 
struct carro carros[10];

void preencherDados() 
{
    int i, j, k;
    for(i = 0; i < 10; i++) 
    {
        printf("Insira a placa do carro %d: ", i+1);
        scanf("%s", &carros[i].placa);
        printf("Insira o modelo do carro %d: ", i+1);
        scanf("%s", &carros[i].modelo);
        printf("Insira o ano do carro %d: ", i+1);
        scanf("%d", &carros[i].ano);
        printf("Insira o preço do carro %d: R$", i+1);
        scanf("%f", &carros[i].preco);
        for(j = 0; j < 12; j++)
        {
            for(k = 0; k < 4; k++) 
            {
                printf("Insira a quilometragem da semana %d no mês %d do carro %d: ", k+1, j+1, i+1);
                scanf("%f", &carros[i].quilometragem[j][k]);
            }
        }
        printf("\n");
    }
}

void calcularQuilometragem() 
{
    int i, j, k;
    float mediaMensal = 0, mediaAnual = 0, mediaGeral = 0;
    for(i = 0; i < 10; i++) 
    {
        printf("\nDados de Quilometragem - Carro %d\n", i+1);
        for(j = 0; j < 12; j++) 
        {
            for(k = 0; k < 4; k++) 
            {
                mediaMensal = mediaMensal + carros[i].quilometragem[j][k];
            }
            mediaMensal = mediaMensal / 4;
            printf("Média da quilometragem do mês %d = %.2f\n", j+1, mediaMensal);
            mediaAnual = mediaAnual + mediaMensal;
            mediaMensal = 0;
        }
        mediaAnual = mediaAnual / 12;
        mediaGeral = mediaGeral + mediaAnual;
        printf("Média da quilometragem anual =  %.2f\n", mediaAnual);
        mediaAnual = 0;
    }
    mediaGeral = mediaGeral / 10;
    printf("\n");
    printf("Média da quilometragem de todos os veículos = %.2f\n", mediaGeral);
}

float calcularIPVA(char placa[]) 
{
    int i, j, k;
    int verificador = 0;
    float IPVA;
    for(i = 0; i < 10; i++) 
    {
        if(!strcmp(carros[i].placa, placa)) 
        {
            printf("Veículo encontrado!\n");
            printf("Placa = %s\n", carros[i].placa);
            printf("Modelo = %s\n", carros[i].modelo);
            printf("Ano = %d\n", carros[i].ano);
            printf("Preço = R$%.2f\n", carros[i].preco);
            verificador = 1;
            if(carros[i].ano < 2022-10) 
            {
                IPVA = carros[i].preco * 0.02;
            }
            else 
            {
                IPVA = carros[i].preco * 0.03;
            }
        }
    }
    if(verificador == 0) 
    {
        printf("Veículo não encontrado!\n");
        IPVA = 0;
    }
    return IPVA;
}

int main() 
{
    setlocale(LC_ALL, "");
    char placaBuscar[10];
    float IPVA;
    preencherDados();
    calcularQuilometragem();
    printf("\n");
    printf("Insira a placa do carro que deseja buscar: ");
    scanf("%s", placaBuscar);
    printf("\n");
    IPVA = calcularIPVA(placaBuscar);
    printf("IPVA = R$%.2f\n", IPVA);
    system("pause");
    return 0;
}
