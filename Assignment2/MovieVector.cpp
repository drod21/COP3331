/*
 * Derek Rodriguez
 *
 * Allows the user to enter movie information, which is then
 * stored in a vector.
 * The user should enter data for at least one movie, but the
 * program should ask if they have
 * additional information to enter.
 * When the user has indicated that they are done entering movie
 * data, the program should output the information stored in the
 * vector
 *
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Movie {
    string Title, Director;
    int yearReleased, runTime;
};

void movieInput(Movie &newMovies);
void movieOutput(vector<Movie> movies, size_t size);

int main() {
   Movie temp;
    vector<Movie> movies;
    char esc;
    
    // Infinite for loop to continuously run movieInput loop
    // User enter y/Y to continue, n/N to end and print
    
    for (;;) {
        
        movieInput(temp);
        movies.push_back(temp);
        
        cout << "Do you have more movie info to enter?\n"
        << endl;
        
        cout << "Enter y/Y for yes or n/N for no: " << endl;
        
        cin >> esc;
        cin.ignore();
        
        if (esc == 'n' || esc == 'N') {
            movieOutput(movies, movies.size());
            break;
        }
    }
    
    return 0;
}

/* Function to input movie data. Passes each new piece of data to
 * Struct referenced in arguments
 */

void movieInput(Movie &newMovies) {
    
    cout << "\nEnter the title of the movie: " << endl;
    getline(cin, newMovies.Title);
    
    cout << "Enter the director's name: " << endl;
    getline(cin, newMovies.Director);
    
    cout << "Enter the year the movie was created: " << endl;
    cin >> newMovies.yearReleased;
    
    cout << "Enter the movie length (in minutes): " << endl;
    cin >> newMovies.runTime;
    
}
// Function to output movie data. Loops through vector.
void movieOutput(vector<Movie> movies, size_t size) {
    
    cout << "Here is the info that you entered: " << endl;
    for (size_t i = 0; i < size; i++) {
        cout << "\nMovie Title: " << movies[i].Title << endl;
        cout << "Movie Director: " << movies[i].Director << endl;
        cout << "Movie Year: " << movies[i].yearReleased << endl;
        cout << "Movie Length: " << movies[i].runTime << " minutes" << endl;
    }
}
