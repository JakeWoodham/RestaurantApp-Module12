//
// Created by Jacob Woodham on 7/25/23.
//

#ifndef RESTAURANTAPP_RESTAURANT_H
#define RESTAURANTAPP_RESTAURANT_H

#include <string>
using namespace std;

class Restaurant
{
public:
    //Constructors
    Restaurant();
    Restaurant(string nm);
    Restaurant(string nm, string typ, string priceRng, double avgRating, int numReviews);

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
    string computePriceRangeDescription(const string&);



private:
    //member variables
    string name;
    string type;
    string priceRange;
    double averageRating;
    int numberOfReviews;

};


#endif //RESTAURANTAPP_RESTAURANT_H
