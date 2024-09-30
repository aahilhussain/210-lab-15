#include <iostream>
#include <iomanip>
#include <fstream> 
#include <string>
#include <vector>
using namespace std;

const int W15 = 15;

class Movie{
    private:
    string screen_writer;
    int year_released;
    string title;

    public:
    //constructor
    Movie() : screen_writer(""), year_released(0), title("") {}

    //setters
    void setScreenWriter(const string& writer) { screen_writer = writer;}
    void setYearReleased(int year) { year_released = year;}
    void setTitle(const string& t) { title = t; }

    //getters
    string getScreenWriter() const {return screen_writer;}
    int getYearReleased() const {return year_released;}
    string getTitle() const {return title;}

    void print() {
        cout << setw(W15) << "Movie: " << title << endl;
        cout << setw(W15) << "Year released: " << year_released << "\n";
        cout << "Screenwriter: " << screen_writer << "\n";
    }
};

int main() {
    ifstream inputFile("input.txt");
    if(!inputFile) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    vector<Movie> movies;
    Movie tempMovie;

    string open; 
    while (getline(inputFile, open)){
        tempMovie.setTitle(open);
        getline(inputFile, open);
        tempMovie.setYearReleased(open;)
        getline(inputFile, line)
        tempMovie.setScreenWriter(line);
    
        movies.push_back(tempMovie);
    }

    //movie.print is giving error, come back to this
    for (const auto& movie : movies) {
        movie.print();
    }

    inputFile.close();
    return 0;
}