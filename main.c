#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUCESSO 0
#define TAM_MAX_STRING 100

struct Veiculo{
    float preco;
    char modelo[50];
    char marca[50];
    char condicao[20];
    char combustivel[20];
    int ano;
    long odometro;
    char status[20];
    char cambio[20];
    char tamanho[20];
    char tipo[20];
    char cor[20];
    };
typedef struct Veiculo Veiculo;

struct Data{
    Veiculo* veiculo;
    int dia;
    int mes;
    int ano;
    int hora;
    int minuto;
};

void leVeiculo(Veiculo *veiculo, FILE *arquivo)
{
    fscanf(arquivo, "%f,%i,%s,%s,%s,%s,%ld,%s,%s,%s,%s,%s",
           &veiculo->preco, &veiculo->ano,
           &veiculo->marca, &veiculo->modelo,
           &veiculo->condicao, &veiculo->combustivel,
           &veiculo->odometro, &veiculo->status,
           &veiculo->cambio, &veiculo->tamanho,
           &veiculo->tipo, &veiculo->cor);
}


//void compraVeiculos(FILE* arquivo, Veiculo* veiculo){//

int main(int argc, char** argv){

    FILE* arquivo;
    Veiculo* veiculos;

    arquivo = fopen("veiculos_ofertas.csv","a");

    if(arquivo != NULL){
        printf("Arquivo aberto");
    }else{
        printf("Erro, nao foi possivel abrir o arquivo\n");
    }
    
    veiculos = (Veiculo*)malloc(sizeof(Veiculo));
    leVeiculo(veiculos, arquivo);
    printf("Veiculo: %s",veiculos->modelo);
    
    return SUCESSO;
}
