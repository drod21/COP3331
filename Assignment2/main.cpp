/*
 * Derek Rodriguez
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
    
    string Title;
    string Director;
    int yearReleased;
    int runTime;
    
};

//void movieInput(string& movieTitle, string& movieDirector, int& year, int& runningTime);
void movieInput(Movie &newMovies);

void movieOutput(vector<Movie> movies, size_t size);

int main() {
    
    Movie temp;
    vector<Movie> movies;
    char esc;
    
    
    
    for (;;) {
        
        movieInput(temp);
        
        movies.push_back(temp);
        cout << "Do you have more movie info to enter?\n"
        << endl;
        
        cout << "Enter y/Y for yes or n/N for no: " << endl;
        
        cin >> esc;
        cin.ignore();
        
        if (esc == 'n' || esc == 'N') {
            
            break;
            
        }
        
    }
    
    movieOutput(movies, movies.size());
    
    return 0;
    
}

void movieInput(Movie &newMovies) {
    
    cout << "Enter the title of the movie: " << endl;
    getline(cin, newMovies.Title);
    cout << "Enter the director's name: " << endl;
    getline(cin, newMovies.Director);
    cout << "Enter the year the movie was created: " << endl;
    cin >> newMovies.yearReleased;
    cout << "Enter the movie length (in minutes): " << endl;
    cin >> newMovies.runTime;
    
}

void movieOutput(vector<Movie> movies, size_t size) {
    
    cout << "Here is the info that you entered: " << endl;
    
    for (size_t i = 0; i < size; i++) {
        
        cout << "Movie Title: " << movies[i].Title << endl;
        cout << "Movie Director: " << movies[i].Director << endl;
        cout << "Movie Year: " << movies[i].yearReleased << endl;
        cout << "Movie Length: " << movies[i].runTime << endl;
        
    }
    
}
