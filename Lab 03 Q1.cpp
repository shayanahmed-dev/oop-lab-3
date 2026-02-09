#include <iostream>
#include <string>
using namespace std;
class Book {
    private:
        double price;
        string title;
        string author;
    
    public:
        Book(){
            title = "Untitled";
            author = "Anonymous";
            price = 0.0;
        }
        Book(string t, string a, double p) {
        title = t;
        author = a;
        price = p;
    }
    Book(const Book &other) {
        title = other.title;
        author = other.author;
        price = other.price;
    }
    Book(string t, string a = "Unknown") {
        title = t;
        author = a;
        price = 0.0; 
    }

    void displayDetails() const {
        cout << "Title: " << title << " | Author: " << author 
             << " | Price: $" << price << endl;
    }
};


int main() {

    Book b1;
    b1.displayDetails();

    Book b2("The Hobbit", "J.R.R. Tolkien", 12.50);
    b2.displayDetails();

    Book b3(b2); 
    b3.displayDetails();

    Book b4("The Mystery of the Missing Semicolon");
    b4.displayDetails();

    return 0;
}