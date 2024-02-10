#include "services.hpp"

// Implementation of class Services methods

// Default constructor
Services::Services() {}

// Constructor that initializes members with provided values
Services::Services(string name, string description)
    : name(name), description(description) {}

// Virtual destructor
Services::~Services() {}

// Access methods (getters)
string Services::getName() const {
    return name;
}

string Services::getDescription() const {
    return description;
}

// Modification methods (setters)
void Services::setName(string name) {
    this->name = name;
}

void Services::setDescription(string description) {
    this->description = description;
}

// Displays the service information
void Services::show() {
    cout << "Name: " << name << endl;
    cout << "Description: " << description << endl;
}

// Equality operator overloading
bool Services::operator==(const Services& other) const {
    return (name == other.name && description == other.description);
}

// Copy constructor
Services::Services(const Services& other) {
    name = other.name;
    description = other.description;
}

// Assignment operator
Services& Services::operator=(const Services& other) {
    if (this != &other) {
        name = other.name;
        description = other.description;
    }
    return *this;
}
