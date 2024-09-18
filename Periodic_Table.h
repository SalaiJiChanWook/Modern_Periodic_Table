//
// Created by uchia on 9/18/2024.
//

#ifndef MODERN_PERIODIC_TABLE_USING_C_PERIODIC_TABLE_H
#define MODERN_PERIODIC_TABLE_USING_C_PERIODIC_TABLE_H

#include <stdio.h>
#include "stdlib.h"
#include "string.h"
#define Max_Table_Size 6

int n,m,a,Exit,Exi;
char key[Max_Table_Size][30] = {"Name","Symbolic","Atomic Number","Electronic Configuration","Discovered By","Charge"};
char Hydrogen [Max_Table_Size][20] = {"Hydrogen","H","1","1s¹","Henry Cavendish","+1"};
char Helium [Max_Table_Size][20] = {"Helium","He","2","1s²","Pierre Janssen","0"};
char Lithium [Max_Table_Size][25] = {"Lithium","Li","3","[He] 2s¹","Johan August Arfwedson","+1"};
char Beryllium [Max_Table_Size][25] = {"Beryllium","Be","4","[He] 2s²","Louis-Nicolas Vauquelin","+2"};
char Boron [Max_Table_Size][25] = {"Boron","B","5","[He] 2s² 2p¹","Joseph Louis Gay-Lussac","+3"};
char Carbon [Max_Table_Size][20] = {"Carbon","c","6","[He] 2s² 2p²","Ancient","±4"};
char Nitrogen [Max_Table_Size][20] = {"Nitrogen","N","7","[He] 2s² 2p³","Daniel Rutherford","-3"};
char Oxygen [Max_Table_Size][20] = {"Oxygen","O","8","[He] 2s² 2p⁴","Joseph Priestley","-2"};
char Fluorine [Max_Table_Size][22] = {"Fluorine","F","9","[He] 2s² 2p⁵","Henri Moissan","-1"};
char Neon [Max_Table_Size][20] = {"Neon","Ne","10","[He] 2s² 2p⁶","William Ramsay","0"};


//Function declear
void menu();
void Showtable();
void SearchElement();


void  menu(){
    printf("\n ###\tWelcome to Uchia Clan Periodic Table\t### \n");

    printf("\n[+]Enter 1 to know about an Element\n");
    printf("[+]Enter 2 to close the periodic table\n");

    printf("Enter: ");
    scanf("%d",&n);
    SearchElement();
}


void SearchElement(){
    if(n == 1)
    {
        printf("\n[+]Press 3 to search the element by atomic number\n");
        printf("Enter your number:");
        scanf("%d",&m);
        Showtable();
    } else if(n == 2)
    {   char choice[4];
        printf("Do you want to exit? (Yes/No)\n");
        scanf("%s",&choice);

        if (strcmp(choice, "yes") == 0 || strcmp(choice, "Yes") == 0) {
            printf("\nThe periodic table has closed.");
            exit(0);
        } else if (strcmp(choice, "no") == 0 || strcmp(choice, "No") == 0) {
            printf("\nPeriodic table did not close and you can continue to learn more about the elements\n");
            menu();
        } else {
            printf("Invalid input! You should enter Yes or No.\n");
            printf("System was broke-out!!!\n");
        }
    }
}


void Showtable(){
        printf("\n[+]Enter the atomic number of the element to be searched: ");
        scanf("%d",&a);

        if(a == 1)
        {
            // Loop through the array and print each fruit
            printf("\n#####\t#####\t#####\n");
            for (int i = 0; i < Max_Table_Size; i++) {
                printf("%s : %s\n", key[i], Hydrogen[i]);
            }
            printf("\n#####\t#####\t#####\n");

            menu();

        } else if (a == 2)
        {

            // Loop through the array and print each fruit
            printf("\n#####\t#####\t#####\n");
            for (int i = 0; i < Max_Table_Size; i++) {
                printf("%s : %s\n", key[i], Helium[i]);
            }
            printf("\n#####\t#####\t#####\n");
            menu();
        } else if (a == 3)
        {

            // Loop through the array and print each fruit
            printf("\n#####\t#####\t#####\n");
            for (int i = 0; i < Max_Table_Size; i++) {
                printf("%s : %s\n", key[i], Lithium[i]);
            }
            printf("\n#####\t#####\t#####\n");
            menu();
        }else if (a == 4)
        {

            // Loop through the array and print each fruit
            printf("\n#####\t#####\t#####\n");
            for (int i = 0; i < Max_Table_Size; i++) {
                printf("%s : %s\n", key[i], Beryllium[i]);
            }
            printf("\n#####\t#####\t#####\n");
            menu();
        }else if (a == 5)
        {

            // Loop through the array and print each fruit
            printf("\n#####\t#####\t#####\n");
            for (int i = 0; i < Max_Table_Size; i++) {
                printf("%s : %s\n", key[i], Boron[i]);
            }
            printf("\n#####\t#####\t#####\n");
            menu();
        }else if (a == 6)
        {

            // Loop through the array and print each fruit
            printf("\n#####\t#####\t#####\n");
            for (int i = 0; i < Max_Table_Size; i++) {
                printf("%s : %s\n", key[i], Carbon[i]);
            }
            printf("\n#####\t#####\t#####\n");
            menu();
        }else if (a == 7)
        {

            // Loop through the array and print each fruit
            printf("\n#####\t#####\t#####\n");
            for (int i = 0; i < Max_Table_Size; i++) {
                printf("%s : %s\n", key[i], Nitrogen[i]);
            }
            printf("\n#####\t#####\t#####\n");
            menu();
        } else if (a == 8)
        {

            // Loop through the array and print each fruit
            printf("\n#####\t#####\t#####\n");
            for (int i = 0; i < Max_Table_Size; i++) {
                printf("%s : %s\n", key[i], Oxygen[i]);
            }
            printf("\n#####\t#####\t#####\n");
            menu();
        }else if (a == 9)
        {

            // Loop through the array and print each fruit
            printf("\n#####\t#####\t#####\n");
            for (int i = 0; i < Max_Table_Size; i++) {
                printf("%s : %s\n", key[i], Fluorine[i]);
            }
            printf("\n#####\t#####\t#####\n");
            menu();
        }else if (a == 10)
        {

            // Loop through the array and print each fruit
            printf("\n#####\t#####\t#####\n");
            for (int i = 0; i < Max_Table_Size; i++) {
                printf("%s : %s\n", key[i], Neon[i]);
            }
            printf("\n#####\t#####\t#####\n");
            menu();
        }
        else{
            printf("\nPlease enter a certain number for search element!\n");
            SearchElement();
        }
    }







#endif //MODERN_PERIODIC_TABLE_USING_C_PERIODIC_TABLE_H
