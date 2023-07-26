/* Name: Jacob Woodham
 * Date: 07/25/2023
 * Section:COP3363-0002
 * Assignment: Module 12: Restaurant Rating Data Using a Class Program & Unix Makefile
 * Due Date: 07/30/2023
 * About this project: Create a Restaurant class with its own source and header file.
 * Create instances of the restaurant class and display them.
 * Assumptions: NA
 * All work below was performed by Jacob Woodham */

#include <iostream>
#include "Restaurant.h"
#include <string>

void displayRestaurantInstance(Restaurant restaurant);

using namespace std;


int main() {

    Restaurant restaurant1("BettyLou'sSeafoodandGrill", "Seafood,VegetarianFriendly,VeganOptions" , "$$-$$$", 4.50, 243);
    Restaurant restaurant2("Malbec", "Steakhouse,Latin,Argentinean", "$$$$", 4.50, 193);
    Restaurant restaurant3("TableTalkDiner", "American,Diner,VegetarianFriendly", "$$-$$$", 4.00, 256);
    Restaurant restaurant4("Chic'sDeli", "American", "$", 4.50, 43);

    displayRestaurantInstance(restaurant1);
    displayRestaurantInstance(restaurant2);
    displayRestaurantInstance(restaurant3);
    displayRestaurantInstance(restaurant4);

    return 0;
}

void displayRestaurantInstance(Restaurant restaurant)
{
    cout << "Name:" << restaurant.getName() << endl;
    cout << "Type:" << restaurant.getType() << endl;
    cout << "Price Range:" << restaurant.getPriceRange() << endl;
    cout << "Avg Ratings:" << restaurant.getAverageRating() << endl;
    cout << "Number Of Reviews:" << restaurant.getNumberOfReviews() << endl;
    cout << "Price Range Description:" << restaurant.computePriceRangeDescription(restaurant.getPriceRange()) << endl << endl;
}