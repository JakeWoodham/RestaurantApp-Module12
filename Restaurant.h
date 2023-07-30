//
// Created by Jacob Woodham on 7/25/23.
//

#ifndef RESTAURANTAPP_RESTAURANT_H
#define RESTAURANTAPP_RESTAURANT_H

#include <string>
using namespace std;

class Restaurant
{
private:
    //member variables
    string name;
    string type;
    string priceRange;
    double averageRating;
    int numberOfReviews;

public:
    //Constructors
    Restaurant(); //Default Constructor
    Restaurant(string nm); //Constructor with name parameter


    //Mutators
    void setName(string nm);
    void setType(string typ);
    void setPriceRange(string priceRng);
    void setAverageRating(double avgRtg);
    void setNumberOfReviews(int numReviews);

    //Accessors
    string getName() const;
    string getType() const;
    string getPriceRange() const;
    double getAverageRating() const;
    int getNumberOfReviews() const;

    //member functions
    string computePriceRangeDescription(string pR) const;
};


#endif //RESTAURANTAPP_RESTAURANT_H
