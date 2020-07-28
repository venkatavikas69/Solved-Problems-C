#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void) {

    float dollars;

    do{
        dollars = get_float("Cash owed : ");
    }while(dollars<0);

    int cents = round(dollars*100);

    int quarter=0;
    int dime=0;
    int nickle=0;
    int penny=0;

    while(cents>0){
        if(cents>=25)
        {
            cents -= 25;
            quarter++;
        }
        else if(cents>=10)
        {
            cents -= 10;
            dime++;
        }
        else if(cents>=5)
        {
            cents -= 5;
            nickle++;
        }
        else
        {
            cents--;
            penny++;
        }
    }

    int total = quarter + dime + nickle + penny;

    printf("Give %i Quarters, %i dimes, %i nickles, %i pennies\n",quarter,dime,nickle,penny);
    printf("Total coins : %i\n",total);

}
