#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void generate_bill();
void calculate_bill();

char *name[] = {"Brown_sugar", "buttermilk", "vegetable masala", "washing powder", "salt", "poha", "oil", "tooth paste", "hair conditionar", "wheat flour", "red chilli", "Jaggery", "coffee", "tea", "butter", "buttermilk powder", "turmeric powder", "hair oil", "ghee", "face powder"};
char name_[19][20];
int product_quantity[19];
int count1 = 0, total_bill = 0, total_bill1 = 0, discount;
int Brown_sugar_p = 50, buttermilk_p = 50, vegetable_masala_p = 50, wahing_powder_p = 100, salt_p = 20, poha_p = 50, oil_p = 200, tooth_paste_p = 40, hair_conditionar_p = 120, wheat_flour_p = 50, red_chilli_p = 40, Jaggery_p = 45, coffee_p = 200, tea_p = 100, butter_p = 100, buttermilk_powder_p = 150, turnmeric_powder_p = 200, hair_oil_p = 60, ghee_p = 300, face_powder_p = 70;

int main()
{
    char ch, temp_str[20];
    int check,count=0;
    printf("\n\n   ***WELCOME GROCERY STORE***\n\n");
    printf("   Here are our store discount rates\n");
    printf("\n======================================\n");
    printf(" less than 5000 buy 0%% discount      \n");
    printf("-------------------------------------\n");
    printf(" greater than 5000 buy 5%% discount   \n");
    printf("-------------------------------------\n");
    printf(" greater than 10000 buy 10%% discount \n");
    printf("-------------------------------------\n");
    printf(" greater than 15000 buy 15%% discount \n");
    printf("========================================\n\n");
    printf("\n\tAvalable products\n-----------------------------------\n");
    printf("1. Brown_sugar(kg)\n2. buttermilk(pac)\n3. vegetable masala(pac)\n4. washing powder(pac)\n5. salt(kg)\n6. poha(kg)\n7. oil(ltr)\n8. tooth past(pac)\n9. hair conditionar(pac)\n10. wheat folur(kg)\n11. red chilli(pac)\n12. Jaggery(kg)\n13. coffe(pac)\n14. tea(pac)\n15. butter(kg)\n16. buttermilk powder(pac)\n17. turmeric powder(pac)\n18. hair oil(ltr)\n19. ghee(kg)\n20. face powder(pac)\n");
    printf("Please enter all product bought by you\n");
    for (int i = 0; i < 20; i++)
    {

    repeate1:
        count=0;
        printf("Enter product name : ");
        fflush(stdin);
        gets(temp_str);
        for (int j = 0; j < 20; j++)
        {
            check = strcmp(temp_str, name[j]);
            if (check == 0) {
                strcpy(name_[count1], temp_str);}
            else
            {
                count++;
                if (count == 20){
                    printf("Invalid product name\n");
                    goto repeate1;}
            }
        }
    repeate2:
        printf("Enter quantity : ");
        scanf("%d", &product_quantity[count1]);
        if (product_quantity[count1] < 1){
            printf("Invalid quantity try again\n");
            goto repeate2; }
        count1++;
    repeate:
        printf("If you have entered all product then Press 'Y' otherwise 'N' :");
        fflush(stdin);
        scanf("%c", &ch);
        if (ch == 'Y' || ch == 'y') {
            calculate_bill();
            exit(0); }
        else if (ch=='N'||ch=='n'){
            printf("");}        
        else{
            printf("Invalid press try again\n");
            goto repeate;}
    }
    printf("\nWe have only 20 product\n\n");
    calculate_bill();
    return 0;
}
void generate_bill()
{
    printf("\n\t    **** GROCERY STORE BILL ****\n");
    printf("|--------------------------------------------------------\n");
    printf("|  Product\t\tQuantity\t\tPrice   |\n");
    printf("|--------------------------------------------------------\n");
    for (int i = 0; i < count1; i++)
    {
        if (!strcmp("Brown_sugar", name_[i])){
            printf("|  %s           \t%dkg     \t\t%d  \n", name_[i], product_quantity[i], Brown_sugar_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");}
        else if (!strcmp("buttermilk", name_[i])){
            printf("|  %s            \t%dpac      \t\t%d  \n", name_[i], product_quantity[i], buttermilk_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");}
        else if (!strcmp("vegetable masala", name_[i])){
            printf("|  %s     \t%dpac      \t\t%d  \n", name_[i], product_quantity[i], vegetable_masala_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n"); }
        else if (!strcmp("washing powder", name_[i])){
            printf("|  %s      \t%dpac     \t\t%d  \n", name_[i], product_quantity[i], wahing_powder_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n"); }
        else if (!strcmp("salt", name_[i])){
            printf("|  %s            \t%dkg     \t\t%d  \n", name_[i], product_quantity[i], salt_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n"); }
        else if (!strcmp("poha", name_[i])){
            printf("|  %s            \t%dkg    \t\t%d  \n", name_[i], product_quantity[i], poha_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n"); }
        else if (!strcmp("oil", name_[i])) {
            printf("|  %s                 \t%dltr      \t\t%d  \n", name_[i], product_quantity[i], oil_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");}
        else if (!strcmp("tooth paste", name_[i])){
            printf("|  %s          \t%dpac      \t\t%d  \n", name_[i], product_quantity[i], tooth_paste_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");}
        else if (!strcmp("hair conditionar", name_[i])){
            printf("|  %s    \t%dpac      \t\t%d  \n", name_[i], product_quantity[i], hair_conditionar_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");}
        else if (!strcmp("wheat flour", name_[i])){
            printf("|  %s       \t%dkg     \t\t%d  \n", name_[i], product_quantity[i], wheat_flour_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");}
        else if (!strcmp("red chilli", name_[i])){
            printf("|  %s           \t%dpac      \t\t%d  \n", name_[i], product_quantity[i], red_chilli_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n"); }
        else if (!strcmp("Jaggery", name_[i])){
            printf("|  %s                \t%dkg     \t\t%d  \n", name_[i], product_quantity[i], Jaggery_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");}
        else if (!strcmp("coffee", name_[i])){
            printf("|  %s          \t%dpac      \t\t%d  \n", name_[i], product_quantity[i], coffee_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n"); }
        else if (!strcmp("tea", name_[i])){
            printf("|  %s             \t%dpac      \t\t%d  \n", name_[i], product_quantity[i], tea_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");}
        else if (!strcmp("butter", name_[i])){
            printf("|  %s               \t%dpac      \t\t%d  \n", name_[i], product_quantity[i], butter_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n");}
        else if (!strcmp("buttermilk powder", name_[i])) {
            printf("|  %s          \t%dpac      \t\t%d  \n", name_[i], product_quantity[i], buttermilk_powder_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n"); }
        else if (!strcmp("turmeric powder", name_[i])) {
            printf("|  %s      \t%dkg     \t\t%d  \n", name_[i], product_quantity[i], turnmeric_powder_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n"); }
        else if (!strcmp("hair oil", name_[i])) {
            printf("|  %s            \t%dpac      \t\t%d  \n", name_[i], product_quantity[i], hair_oil_p*product_quantity[i]);
            printf("|--------------------------------------------------------\n"); }
        else if (!strcmp("ghee", name_[i])){
            printf("|  %s               \t%dkg     \t\t%d  \n", name_[i], product_quantity[i], ghee_p*product_quantity[i]);
            printf("|-------------------------------------------------------\n");}
        else if (!strcmp("face powder", name_[i])) {
            printf("|  %s          \t%dpac      \t\t%d  \n", name_[i], product_quantity[i], face_powder_p*product_quantity[i]);
            printf("|-------------------------------------------------------\n"); }
    }
    printf("| Total product %d \t\tTotal amount    %d\n", count1, total_bill1);
    printf("|--------------------------------------------------------\n");
    printf("|                  \t\tDiscount        %d\n", discount);
    printf("|--------------------------------------------------------\n");
    printf("|                  \t\tPayable ammount %d\n", total_bill);
    printf("|--------------------------------------------------------\n");
}
void calculate_bill()
{
    char choose;
    for (int i = 0; i < count1; i++)
    {
        if (!strcmp("Brown_sugar", name_[i]))
            total_bill += Brown_sugar_p * product_quantity[i];
        else if (!strcmp("buttermilk", name_[i]))
            total_bill += buttermilk_p * product_quantity[i];
        else if (!strcmp("vegetable masala", name_[i]))
            total_bill += vegetable_masala_p * product_quantity[i];
        else if (!strcmp("washing powder", name_[i]))
            total_bill += wahing_powder_p * product_quantity[i];
        else if (!strcmp("salt", name_[i]))
            total_bill += salt_p * product_quantity[i];
        else if (!strcmp("poha", name_[i]))
            total_bill += poha_p * product_quantity[i];
        else if (!strcmp("oil", name_[i]))
            total_bill += oil_p * product_quantity[i];
        else if (!strcmp("tooth paste", name_[i]))
            total_bill += tooth_paste_p * product_quantity[i];
        else if (!strcmp("hair conditionar", name_[i]))
            total_bill += hair_conditionar_p * product_quantity[i];
        else if (!strcmp("wheat flour", name_[i]))
            total_bill += wheat_flour_p * product_quantity[i];
        else if (!strcmp("red chilli", name_[i]))
            total_bill += red_chilli_p * product_quantity[i];
        else if (!strcmp("Jaggery", name_[i]))
            total_bill += Jaggery_p * product_quantity[i];
        else if (!strcmp("coffee", name_[i]))
            total_bill += coffee_p * product_quantity[i];
        else if (!strcmp("tea", name_[i]))
            total_bill += tea_p * product_quantity[i];
        else if (!strcmp("butter", name_[i]))
            total_bill += butter_p * product_quantity[i];
        else if (!strcmp("buttermilk powder", name_[i]))
            total_bill += buttermilk_powder_p * product_quantity[i];
        else if (!strcmp("turmeric powder", name_[i]))
            total_bill += turnmeric_powder_p * product_quantity[i];
        else if (!strcmp("hair oil", name_[i]))
            total_bill += hair_oil_p * product_quantity[i];
        else if (!strcmp("ghee", name_[i]))
            total_bill += ghee_p * product_quantity[i];
        else if (!strcmp("face powder", name_[i]))
            total_bill += face_powder_p * product_quantity[i];
    }
    total_bill1 = total_bill;
    if (total_bill >= 15000){
        discount = (15 * total_bill) / 100;
        total_bill = total_bill - discount;}
    else if (total_bill >= 10000 && total_bill < 15000){
        discount = (10 * total_bill) / 100;
        total_bill = total_bill - discount; }
    else if (total_bill >= 5000 && total_bill < 10000) {
        discount = (5 * total_bill) / 100;
        total_bill = total_bill - discount; }
repeate:
    printf("\nIf you want to generate your bill then press 'Y' otherwise 'N': ");
    fflush(stdin);
    scanf("%c", &choose);
    if (choose == 'Y' || choose == 'y')
        generate_bill();
    else if (choose == 'N' || choose == 'n')
        exit(0);
    else {
        printf("Invalid character tyr again\n");
        goto repeate; }
}