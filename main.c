/*
   Lu�s Patr�cio - n� 2162357
   Projecto Programa��o I - Gest�o de Bicicletas no IPL
   �2018-19 - Engenharia Inform�tica - ESTG, IPLeiria
*/
#include <stdio.h>
#include <stdlib.h>

#include "constantes.h"
#include "funcoes_auxiliares.h"


int main()
{
    int opcaoMenuPrincipal, opcaoMenuBicicletas, opcaoMenuUtentes, opcaoMenuEmprestimos, opcaoMenuListaEspera, opcaoMenuFicheiros;

    // Chama Menu Principal
    do
    {
        opcaoMenuPrincipal=menuPrincipal();

        switch(opcaoMenuPrincipal)
        {
        case '1':
            //menu Bicicletas
            do
            {
                opcaoMenuBicicletas = menuBicicletas();
            }while(opcaoMenuBicicletas != 0);

            break;
        case '2':
            //Menu Utentes
            do
            {
                opcaoMenu
            }
            menuUtentes();
            break;
        case '3':
            //Menu Emprestimos
            menuEmprestimos();
            break;
        case '4':
            //Menu Lista de Espera

            break;
        case '5':
            //MenuFicheiros
            menuFicheiros();
            break;
        case '0':
            //Sair;
            printf("/n/nAdeus!!!");
            break;
        /*
        default:
            printf("/nOpcao Errada!");
        */
        }
    }while(opcaoMenuPrincipal != 0);


    return 0;
}
