#include <iostream>
#include <string>
using namespace std;

struct Sale_data
{
    string isbn() const { return bookNo; }
    Sale_data& combine(const Sale_data&);
    double avg_price() const;

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

// Non-member function to add two Sale_data objects
Sale_data add(const Sale_data& lhs, const Sale_data& rhs) {
    Sale_data sum = lhs; // Start with lhs
    sum.combine(rhs);    // Combine with rhs
    return sum;         // Return the combined result
}

// Non-member function to print Sale_data
ostream& print(ostream& os, const Sale_data& data) {
    os << "ISBN: " << data.isbn() << ", Units Sold: " << data.units_sold 
       << ", Revenue: " << data.revenue;
    return os;
}

// Non-member function to read Sale_data
istream& read(istream& is, Sale_data& data) {
    is >> data.bookNo >> data.units_sold >> data.revenue;
    return is;
}

// Implementation of combine function
Sale_data& Sale_data::combine(const Sale_data& rhs) {
    units_sold += rhs.units_sold; // Combine units sold
    revenue += rhs.revenue;       // Combine revenue
    return *this;                 // Return the current object
}

// Implementation of avg_price function
double Sale_data::avg_price() const {
    return units_sold ? revenue / units_sold : 0; // Avoid division by zero
}

int main() {
    Sale_data book1, book2;
    // Example usage of read function
    cout << "Enter book details (ISBN, units sold, revenue): ";
    read(cin, book1);
    cout << "Enter another book details (ISBN, units sold, revenue): ";
    read(cin, book2);

    Sale_data total = add(book1, book2);
    print(cout, total) << endl;

    return 0;
}