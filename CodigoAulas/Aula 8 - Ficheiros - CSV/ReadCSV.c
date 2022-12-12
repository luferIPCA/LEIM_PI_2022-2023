/*****************************************************************//**
 * @file   ReadCSV.c
 * @brief  
 *		Read a line->L
 *		Split L by,
 * @author lufer
 * @date   December 2022
 *********************************************************************/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define MAXCHAR 1000
#define MAXVALS 100
#pragma warning (disable: 4996)

typedef struct Valor {
    char data[30];
    double v1;
    double v2;
    double v3;
    double v4;
    double v5;
}Valor;

int main() {

    FILE* fp;
    char row[MAXCHAR];
    char* token;

    Valor valores[MAXVALS];
    int totalValores = 0;

#pragma region LerCSV

    //fp = fopen("Dados.csv", "r");
    ////testar se conseguiu abrir

    //while (feof(fp) != true)
    //{
    //    fgets(row, MAXCHAR, fp);
    //    printf("Row: %s", row);
    //}

    //fclose(fp);

#pragma endregion

#pragma region AnalisaCSV

    Valor aux;

    fp = fopen("Dados.csv", "r");
    if (fp == NULL) {
        perror("Problemas na leitura do ficheiro");
        exit(-1);
    }
    int rowNumber = 0;
    while (fgets(row, MAXCHAR, fp)!=NULL)   //ou feof(fp) != true)
    {
        printf("Row: %s", row);
        if (rowNumber == 0)
        {
            rowNumber++;
            continue;
        }

        token = strtok(row, ",");
        
        int t = 0;
        while (token != NULL)
        {
            printf("Token: %s\n", token);
            if (t == 0) {
                strcpy(aux.data, token); t++; continue;
            }
            if (t == 1) {
                aux.v1 = atof(token); t++; continue;
            }
            if (t == 2) {
                aux.v2 = atof(token); t++;  continue;
            }
            //fazer o restantes campos
            //
            token = strtok(NULL, ",");
            
        }
        //guarda o aux no array
        valores[totalValores] = aux;
        totalValores++;
    }
    fclose(fp);

#pragma endregion

    return 0;
}




