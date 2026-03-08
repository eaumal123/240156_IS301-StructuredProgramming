/*  Problem: Write a bill that creates customer bills for a company.
    Developed by: EAU MALLEN
    Date: 05/03/26

    Algorithm:
    1. Declare the CONSTANT float prices for the items (fixed data).
    2. Declare the float VARIABLES next (data that will alter during run time)
    3. Use printf to prompt user-input and scanf to capture and store inputs.
    4. Calculate item quantities with given prices
    5. Output the results to the user. 
*/

#include <stdio.h>

int main(){


    /* Defined Constants */
    const float TV_PRICE = 400.00;
    const float MONITOR_PRICE = 220.00;
    const float FLASH_PRICE = 35.20;
    const float HARD_PRICE = 150.00;
    const float PRINTER_PRICE = 300.00;
    const float TAX_RATE = 0.0835;

    /* Quantity Variables (Integers) */
    int qtyTV, qtyMonitor, qtyFlash, qtyHard, qtyPrinter;

    /* Floating Point Variables */
    float costTV, costMonitor, costFlash, costHard, costPrinter;
    float subtotal, tax, total;

    /* User Input */
    printf("How Many TVs Were Sold? ");
    scanf("%d", &qtyTV);

    printf("How Many Monitors Were Sold? ");
    scanf("%d", &qtyMonitor);

    printf("How Many Flash Drives Were Sold? ");
    scanf("%d", &qtyFlash);

    printf("How Many Hard Drives Were Sold? ");
    scanf("%d", &qtyHard);

    printf("How Many Deskjet Printers Were Sold? ");
    scanf("%d", &qtyPrinter);

    /* Calculations */
    costTV = qtyTV * TV_PRICE;
    costMonitor = qtyMonitor * MONITOR_PRICE;
    costFlash = qtyFlash * FLASH_PRICE;
    costHard = qtyHard * HARD_PRICE;
    costPrinter = qtyPrinter * PRINTER_PRICE;

    subtotal = costTV + costMonitor + costFlash + costHard + costPrinter;
    tax = subtotal * TAX_RATE;
    total = subtotal + tax;

    // ---OUTPUT SECTION --
    printf("\nQTY DESCRIPTION\t\tUNIT PRICE\tTOTAL PRICE\n");
    printf("-------------------------------------------------------------------\n");
    printf("%d   TV\t\t\t%.2f\t\t%.2f\n", qtyTV, TV_PRICE, costTV);
    printf("%d   Monitor\t\t%.2f\t\t%.2f\n", qtyMonitor, MONITOR_PRICE, costMonitor);
    printf("%d   Flash Drive\t\t%.2f\t\t%.2f\n", qtyFlash, FLASH_PRICE, costFlash);
    printf("%d   Hard Drive\t\t%.2f\t\t%.2f\n", qtyHard, HARD_PRICE, costHard);
    printf("%d   Deskjet Printer\t%.2f\t\t%.2f\n", qtyPrinter, PRINTER_PRICE, costPrinter);
    
    printf("----------------\n");
    printf("Subtotal: \t\t\t\t%.2f\n", subtotal);
    printf("Tax (8.35%%): \t\t\t\t%.2f\n", tax);
    printf("Total: \t\t\t\t\t%.2f\n", total);
    printf("-------------------------------------------------------------------\n");

return 0;

}
