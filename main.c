#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUCESSO 0
#define TAM_MAX_STRING 100

struct Veiculo{
    float preco;
    int ano;
    char* marca;
    char* modelo;
    char* condicao;
    char* combustivel;
    long int odometro;
    char* status;
    char* cambio;
    char* tamanho;
    char* tipo;
    char* cor;
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

void loadFile(FILE* arquivo,char* arq, Veiculo* veiculos){
    arquivo = fopen(arq,"a");

    if(arquivo == NULL){
        printf("Erro, nao foi possivel abrir o arquivo\n");
    }else{
        printf("Arquivo aberto");
    }
}

void leVeiculo(Veiculo *veiculo, FILE *arquivo)
{
    veiculo = (Veiculo*)malloc(sizeof(Veiculo));

    fscanf(arquivo, "%f %i %s %s %s %s %ld %s %s %s %s %s",
           &veiculo->preco, &veiculo->ano,
           &veiculo->marca, &veiculo->modelo,
           &veiculo->condicao, &veiculo->combustivel,
           &veiculo->odometro, &veiculo->status,
           &veiculo->cambio, &veiculo->tamanho,
           &veiculo->tipo, &veiculo->cor);
}


void compraVeiculos(FILE* arquivo, Veiculo* veiculo){

}

int main(int argc, char** argv){

    FILE* arquivo;
    Veiculo* veiculos;
    char nomeArquivo[] = "veiculos_ofertas.csv";


    loadFile(arquivo, nomeArquivo, veiculos);

    leVeiculo(veiculos, arquivo);
    printf("Veiculo: %s",veiculos->modelo);
    

    return SUCESSO;
}
