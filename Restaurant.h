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
    Restaurant(const string& nm);


    //Mutators
    void setName(const string& nm);
    void setType(const string& typ);
    void setPriceRange(const string& priceRng);
    void setAverageRating(double avgRtg);
    void setNumberOfReviews(int numReviews);

    //Accessors
    string getName() const;
    string getType() const;
    string getPriceRange() const;
    double getAverageRating() const;
    int getNumberOfReviews() const;

    //member functions
    string computePriceRangeDescription(const string&) const;



private:
    //member variables
    string name;
    string type;
    string priceRange;
    double averageRating;
    int numberOfReviews;

};


#endif //RESTAURANTAPP_RESTAURANT_H
