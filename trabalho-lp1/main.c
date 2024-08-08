#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct data DATA;
struct data{
    int dia;
    int mes;
    int ano;
};

typedef struct dados DADOS;
struct dados{
    char nome[50];
    char no_mae[50];
    int leito;
    float pesoKg;
    DATA  dat_nasc;
};

void cadastrar();
void exibir();
void localizar();
void editar();
void excluir();

int main(void)
{
     int op;

     do{
     printf(">>>>>>>>>>> MATERNIDADE DR ANDRE <<<<<<<<<<<<\n");
     printf(">>>>>>>>>>>  BEM VINDO AO SISTEMA!!  <<<<<<<<<<<<\n-------- ESCOLHA UMA DAS OPCOES ABAIXO ----------\n");
     printf("\n\t1 - Cadastrar recem nascidos\n\t2 - Exibir todos os cadastrados");
     printf("\n\t3 - Localizar recem nascido cadastrado\n\t4 - Editar cadastro");
     printf("\n\t5 - Excluir cadastro\n\t0 - Sair\n");

     scanf("%d", &op);

     if(op < 6){
        switch(op){

        case 1:
            cadastrar();
        break;
        case 2:
            exibir();
        break;
        case 3:
            localizar();
        break;
        case 4:
            editar();
        break;
        case 5:
            excluir();
        break;
        }
     }
        else{
            printf("\nOpcao invalida!\nAperte qualquer tecla para voltar ao menu\n");
            op = 6;
            getch();

            system("cls");
        }

     } while(op!= 0);


    return 0;
}

void cadastrar(){
    FILE* cadastro;
    DADOS fixa;

    cadastro = fopen("paciente.txt", "ab");

    if(cadastro == NULL){
        printf("Erro ao abrir arquivo\n");
        exit(1);
    }
      else{
            do{
               fflush(stdin);
               printf("\nDigite os dados do recem nascido:\n");

               fflush(stdin);
               printf("\nNome: ");
               gets(fixa.nome);

               fflush(stdin);
               printf("\nNome da mae: ");
               gets(fixa.no_mae);

               printf("\nData de nascimento dd/mm/aaaa:\n");
               scanf("%d %d %d", &fixa.dat_nasc.dia, &fixa.dat_nasc.mes, &fixa.dat_nasc.ano);

               fflush(stdin);
               printf("\nPeso em Kg:");
               scanf("%f", &fixa.pesoKg);

               fflush(stdin);
               printf("\nNumero do leito:");
               scanf("%d", &fixa.leito);

               fwrite(&fixa,sizeof(DADOS),1, cadastro);

               fflush(stdin);
               printf("\nDeseja continuar(s/n)?\n");

            }while(getch() == 's' || getch == 'S');
            printf("\n--------------- FIM DE CADASTRO ----------------");
            printf("\n------- APERTE UMA TECLA PARA CONTINUAR --------\n\n\n");
            fclose(cadastro);
            getch();
            system("cls");
    }
}

void exibir(){
    FILE* cadastro;
    DADOS fixa;

    cadastro = fopen("paciente.txt", "rb");
    printf("\n---------------Lista de cadastros:---------------\n\n ");

    if(cadastro == NULL){
        printf("Erro ao abrir arquivo\n");
        exit(1);
    }
        else{
            while(fread(&fixa,sizeof(DADOS),1,cadastro)==1){
                    printf("\nNome: %s", fixa.nome);
                    printf("\nNome da mae: %s", fixa.no_mae);
                    printf("\nData de nascimento: %d/%d/%d", fixa.dat_nasc.dia, fixa.dat_nasc.mes, fixa.dat_nasc.ano);
                    printf("\nPeso em Kg: %.2f", fixa.pesoKg);
                    printf("\nNumero do leito: %d\n\n", fixa.leito);
            }
        }
        printf("\n--------------- FIM DE EXIBICAO ----------------");
        printf("\n------- APERTE UMA TECLA PARA CONTINUAR --------\n\n\n");
        fclose(cadastro);
        getch();
        system("cls");
}

void localizar(){
    FILE* cadastro;
    DADOS fixa;
    char nome[50];

    cadastro = fopen("paciente.txt", "rb");

    if(cadastro == NULL){
        printf("Erro ao abrir arquivo\n");
        exit(1);
    }
        else{
            fflush(stdin);
            printf("\n\nDigite o nome para exibir os dados do paciente\n: ");
            gets(nome);

            while(fread(&fixa,sizeof(DADOS),1,cadastro)==1){
                if( strcmp(nome, fixa.nome) == 0){
                    printf("\nNome: %s", fixa.nome);
                    printf("\nNome da mae: %s", fixa.no_mae);
                    printf("\nData de nascimento: %d/%d/%d", fixa.dat_nasc.dia, fixa.dat_nasc.mes, fixa.dat_nasc.ano);
                    printf("\nPeso em Kg: %.2f", fixa.pesoKg);
                    printf("\nNumero do leito: %d\n\n", fixa.leito);
                }
            }
        }
        fclose(cadastro);
        printf("\n--------------- FIM DE PROCURA ----------------");
        printf("\n------- APERTE UMA TECLA PARA CONTINUAR --------\n\n\n");
        getch();
        system("cls");

}

void editar(){
FILE* cadastro;
FILE* temp;
DADOS fixa;
char nome[50];

 cadastro = fopen("paciente.txt","rb");
 temp = fopen("tmp.txt","wb");
 if(cadastro == NULL && temp == NULL){
  printf("Erro ao abrir arquivo!\n");
  exit(1);
 }else{

  fflush(stdin);
  printf("Digite do nome do paciente para editar seus dados: ");
  gets(nome);
  printf("\n\n");

while(fread(&fixa,sizeof(DADOS),1,cadastro)==1){
   if(strcmp(nome,fixa.nome)==0){
    printf("Nome: %s\n",fixa.nome);
    printf("Nome da mae: %s\n",fixa.no_mae);
    printf("Data de nascimento: %d/%d/%d\n",fixa.dat_nasc.dia, fixa.dat_nasc.mes, fixa.dat_nasc.ano);
    printf("Peso em Kg: %.2f\n", fixa.pesoKg);
    printf("Numero do leito: %d\n\n", fixa.leito);
   }
	else{
    fwrite(&fixa,sizeof(DADOS),1,temp);
   }
  }
  fclose(cadastro);
  fclose(temp);
  fflush(stdin);
  printf("Deseja editar (s/n)? ");
  if(getche()=='s'){

   if(remove("paciente.txt")==0 && rename("tmp.txt","paciente.txt")==0){
        cadastro = fopen("paciente.txt", "ab");

    if(cadastro == NULL){
        printf("Erro ao abrir arquivo\n");
        exit(1);
    }
      else{

               fflush(stdin);
               printf("\nDigite os dados do recem nascido:\n");

               fflush(stdin);
               printf("\nNome: ");
               gets(fixa.nome);

               fflush(stdin);
               printf("\nNome da mae: ");
               gets(fixa.no_mae);

               printf("\nData de nascimento dd/mm/aaaa:\n");
               scanf("%d %d %d", &fixa.dat_nasc.dia, &fixa.dat_nasc.mes, &fixa.dat_nasc.ano);

               fflush(stdin);
               printf("\nPeso em Kg:");
               scanf("%f", &fixa.pesoKg);

               fflush(stdin);
               printf("\nNumero do leito:");
               scanf("%d", &fixa.leito);

               fwrite(&fixa,sizeof(DADOS),1, cadastro);}

   }
   else{
    remove("tmp.txt");
   }
  }
  fclose(temp);
  fclose(cadastro);
    }
        printf("\n--------------- FIM DE EDICAO ----------------");
        printf("\n------- APERTE UMA TECLA PARA CONTINUAR --------\n\n\n");
        getch();
        system("cls");
}

void excluir(){

FILE* cadastro;
FILE* temp;
DADOS fixa;
char nome[50];

 cadastro = fopen("paciente.txt","rb");
 temp = fopen("tmp.txt","wb");
 if(cadastro == NULL && temp == NULL){
  printf("Erro ao abrir arquivo!\n");
  exit(1);
 }else{

  fflush(stdin);
  printf("Digite o nome a deletar: ");
  gets(nome);
  printf("\n\n");

while(fread(&fixa,sizeof(DADOS),1,cadastro)==1){
   if(strcmp(nome,fixa.nome)==0){
    printf("Nome: %s\n",fixa.nome);
    printf("Nome da mae: %s\n",fixa.no_mae);
    printf("Data de nascimento: %d/%d/%d\n",fixa.dat_nasc.dia, fixa.dat_nasc.mes, fixa.dat_nasc.ano);
    printf("Peso em Kg: %.2f\n", fixa.pesoKg);
    printf("Numero do leito: %d\n\n", fixa.leito);
   }
	else{
    fwrite(&fixa,sizeof(DADOS),1,temp);
   }
  }
  fclose(cadastro);
  fclose(temp);
  fflush(stdin);
  printf("Deseja deletar (s/n)? ");
  if(getche()=='s'){

   if(remove("paciente.txt")==0 && rename("tmp.txt","paciente.txt")==0){
    printf("\nOperacao realizada com sucesso!");
   }
   else{
    remove("tmp.txt");
   }
  }
  fclose(temp);
  fclose(cadastro);
    printf("\n--------------- FIM DE EXCLUSAO ----------------");
    printf("\n------- APERTE UMA TECLA PARA CONTINUAR --------\n\n\n");
    getch();
    system("cls");
    }
}
