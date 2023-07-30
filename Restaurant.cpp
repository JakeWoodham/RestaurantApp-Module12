//
// Created by Jacob Woodham on 7/25/23.
//
#include "Restaurant.h"

//Constructors
Restaurant::Restaurant() //Default
{
    name = "";
    averageRating = 0;
    numberOfReviews = 0;
}

Restaurant::Restaurant(string nm)
{
    name = nm;
    averageRating = 0;
    numberOfReviews = 0;
}

//Mutators
void Restaurant::setName(string nm)
{
    name = nm;
}
void Restaurant::setType(string typ)
{
    type = typ;
}
void Restaurant::setPriceRange(string priceRng)
{
    priceRange = priceRng;
}
void Restaurant::setAverageRating(double avgRtg)
{
    averageRating = avgRtg;
}
void Restaurant::setNumberOfReviews(int numReviews)
{
    numberOfReviews = numReviews;
}


//Accessors
string Restaurant::getName() const
{
    return name;
}
string Restaurant::getType() const
{
    return type;
}
string Restaurant::getPriceRange() const
{
    return priceRange;
}
double Restaurant::getAverageRating() const
{
    return averageRating;
}
int Restaurant::getNumberOfReviews() const
{
    return numberOfReviews;
}

//member functions
string Restaurant::computePriceRangeDescription(string pR) const
{
    if (pR == "$")
        return "Least expensive";
    else if (pR == "$$-$$$")
        return "Avg. expensive";
    else if (pR == "$$$$")
        return "Most expensive";
    else
        return "Invalid Price";
}

