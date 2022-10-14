#include <stdio.h>

    // Pedir para digitar deputado estadual (12345 KIKA, 45678 KIKO, 90123 CHAVES)
    //deputado  federal (32109 EMILIA, 87654 NARIZINHO, 54321 PEDRO, 8788 CUCA)
    //senador ( 111 Joao pe de feijao, 222 Maria linda, 333 Xuxa meneguel)
    //governador (55 Xico da silva, 66 Xica bonita, 77 Xuxu colorido)
    //presidente (33 JOAO, 88 MARIA, 55 JUCA)

struct contagem_votos 
    {
        int votos_validos;
        int votos_anulados;
        int votos_branco;
        // deputados federal
        int emilia; 
        int narizinho; 
        int pedro; 
        int cuca;
        // deputados estaduais
        int kika; 
        int kiko; 
        int chaves;
        // senador
        int joaofeijao; 
        int marialinda; 
        int xuxa;
        // Governador
        int xico;
        int xica;
        int xuxu;
        // presidente
        int joao;
        int maria; 
        int juca;
    };

struct contagem_votos urna_1;
    
int main(){
    int op;
    inicializar();
    while (1) {
        printf("====== Urna eletrônica =====\n"); // Votação deputado Federal
        votar_federal();
        printf("====== Urna eletrônica =====\n"); // Votação deputado Estadual
        votar_Estadual();
        printf("====== Urna eletrônica =====\n"); // Votação Senador
        votar_Senador();
        printf("====== Urna eletrônica =====\n");// Votação para governador
        votar_Governador();
        printf("====== Urna eletrônica =====\n"); // Votação Presidente
        votar_Presidente();
        do
        {
            printf("Deseja continuar a Votação?\n[1] Continuar\n[2] Encerrar a urna\nOpção: ");
            scanf("%d", &op);
            if (op > 2 && op < 1){
                printf("\nOpção Inválida, Digite novamente.\n");
            }
        } while (op > 2 && op < 1);
        if (op == 2){
            imprimir_votos();
            break;
        }
    }
    return 0;
}

void inicializar(void){
    urna_1.joao = 0;
    urna_1.xica = 0;
    urna_1.xuxu = 0;
    urna_1.xico = 0;
    urna_1.juca = 0;
    urna_1.maria = 0;
    urna_1.xuxa = 0;
    urna_1.marialinda = 0;
    urna_1.joaofeijao = 0;
    urna_1.chaves = 0;
    urna_1.kiko = 0;
    urna_1.kika = 0;
    urna_1.cuca = 0;
    urna_1.pedro = 0;
    urna_1.narizinho = 0;
    urna_1.emilia = 0;
    urna_1.votos_validos = 0;
    urna_1.votos_branco = 0;
    urna_1.votos_anulados = 0;
}

void votar_federal(void){
    int op, nulo, candidato;
    do
    {
        printf("Deputado Federal: ");
        scanf("%d", &candidato);
        nulo = Imprimir_candidato_Federal(candidato);
        printf("\n[1] Confirmar\n[2] Cancelar\n[3] Branco\nOpção: ");
        scanf("%d", &op);
        switch (op){
            case 1:
                if (nulo == 0){
                    switch (op){
                        case 32109:
                            urna_1.emilia ++;
                            urna_1.votos_validos ++;
                            break;
                        case 87654:
                            urna_1.narizinho ++;
                            urna_1.votos_validos ++;
                            break;
                        case 54321:
                            urna_1.pedro ++;
                            urna_1.votos_validos ++;
                            break;
                        case 8788:
                            urna_1.cuca ++;
                            urna_1.votos_validos ++;
                            break;
                    }
                }else if (nulo == 1){
                    urna_1.votos_anulados ++;
                }
                break;
            case 3:
                urna_1.votos_branco ++;
                break;
            default:
                printf("Opção Inválida Ou cancelada, Comando resetado.\n");
                break;
        }
    } 
    while (op != 1 && op != 3);
}

void votar_Estadual(void){
    int op, nulo, candidato;
    do
    {
        printf("Deputado Estadual: ");
        scanf("%d", &candidato);
        nulo = Imprimir_candidato_Estadual(candidato);
        printf("\n[1] Confirmar\n[2] Cancelar\n[3] Branco\nOpção: ");
        scanf("%d", &op);
        switch (op){
            case 1:
                if (nulo == 0){
                    switch (candidato){
                        case 12345:
                            urna_1.kika ++;
                            urna_1.votos_validos ++;
                            break;
                        case 45678:
                            urna_1.kiko ++;
                            urna_1.votos_validos ++;
                            break;
                        case 90123:
                            urna_1.chaves ++;
                            urna_1.votos_validos ++;
                            break;
                    }
                }else if (nulo == 1){
                    urna_1.votos_anulados ++;
                }
                break;
            case 3:
                urna_1.votos_branco ++;
                break;
            default:
                printf("Opção Inválida Ou cancelada, Comando resetado.\n");
                break;
        }
    } 
    while (op != 1 && op != 3);
}

void votar_Governador(void){
    int op, nulo, candidato;
    do
    {
        printf("Governador: ");
        scanf("%d", &candidato);
        nulo = Imprimir_candidato_Governador(candidato);
        printf("\n[1] Confirmar\n[2] Cancelar\n[3] Branco\nOpção: ");
        scanf("%d", &op);
        switch (op){
            case 1:
                if (nulo == 0){
                    switch (candidato){
                        case 55:
                            urna_1.xico ++;
                            urna_1.votos_validos ++;
                            break;
                        case 66:
                            urna_1.xica ++;
                            urna_1.votos_validos ++;
                            break;
                        case 77:
                            urna_1.xuxu ++;
                            urna_1.votos_validos ++;
                            break;
                    }
                }else if (nulo == 1){
                    urna_1.votos_anulados ++;
                }
                break;
            case 3:
                urna_1.votos_branco ++;
                break;
            default:
                printf("Opção Inválida Ou cancelada, Comando resetado.\n");
                break;
        }
    } 
    while (op != 1 && op != 3);
}

void votar_Senador(void){
    int op, nulo, candidato;
    do
    {
        printf("Senador: ");
        scanf("%d", &candidato);
        nulo = Imprimir_candidato_Senador(candidato);
        printf("\n[1] Confirmar\n[2] Cancelar\n[3] Branco\nOpção: ");
        scanf("%d", &op);
        switch (op){
            case 1:
                if (nulo == 0){
                    switch (candidato){
                        case 111:
                            urna_1.joaofeijao ++;
                            urna_1.votos_validos ++;
                            break;
                        case 222:
                            urna_1.marialinda ++;
                            urna_1.votos_validos ++;
                            break;
                        case 333:
                            urna_1.xuxa ++;
                            urna_1.votos_validos ++;
                            break;
                    }
                }else if (nulo == 1){
                    urna_1.votos_anulados ++;
                }
                break;
            case 3:
                urna_1.votos_branco ++;
                break;
            default:
                printf("Opção Inválida Ou cancelada, Comando resetado.\n");
                break;
        }
    } 
    while (op != 1 && op != 3);
}

void votar_Presidente(void){
    int op, nulo, candidato;
    do
    {
        printf("Presidente: ");
        scanf("%d", &candidato);
        nulo = Imprimir_candidato_Presidente(candidato);
        printf("\n[1] Confirmar\n[2] Cancelar\n[3] Branco\nOpção: ");
        scanf("%d", &op);
        switch (op){
            case 1:
                if (nulo == 0){
                    switch (candidato){
                        case 33:
                            urna_1.joao ++;
                            urna_1.votos_validos ++;
                            break;
                        case 88:
                            urna_1.maria ++;
                            urna_1.votos_validos ++;
                            break;
                        case 55:
                            urna_1.juca ++;
                            urna_1.votos_validos ++;
                            break;
                    }
                }else if (nulo == 1){
                    urna_1.votos_anulados ++;
                }
                break;
            case 3:
                urna_1.votos_branco ++;
                break;
            default:
                printf("Opção Inválida Ou cancelada, Comando resetado.\n");
                break;
        }
    } 
    while (op != 1 && op != 3);
}

void imprimir_votos(void){
    printf("\n\n============= Exibindo Votos =============\n");
    printf("Votos Válidos: %d\n", urna_1.votos_validos);
    printf("Votos Brancos: %d\n", urna_1.votos_branco);
    printf("Votos Anulados: %d\n", urna_1.votos_anulados);
    
    printf("\n==== Candidatos a Deputado Federal ====\n");
    printf("Candidado Cuca: %d Votos\n", urna_1.cuca);
    printf("Candidado Pedro: %d Votos\n", urna_1.pedro);
    printf("Candidado Narizinho: %d Votos\n", urna_1.narizinho);
    printf("Candidado Emilia: %d Votos\n", urna_1.emilia);
    
    printf("\n==== Candidatos a Deputado Estadual ====\n");
    printf("Candidado Chaves: %d Votos\n", urna_1.chaves);
    printf("Candidado Kiko: %d Votos\n", urna_1.kiko);
    printf("Candidado Kika: %d Votos\n", urna_1.kika);

    printf("\n==== Candidatos a Senador ====\n");
    printf("Candidado Xuxa: %d Votos\n", urna_1.xuxa);
    printf("Candidado Maria Linda: %d Votos\n", urna_1.marialinda);
    printf("Candidado Joao Feijao: %d Votos\n", urna_1.joaofeijao);

    printf("\n==== Candidatos a Governador ====\n");
    printf("Candidado Xico: %d Votos\n", urna_1.xico);
    printf("Candidado Xica Linda: %d Votos\n", urna_1.xica);
    printf("Candidado Xuxu Feijao: %d Votos\n", urna_1.xuxu);

    printf("\n==== Candidatos a Presidente ====\n");
    printf("Candidado Joao: %d Votos\n", urna_1.joao);
    printf("Candidado Maria Maria: %d Votos\n", urna_1.maria);
    printf("Candidado Juca: %d Votos\n", urna_1.juca);
}

int Imprimir_candidato_Federal(int numero){
    int null=0;
    switch (numero){
        case 32109:
            printf("--> Candidato(a) Emilia! <--");
            break;
        case 87654:
            printf("--> Candidato(a) Narizinho! <--");
            break;
        case 54321:
            printf("--> Candidato(a) Pedro! <--");
            break;
        case 8788:
            printf("--> Candidato(a) Cuca! <--");
            break;
        default:
            printf("--> Não encontrado, VOTO NULO! <--");
            null = 1;
            break;
    }
    return (null);
}

int Imprimir_candidato_Governador(int numero){
    int null=0;
    switch (numero){
        case 55:
            printf("--> Candidato(a) Xico! <--");
            break;
        case 66:
            printf("--> Candidato(a) Xuxa! <--");
            break;
        case 77:
            printf("--> Candidato(a) Xuxu! <--");
            break;
        default:
            printf("--> Não encontrado, VOTO NULO! <--");
            null = 1;
            break;
    }
    return (null);
}

int Imprimir_candidato_Estadual(int numero){
    int null=0;
    switch (numero){
        case 12345:
            printf("--> Candidato(a) Kika! <--");
            break;
        case 45678:
            printf("--> Candidato(a) Kiko! <--");
            break;
        case 90123:
            printf("--> Candidato(a) Chaves! <--");
            break;
        default:
            printf("--> Não encontrado, VOTO NULO! <--");
            null = 1;
            break;
    }
    return (null);
}

int Imprimir_candidato_Senador(int numero){
    int null=0;
    switch (numero){
        case 111:
            printf("--> Candidato(a) Joaofeijao! <--");
            break;
        case 222:
            printf("--> Candidato(a) Marialinda! <--");
            break;
        case 333:
            printf("--> Candidato(a) Xuxa! <--");
            break;
        default:
            printf("--> Não encontrado, VOTO NULO! <--");
            null = 1;
            break;    
    }
    return (null);
}

int Imprimir_candidato_Presidente(int numero){
    int null=0;
    switch (numero){  
        case 33:
            printf("--> Candidato(a) Joao! <--");
            break;
        case 88:
            printf("--> Candidato(a) Maria! <--");
            break;
        case 55:
            printf("--> Candidato(a) Juca! <--");
            break;
        default:
            printf("--> Não encontrado, VOTO NULO! <--");
            null = 1;
            break;
    }
    return (null);
}
