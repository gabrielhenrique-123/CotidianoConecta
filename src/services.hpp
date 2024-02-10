#ifndef _SERVICES_HPP_
#define _SERVICES_HPP_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

/**
 * @brief Class representing a generic service.
 */
class Services {
protected:
    string name;    /**< Name of the service */
    string description;  /**< Description of the service */

public:
    /**
     * @brief Default constructor.
     */
    Services();

    /**
     * @brief Constructor that initializes members with provided values.
     * @param name Name of the service.
     * @param description Description of the service.
     */
    Services(string name, string description);

    /**
     * @brief Virtual destructor.
     */
    virtual ~Services();

    // Access methods (getters)
    string getName() const;
    string getDescription() const;

    // Modification methods (setters)
    void setName(string name);
    void setDescription(string description);

    /**
     * @brief Displays the service information.
     */
    void show();

    /**
     * @brief Equality operator overloading.
     * @param other Service to be compared.
     * @return true if services are equal, false otherwise.
     */
    bool operator==(const Services& other) const;

    // Copy constructor and assignment operator
    Services(const Services& other);
    Services& operator=(const Services& other);
};

#endif
