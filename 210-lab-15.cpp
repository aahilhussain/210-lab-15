#include <iostream>
#include <iomanip>
#include <fstream> 
#include <string>
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
    string getTitle() {return title;}

    void print() {
        cout << setw(W15) << "Movie: " << title << endl;
        cout << setw(W15) << "Year released: " << year_released << "\n";
        cout << "Screenwriter: " << screen_writer << "\n";
    }
};