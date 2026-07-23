// Question 6 (Difficulty ⭐⭐⭐☆☆)

// Ab dekhte hain tum logic ko kitna achhe se apply karte ho.

// Write a C++ program that satisfies the following requirements:

// Create a class named Movie.
// Data members:
// movieName
// rating (float)
// year
// Create three objects.
// Take input for all three movies.
// Print the details of the movie with the highest rating.
// If two movies have the same highest rating, print the one with the latest release year.
// Rules
// ❌ No constructors
// ❌ No member functions
// ❌ No arrays
// ❌ No loops
// ❌ No hints

#include <iostream>
#include <string>
using namespace std;

class Movie
{
public:
    string movieName;
    float rating;
    int year;
};

int main()
{
    Movie m1, m2, m3;

    cout << "Enter details of Movie 1: ";
    cin >> m1.movieName >> m1.rating >> m1.year;

    cout << "Enter details of Movie 2: ";
    cin >> m2.movieName >> m2.rating >> m2.year;

    cout << "Enter details of Movie 3: ";
    cin >> m3.movieName >> m3.rating >> m3.year;

    if (m1.rating > m2.rating && m1.rating > m3.rating)
    {
        cout << "Movie with Highest Rating:" << endl;
        cout << "Name: " << m1.movieName << endl;
        cout << "Rating: " << m1.rating << endl;
        cout << "Year: " << m1.year << endl;
    }
    else if (m2.rating > m1.rating && m2.rating > m3.rating)
    {
        cout << "Movie with Highest Rating:" << endl;
        cout << "Name: " << m2.movieName << endl;
        cout << "Rating: " << m2.rating << endl;
        cout << "Year: " << m2.year << endl;
    }
    else if (m3.rating > m1.rating && m3.rating > m2.rating)
    {
        cout << "Movie with Highest Rating:" << endl;
        cout << "Name: " << m3.movieName << endl;
        cout << "Rating: " << m3.rating << endl;
        cout << "Year: " << m3.year << endl;
    }
    else if (m1.rating == m2.rating && m1.rating > m3.rating)
    {
        if (m1.year > m2.year)
        {
            cout << "Movie with Highest Rating:" << endl;
            cout << "Name: " << m1.movieName << endl;
            cout << "Rating: " << m1.rating << endl;
            cout << "Year: " << m1.year << endl;
        }
        else
        {
            cout << "Movie with Highest Rating:" << endl;
            cout << "Name: " << m2.movieName << endl;
            cout << "Rating: " << m2.rating << endl;
            cout << "Year: " << m2.year << endl;
        }
    }
    else if (m1.rating == m3.rating && m1.rating > m2.rating)
    {
        if (m1.year > m3.year)
        {
            cout << "Movie with Highest Rating:" << endl;
            cout << "Name: " << m1.movieName << endl;
            cout << "Rating: " << m1.rating << endl;
            cout << "Year: " << m1.year << endl;
        }
        else
        {
            cout << "Movie with Highest Rating:" << endl;
            cout << "Name: " << m3.movieName << endl;
            cout << "Rating: " << m3.rating << endl;
            cout << "Year: " << m3.year << endl;
        }
    }
    else if (m2.rating == m3.rating && m2.rating > m1.rating)
    {
        if (m2.year > m3.year)
        {
            cout << "Movie with Highest Rating:" << endl;
            cout << "Name: " << m2.movieName << endl;
            cout << "Rating: " << m2.rating << endl;
            cout << "Year: " << m2.year << endl;
        }
        else
        {
            cout << "Movie with Highest Rating:" << endl;
            cout << "Name: " << m3.movieName << endl;
            cout << "Rating: " << m3.rating << endl;
            cout << "Year: " << m3.year << endl;
        }
    }
    else
    {
        cout << "All three movies have the same rating." << endl;

        if (m1.year >= m2.year && m1.year >= m3.year)
        {
            cout << "Name: " << m1.movieName << endl;
            cout << "Rating: " << m1.rating << endl;
            cout << "Year: " << m1.year << endl;
        }
        else if (m2.year >= m1.year && m2.year >= m3.year)
        {
            cout << "Name: " << m2.movieName << endl;
            cout << "Rating: " << m2.rating << endl;
            cout << "Year: " << m2.year << endl;
        }
        else
        {
            cout << "Name: " << m3.movieName << endl;
            cout << "Rating: " << m3.rating << endl;
            cout << "Year: " << m3.year << endl;
        }
    }

    return 0;
}



// Placement Tip

// Ye code correct hai, lekin interview mein main tumhe ye likhne ko nahi bolunga.

// Kyun?

// Isme bahut repetition hai (cout baar-baar likha gaya hai).
// if-else conditions kaafi lambi ho gayi hain.
// Real interviews mein interviewer aksar bolega: "Can you simplify this?"

// Jaise-jaise hum functions, constructors, aur pointers/references seekhenge, isi problem ko hum 10–15 lines kam aur zyada clean tarike se solve karenge.