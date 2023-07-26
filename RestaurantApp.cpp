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


void displayRestaurantInstance(const Restaurant& restaurant);

using namespace std;


int main() {

    Restaurant restaurant1("BettyLou'sSeafoodandGrill");
    restaurant1.setType("Seafood,VegetarianFriendly,VeganOptions");
    restaurant1.setPriceRange("$$-$$$");
    restaurant1.setAverageRating(4.50);
    restaurant1.setNumberOfReviews(243);

    Restaurant restaurant2("Malbec");
    restaurant2.setType("Steakhouse,Latin,Argentinean");
    restaurant2.setPriceRange("$$$$");
    restaurant2.setAverageRating(4.50);
    restaurant2.setNumberOfReviews(193);

    Restaurant restaurant3("TableTalkDiner");
    restaurant3.setType("American,Diner,VegetarianFriendly");
    restaurant3.setPriceRange("$$-$$$");
    restaurant3.setAverageRating(4.00);
    restaurant3.setNumberOfReviews(256);

    Restaurant restaurant4("Chic'sDeli");
    restaurant4.setType("American");
    restaurant4.setPriceRange("$");
    restaurant4.setAverageRating(4.50);
    restaurant4.setNumberOfReviews(43);

    //Display the data of each restaurant instance
    displayRestaurantInstance(restaurant1);
    displayRestaurantInstance(restaurant2);
    displayRestaurantInstance(restaurant3);
    displayRestaurantInstance(restaurant4);

    return 0;
}

void displayRestaurantInstance(const Restaurant& restaurant)
{
    cout << "Name:" << restaurant.getName() << endl;
    cout << "Type:" << restaurant.getType() << endl;
    cout << "Price Range:" << restaurant.getPriceRange() << endl;
    cout << "Avg Ratings:" << restaurant.getAverageRating() << endl;
    cout << "Number Of Reviews:" << restaurant.getNumberOfReviews() << endl;
    cout << "Price Range Description:" << restaurant.computePriceRangeDescription(restaurant.getPriceRange()) << endl;
    cout << endl;
}