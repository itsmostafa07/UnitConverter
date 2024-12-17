#include <stdio.h>
#include <stdlib.h>

int categorySelection = -1;
int conversionSelection = -1;

float a;

int main()
{
    printf("Welcome to my Unit Converter! \n");

    while (categorySelection != 0)
    {
        printf("Select what category you want to convert by entering the number beside it : \n");
        printf("1- Length \n2- Area \n3- Volume \n4- Mass \n5- Velocity \n6- Energy \n7- Temperature \n8- Currency\n");
        printf("Enter 0 to exit\n\nSelection : ");
        scanf("%d", &categorySelection);

        switch (categorySelection)
        {
        case 1:
            printf("You chose Length! \n\n");
            conversionSelection = -1;

            while (conversionSelection != 0)
            {
                printf("Select the conversion by entering the number beside it : \n");
                printf("1- inch -> cm \n2- cm -> inch \n3- ft -> m \n4- m -> ft \n5- yard -> m \n6- m -> yard\n7- mile -> km\n8- km -> mile \n");
                printf("Enter 0 to go back to Category Selection \n\nSelection : ");
                scanf("%d", &conversionSelection);
                switch (conversionSelection)
                {
                case 1:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f cm\n\n", a * 2.54);
                    break;

                case 2:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f inch\n\n", a / 2.54);
                    break;

                case 3:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f m\n\n", a * 0.3048);
                    break;

                case 4:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f ft\n\n", a / 0.3048);
                    break;

                case 5:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f m\n\n", a * 0.9144);
                    break;

                case 6:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f yard\n\n", a / 0.9144);
                    break;

                case 7:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f km\n\n", a * 1.609);
                    break;

                case 8:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f mile\n\n", a / 1.609);
                    break;
                }
            }

            categorySelection = -1;
            break;

        case 2:
            printf("You chose Area! \n\n");
            conversionSelection = -1;
            while (conversionSelection != 0)
            {
                printf("Select the conversion by entering the number beside it : \n");
                printf("1- acre -> m^2 \n2- m^2 -> acre \n3- inch^2 -> cm^2 \n4- cm^2 -> inch^2 \n5- ft^2 -> m^2 \n6- m^2 -> ft^2\n7- mile^2 -> km^2\n8- km^2 -> mile^2 \n");
                printf("Enter 0 to go back to Category Selection \n\nSelection : ");
                scanf("%d", &conversionSelection);
                switch (conversionSelection)
                {
                case 1:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f m^2\n\n", a * 4046.86);
                    break;

                case 2:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f acre\n\n", a / 4046.86);
                    break;

                case 3:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f cm^2\n\n", a * 6.4516);
                    break;

                case 4:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f inch^2\n\n", a / 6.4516);
                    break;

                case 5:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f m^2\n\n", a / 10.764);
                    break;

                case 6:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f ft^2\n\n", a * 10.764);
                    break;

                case 7:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f km^2\n\n", a * 2.59);
                    break;

                case 8:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f mile^2\n\n", a / 2.59);
                    break;
                }
            }
            categorySelection = -1;
            break;

        case 3:
            printf("You chose Volume! \n\n");
            conversionSelection = -1;

            while (conversionSelection != 0)
            {
                printf("Select the conversion by entering the number beside it : \n");
                printf("1- inch^3 -> cm^3 \n2- cm^3 -> inch^3 \n3- ft^3 -> m^3 \n4- m^3 -> ft^3 \n");
                printf("Enter 0 to go back to Category Selection \n\nSelection : ");
                scanf("%d", &conversionSelection);

                switch (conversionSelection)
                {
                case 1:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f cm^3\n\n", a * 16.3871);
                    break;

                case 2:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f inch^3\n\n", a / 16.3871);
                    break;

                case 3:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f m^3\n\n", a / 35.315);
                    break;

                case 4:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f ft^3\n\n", a * 35.315);
                    break;
                }
            }

            categorySelection = -1;
            break;

        case 4:
            printf("You chose Mass! \n\n");
            conversionSelection = -1;

            while (conversionSelection != 0)
            {
                printf("Select the conversion by entering the number beside it : \n");
                printf("1- oz -> g \n2- g -> oz \n3- lb -> kg \n4- kg -> lb \n");
                printf("Enter 0 to go back to Category Selection \n\nSelection : ");
                scanf("%d", &conversionSelection);

                switch (conversionSelection)
                {
                case 1:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f g\n\n", a * 28.35);
                    break;

                case 2:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f oz\n\n", a / 28.35);
                    break;

                case 3:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f kg\n\n", a / 2.205);
                    break;

                case 4:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f lb\n\n", a * 2.205);
                    break;
                }
            }

            categorySelection = -1;
            break;

        case 5:
            printf("\nYou chose Velocity! \n\n");
            conversionSelection = -1;

            while (conversionSelection != 0)
            {
                printf("Select the conversion by entering the number beside it :  \n");
                printf("1- km/h -> m/s \n2- m/s -> km/h \n3- miles/h -> m/s \n4- m/s -> miles/h \n5- ft/s -> m/s \n6- m/s -> ft/s \n");
                printf("Enter 0 to go back to Category Selection \n\nSelection : ");
                scanf("%d", &conversionSelection);

                switch (conversionSelection)
                {
                case 1:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f m/s\n\n", a * (5.0/18.0));
                    break;

                case 2:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f km/h\n\n", a / (5.0/18.0));
                    break;

                case 3:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f m/s\n\n", a * 0.44704);
                    break;     

                case 4:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f miles/h\n\n", a / 0.44704);

                case 5:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f m/s \n\n" , a * 0.3048);

                case 6:
                        printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f ft/s \n\n" , a / 0.3048);        
                }
            }

            categorySelection = -1;
            break;

        case 6:
            printf("You chose Energy! \n\n");
            conversionSelection = -1;

            while (conversionSelection != 0)
            {
                printf("Select the conversion by entering the number beside it :  \n");
                printf("1- kgf.m -> J\n2- J -> kgf.m \n3- J -> cal \n4- cal -> J \n");
                printf("Enter 0 to go back to Category Selection \n\nSelection : ");
                scanf("%d", &conversionSelection);
                switch (conversionSelection)
                {
                case 1:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f J\n\n", a * 9.81);
                    break;

                case 2:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f kgf.m\n\n", a / 9.81);
                    break;

                case 3:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f cal\n\n", a / 4.184);
                    break;

                case 4:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f J\n\n", a * 4.184);
                    break;
                }
            }

            categorySelection = -1;
            break;

        case 7:
            printf("You chose Temperature! \n\n");
            conversionSelection = -1;

            while (conversionSelection != 0)
            {
                printf("Select the conversion by entering the number beside it. \n");
                printf("1- C -> F \n2- F -> C \n3- C -> K \n4- K -> C \n");
                printf("Enter 0 to go back to Category Selection \n\nSelection : ");
                scanf("%d", &conversionSelection);

                switch (conversionSelection)
                {
                case 1:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f F\n\n", a * (9.0/5.0) + 32.0);
                    break;

                    case 2:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f C\n\n", (a - 32.0) * (5.0/9.0));
                    break;

                    case 3:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f K\n\n", a + 274.15);
                    break;

                    case 4:
                    printf("Enter the number you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f C\n\n", a - 274.15);
                    break;
                }
            }

                categorySelection = -1;
                break;

        case 8:
        printf("You chose Currency! \n\n");
        conversionSelection = -1;

        while (conversionSelection != 0)
        {
            printf("Select the conversion by entering the number beside it :  \n");
            printf("1- USD -> EGP \n2- EGP -> USD \n3- USD -> EUR \n4- EUR -> USD \n5- EUR -> EGP \n6- EGP -> EUR \n7- SAR -> EGP \n8- EGP -> SAR \n");
            printf("Enter 0 to go back to Category Selection \n\nSelection : ");
            scanf("%d", &conversionSelection);

            switch (conversionSelection)
            {
                case 1:
                    printf("Enter the number of USD you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f EGP\n\n", a * 50.84);
                    break;

                    case 2:
                    printf("Enter the number of EGP you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f USD\n\n", a / 50.84);
                    break;

                    case 3:
                    printf("Enter the number of USD you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f EUR\n\n", a * 0.95);
                    break;

                    case 4:
                    printf("Enter the number of EUR you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f USD\n\n", a / 0.95);
                    break;

                    case 5:
                    printf("Enter the number of EUR you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f EGP\n\n", a * 53.43);
                    break;

                    case 6:
                    printf("Enter the number of EGP you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f EUR\n\n", a / 53.43);
                    break;

                    case 7:
                    printf("Enter the number of SAR you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f EGP\n\n", a * 13.50);
                    break;

                    case 8:
                    printf("Enter the number of EGP you want to convert or enter 0 to go back : ");
                    scanf("%f", &a);
                    if (a != 0)
                        printf("\nThe result is : %.4f SAR\n\n", a / 13.50);
                    break;
        } 

        }

            categorySelection = -1;
            break;

        case 0:
            printf("Exiting...\n");
            exit(0);

        default:
            printf("Invalid selection.\nPlease try again  \n\n");
        }
    }
}