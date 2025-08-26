/*

--- Book Recommendation System ---

*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Base class
class Book {
private:
    string title;
    string author;
    float rating;

public:
    Book(string t, string a) : title(t), author(a), rating(0.0) {}

    virtual ~Book() {}

    void setRating(float r) {
        rating = r;
    }

    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    float getRating() const {
        return rating;
    }

    virtual string getGenre() const = 0;
    virtual string getMood() const = 0;

    virtual void display() const {
        cout << "Title: " << title << ", Author: " << author
             << ", Rating: " << rating << endl;
    }
};

// Derived class
class GenreBook : public Book {
private:
    string genre;
    string mood;

public:
    GenreBook(string t, string a, string g, string m)
        : Book(t, a), genre(g), mood(m) {}

    string getGenre() const override {
        return genre;
    }

    string getMood() const override {
        return mood;
    }

    void display() const override {
        Book::display();
        cout << "Genre: " << genre << ", Mood: " << mood << endl;
    }
};

// Book Recommendation System
class BookSystem {
private:
    vector<GenreBook> books;

public:
    void addBook(string title, string author, string genre, string mood) {
        books.push_back(GenreBook(title, author, genre, mood));
        cout << "Book added successfully!\n";
    }

    void rateBook(string title, float rating) {
        for (auto& book : books) {
            if (book.getTitle() == title) {
                book.setRating(rating);
                cout << "Book rated successfully!\n";
                return;
            }
        }
        cout << "Book not found!\n";
    }

    void recommendByGenre(string genre) const {
        cout << "\nRecommended books by Genre: " << genre << endl;
        for (const auto& book : books) {
            if (book.getGenre() == genre) {
                book.display();
                cout << "------------------------\n";
            }
        }
    }

    void recommendByAuthor(string author) const {
        cout << "\nRecommended books by Author: " << author << endl;
        for (const auto& book : books) {
            if (book.getAuthor() == author) {
                book.display();
                cout << "------------------------\n";
            }
        }
    }

    void recommendByMood(string mood) const {
        cout << "\nRecommended books by Mood: " << mood << endl;
        for (const auto& book : books) {
            if (book.getMood() == mood) {
                book.display();
                cout << "------------------------\n";
            }
        }
    }
};

// Menu system
int main() {
    BookSystem system;
    int choice;
    string title, author, genre, mood;
    float rating;

    do {
        cout << "\n--- Book Recommendation System ---\n";
        cout << "1. Add Book\n";
        cout << "2. Rate Book\n";
        cout << "3. Recommend by Genre\n";
        cout << "4. Recommend by Author\n";
        cout << "5. Recommend by Mood\n";
        cout << "0. Exit\n";
        cout << endl << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // clear newline

        switch (choice) {
            case 1:
                cout << "Enter Title: ";
                getline(cin, title);
                cout << "Enter Author: ";
                getline(cin, author);
                cout << "Enter Genre: ";
                getline(cin, genre);
                cout << "Enter Mood: ";
                getline(cin, mood);
                system.addBook(title, author, genre, mood);
                break;
            case 2:
                cout << "Enter Title to rate: ";
                getline(cin, title);
                cout << "Enter Rating (0 to 5): ";
                cin >> rating;
                cin.ignore();
                system.rateBook(title, rating);
                break;
            case 3:
                cout << "Enter Genre: ";
                getline(cin, genre);
                system.recommendByGenre(genre);
                break;
            case 4:
                cout << "Enter Author: ";
                getline(cin, author);
                system.recommendByAuthor(author);
                break;
            case 5:
                cout << "Enter Mood: ";
                getline(cin, mood);
                system.recommendByMood(mood);
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}


/*

======= OUTPUT FORMAT ======== 

--- Book Recommendation System ---

1. Add Book
2. Rate Book
3. Recommend by Genre
4. Recommend by Author
5. Recommend by Mood
0. Exit
Enter your choice: 1
Enter Title: The Alchemist
Enter Author: Paulo Coelho
Enter Genre: Fiction
Enter Mood: Inspirational
Book added successfully!

--- Book Recommendation System ---
1. Add Book
2. Rate Book
3. Recommend by Genre
4. Recommend by Author
5. Recommend by Mood
0. Exit
Enter your choice: 1
Enter Title: 1984
Enter Author: George Orwell
Enter Genre: Dystopian
Enter Mood: Thought-Provoking
Book added successfully!

--- Book Recommendation System ---
1. Add Book
2. Rate Book
3. Recommend by Genre
4. Recommend by Author
5. Recommend by Mood
0. Exit
Enter your choice: 2
Enter Title to rate: The Alchemist
Enter Rating (0 to 5): 4.8
Book rated successfully!

--- Book Recommendation System ---
1. Add Book
2. Rate Book
3. Recommend by Genre
4. Recommend by Author
5. Recommend by Mood
0. Exit
Enter your choice: 3
Enter Genre: Fiction

Recommended books by Genre: Fiction
Title: The Alchemist, Author: Paulo Coelho, Rating: 4.8
Genre: Fiction, Mood: Inspirational
------------------------

--- Book Recommendation System ---
1. Add Book
2. Rate Book
3. Recommend by Genre
4. Recommend by Author
5. Recommend by Mood
0. Exit
Enter your choice: 4
Enter Author: George Orwell

Recommended books by Author: George Orwell
Title: 1984, Author: George Orwell, Rating: 0
Genre: Dystopian, Mood: Thought-Provoking
------------------------

--- Book Recommendation System ---
1. Add Book
2. Rate Book
3. Recommend by Genre
4. Recommend by Author
5. Recommend by Mood
0. Exit
Enter your choice: 5
Enter Mood: Inspirational

Recommended books by Mood: Inspirational
Title: The Alchemist, Author: Paulo Coelho, Rating: 4.8
Genre: Fiction, Mood: Inspirational
------------------------

--- Book Recommendation System ---
1. Add Book
2. Rate Book
3. Recommend by Genre
4. Recommend by Author
5. Recommend by Mood
0. Exit
Enter your choice: 0
Exiting...


*/