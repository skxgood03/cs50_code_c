#include <cs50.h>
#include <stdio.h>

int main()
{
    float tip = get_float("Bill before tax and tip: ");
    float percent = get_float("Sale Tax Percent: ");
    float tip_percent = get_float("Tip percent: ");
    float tax_amount = tip * (percent / 100) + tip;
    float tipping = tax_amount * (tip_percent / 100);
    float bill_per_person = (tax_amount + tipping) / 2;
    printf("You will owe $%.2f each!\n", bill_per_person);
    return 0;
}
