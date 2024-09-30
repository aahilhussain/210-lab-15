#include <iostream>
#include <iomanip>
#include <fstream> 
#include <string>
#include <vector>


using namespace std;

const int W15 = 15;

//movie class
class Movie{
    private:
    string screen_writer;
    int year_released;
    string title;

    public:
    //initialzing constructor
    Movie() : screen_writer(""), year_released(0), title("") {}

    //setters
    void setScreenWriter(const string& writer) { screen_writer = writer;}
    void setYearReleased(int year) { year_released = year;}
    void setTitle(const string& t) { title = t; }

    //getters
    string getScreenWriter() const {return screen_writer;}
    int getYearReleased() const {return year_released;}
    string getTitle() const {return title;}

    //print function
    void print() const {
        cout << setw(W15) << "Movie: " << title << endl;
        cout << setw(W15) << "Year released: " << year_released << "\n";
        cout << setw(W15) << "Screenwriter: " << screen_writer << "\n";
    }
};

int main() {
    //open file
    ifstream inputFile("lab15.txt");
    if(!inputFile) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    vector<Movie> movies;
    Movie tempMovie;

    string open; 
    //set up and read file
    while (getline(inputFile, open)){
        if (open.empty()) continue;
        tempMovie.setTitle(open);
        if (!getline(inputFile, open) || open.empty()) break;
        tempMovie.setYearReleased(stoi(open));
        if (!getline(inputFile, open) || open.empty()) break;
        tempMovie.setScreenWriter(open);
    
        movies.push_back(tempMovie);
    }

    //movie.print is giving error, come back to this
    //const needed in print function

    //print the movies
    for (const auto& movie : movies) {
        movie.print();
    }

    inputFile.close();
    return 0;
}