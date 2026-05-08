#include <iostream>
#include <cmath>

using namespace std; 

class Movie {
    private: 
        string rating;
    public: 
        string title;
        string director;
        
        Movie (string aTitle, string aDirector, string aRating) {
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

    void setRating (string aRating) {
        rating = aRating;
    }

    string getRating(){
        return rating;
    }
};

int main() {
    
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    avengers.setRating("Dog");
    cout << avengers.getRating() << endl;

    return 0;
}

