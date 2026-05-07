#include <iostream>
#include <cmath>

using namespace std; 

class Book {
    public:
        string title;
        string author;
        int pages;

        Book(string aTitle, string aAuthor, int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }

};

int main() {
    
    Book book1("The God Delusion", "Richard Dawkins", 165);

    cout << book1.title << endl;

    return 0;
}

