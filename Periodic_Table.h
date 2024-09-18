//
// Created by uchia on 9/18/2024.
//

#ifndef MODERN_PERIODIC_TABLE_USING_C_PERIODIC_TABLE_H
#define MODERN_PERIODIC_TABLE_USING_C_PERIODIC_TABLE_H

#include <stdio.h>
#include "stdlib.h"
#define Max_Table_Size 6

int n,m,a,Exit,Exi;
char key[Max_Table_Size][30] = {"Name","Symbolic","Atomic Number","Electronic Configuration","Discovered By","Charge"};
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
    {   char choice;
        printf("Do you want to exit? (Yes/No)\n");
        scanf("%s",&choice);

        if(choice == "yes" || choice == "Yes"){
            printf("\nThe periodic table has closed.");
            exit(0);
        }
        else if(choice == "no" || choice == "No")
        {
            printf("\nPeriodic table did not closed and you can continue to learn more about the elements\n");
            menu();
        }
    }
}


void Showtable(){
    if(m ==3){
        printf("\n[+]Enter the atomic number of the element to be searched: ");
        scanf("%d\n",&a);

        if(a == 1)
        {  char Hydrogen [Max_Table_Size][20] = {"Hydrogen","H","1","1s¹","Henry Cavendish","+1"};
            // Loop through the array and print each fruit
            printf("\n#####\t#####\t#####\n");
            for (int i = 0; i < Max_Table_Size; i++) {
                printf("%s : %s\n", key[i], Hydrogen[i]);
            }
            printf("\n#####\t#####\t#####\n");

        } else if (a == 2)
        {
            char Helium [Max_Table_Size][20] = {"Helium","He","2","1s²","Pierre Janssen","0"};
            // Loop through the array and print each fruit
            printf("\n#####\t#####\t#####\n");
            for (int i = 0; i < Max_Table_Size; i++) {
                printf("%s : %s\n", key[i], Helium[i]);
            }
            printf("\n#####\t#####\t#####\n");
        } else if (a == 3)
        {
            char Lithium [Max_Table_Size][25] = {"Lithium","Li","3","[He] 2s¹","Johan August Arfwedson","+1"};
            // Loop through the array and print each fruit
            printf("\n#####\t#####\t#####\n");
            for (int i = 0; i < Max_Table_Size; i++) {
                printf("%s : %s\n", key[i], Lithium[i]);
            }
            printf("\n#####\t#####\t#####\n");
        }else if (a == 4)
        {
            char Hydrogen [Max_Table_Size][20] = {"Hydrogen","H","1","1s^1","Henry Cavendish","+1"};
            // Loop through the array and print each fruit
            printf("\n#####\t#####\t#####\n");
            for (int i = 0; i < Max_Table_Size; i++) {
                printf("%s : %s\n", key[i], Hydrogen[i]);
            }
            printf("\n#####\t#####\t#####\n");
        }else if (a == 5)
        {
            char Hydrogen [Max_Table_Size][20] = {"Hydrogen","H","1","1s^1","Henry Cavendish","+1"};
            // Loop through the array and print each fruit
            printf("\n#####\t#####\t#####\n");
            for (int i = 0; i < Max_Table_Size; i++) {
                printf("%s : %s\n", key[i], Hydrogen[i]);
            }
            printf("\n#####\t#####\t#####\n");
        }else if (a == 6)
        {
            char Hydrogen [Max_Table_Size][20] = {"Hydrogen","H","1","1s^1","Henry Cavendish","+1"};
            // Loop through the array and print each fruit
            printf("\n#####\t#####\t#####\n");
            for (int i = 0; i < Max_Table_Size; i++) {
                printf("%s : %s\n", key[i], Hydrogen[i]);
            }
            printf("\n#####\t#####\t#####\n");
        }else if (a == 7)
        {
            char Hydrogen [Max_Table_Size][20] = {"Hydrogen","H","1","1s^1","Henry Cavendish","+1"};
            // Loop through the array and print each fruit
            printf("\n#####\t#####\t#####\n");
            for (int i = 0; i < Max_Table_Size; i++) {
                printf("%s : %s\n", key[i], Hydrogen[i]);
            }
            printf("\n#####\t#####\t#####\n");
        } else if (a == 8)
        {
            char Hydrogen [Max_Table_Size][20] = {"Hydrogen","H","1","1s^1","Henry Cavendish","+1"};
            // Loop through the array and print each fruit
            printf("\n#####\t#####\t#####\n");
            for (int i = 0; i < Max_Table_Size; i++) {
                printf("%s : %s\n", key[i], Hydrogen[i]);
            }
            printf("\n#####\t#####\t#####\n");
        }else if (a == 9)
        {
            char Hydrogen [Max_Table_Size][20] = {"Hydrogen","H","1","1s^1","Henry Cavendish","+1"};
            // Loop through the array and print each fruit
            printf("\n#####\t#####\t#####\n");
            for (int i = 0; i < Max_Table_Size; i++) {
                printf("%s : %s\n", key[i], Hydrogen[i]);
            }
            printf("\n#####\t#####\t#####\n");
        }else if (a == 10)
        {
            char Hydrogen [Max_Table_Size][20] = {"Hydrogen","H","1","1s^1","Henry Cavendish","+1"};
            // Loop through the array and print each fruit
            printf("\n#####\t#####\t#####\n");
            for (int i = 0; i < Max_Table_Size; i++) {
                printf("%s : %s\n", key[i], Hydrogen[i]);
            }
            printf("\n#####\t#####\t#####\n");
        }
        else{
            printf("\nPlease enter a certain number for search element!\n");
            SearchElement();
        }
    }
}






#endif //MODERN_PERIODIC_TABLE_USING_C_PERIODIC_TABLE_H
