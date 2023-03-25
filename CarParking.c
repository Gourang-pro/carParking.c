#include <stdio.h>
#include <conio.h>
int main() 
{
    int totalCars = 5;                               // total number of cars that can be parked
    int parkedCars = 0;                             // number of cars currently parked
    int emptySpaces = totalCars - parkedCars;      // number of empty parking spaces
    
                                                // loop to park cars
    while (parkedCars < totalCars) 
    {
                                             // check if there are empty spaces
        if (emptySpaces > 0) {
            printf("Park a car. %d spaces left.\n", emptySpaces);
            parkedCars++;
            emptySpaces = totalCars - parkedCars;
        }
                                        // if no empty spaces, break out of loop
        else {
            printf("Sorry, no empty parking spaces.\n");
            break;
        }
    }
    
    return 0;
}