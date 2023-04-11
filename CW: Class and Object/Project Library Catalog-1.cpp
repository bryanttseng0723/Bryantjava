#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book 
{
    string title;
    string author;
    int year;

public:
    Book(string Title, string Author, int Year) 
    {
        title = Title;
        author = Author;
        year = Year;
    }

    string getTitle() 
    {
        return title;
    }

    string getAuthor() 
    {
        return author;
    }

    int getYear() 
    {
        return year;
    }

    void setTitle(string Title) 
    {
        title = Title;
    }

    void setAuthor(string Author) 
    {
        author = Author;
    }

    void setYear(int Year) 
    {
        year = Year;
    }
};

class LibraryCatalog 
{
    vector<Book> books;

public:
    void addBook(Book b) 
    {
        books.push_back(b);
    }

    void searchByTitle(string title) 
    {
        bool found = false;
        for (int i = 0; i < books.size(); i++) 
        {
            if (books[i].getTitle() == title) 
            {
                cout <<" "<< books[i].getTitle() << " by " << books[i].getAuthor() << ", published in " << books[i].getYear() << endl;
                found = true;
            }
        }
        if (!found) 
        {
            cout <<" "<< "No book with title " << title << " found." << endl;
        }
    }

    void searchByAuthor(string author) 
    {
        bool found = false;
        for (int i = 0; i < books.size(); i++) 
        {
            if (books[i].getAuthor() == author) 
            {
                cout <<" "<< books[i].getTitle() << " by " << books[i].getAuthor() << ", published in " << books[i].getYear() << endl;
                found = true;
            }
        }
        if (!found) 
        {
            cout <<" "<< "No book by author " << author << " found." << endl;
        }
    }

    void removeBook(string title) 
    {
        bool removed = false;
        for (int i = 0; i < books.size(); i++) 
        {
            if (books[i].getTitle() == title) 
            {
                books.erase(books.begin() + i);
                cout <<" "<< "Book with title " << title << " removed." << endl;
                removed = true;
                break;
            }
        }
        if (!removed) 
        {
            cout <<" "<< "No book with title " << title << " found." << endl;
        }
    }

    void displayAllBooks() 
    {
        if (books.empty()) 
        {
            cout <<" "<< "The library catalog is empty." << endl;
        } 
        else 
        {
            for (int i = 0; i < books.size(); i++) 
            {
                cout <<" "<<"Title: "<< books[i].getTitle() << endl;
                cout <<" "<<"Author: " << books[i].getAuthor() << endl;
                cout <<" "<<"Published in " << books[i].getYear() << endl;
                cout << endl;
            }
        }
    }
};

int main() 
{
    LibraryCatalog catalog;
    cout << "~ Wellcome the Library Catalog ~" << endl;
    cout << endl;

    while (true) 
    {
        cout <<" "<< "< Main Menu: >" << endl;
        cout <<" "<< "1. Add a new book" << endl;
        cout <<" "<< "2. Search for a book" << endl;
        cout <<" "<< "3. Remove a book from catalog" << endl;
        cout <<" "<< "4. Display all books in our library" << endl;
        cout <<" "<< "5. Quit" << endl;
        cout <<" "<< "What would you like to do? ";

        int choice;
        cin >> choice;

        if (choice == 1) 
        {
            string title, author;
            int year;

            cout <<" "<< "Enter the title of new books: ";
            cin.ignore();
            getline(cin, title);

            cout <<" "<< "Enter the book's author: ";
            cin.ignore();
            getline(cin, author);

            cout <<" "<< "Enter the year of the book publication: ";
            cin.ignore();
            cin >> year;

            Book b(title, author, year);
            catalog.addBook(b);
        } 

        else if (choice == 2) 
        {
            cout <<" "<< "Search by title or author? (t/a): ";
            char searchType;
            cin >> searchType;

            if (searchType == 't') 
            {
                string title;

                cout <<" "<< "Enter the book's title to search for: ";
                cin.ignore();
                getline(cin, title);

                catalog.searchByTitle(title);
            } 

            else if (searchType == 'a') 
            {
                string author;

                cout <<" "<< "Enter the book's author to search for: ";
                cin.ignore();
                getline(cin, author);

                catalog.searchByAuthor(author);
            } 
            
            else 
            {
                cout <<" "<< "Invalid choice." << endl;
            }

        } 
        
        else if (choice == 3) 
        {
            string title;

            cout <<" "<< "Enter the title of the book to remove: ";
            cin.ignore();
            getline(cin, title);

            catalog.removeBook(title);
        } 
        
        else if (choice == 4) 
        {
            catalog.displayAllBooks();
        } 
        
        else if (choice == 5) 
        {
            cout <<" "<<"Have a nice day!" << endl;
            break;
        } 
        
        else 
        {
            cout << "Invalid choice." << endl;
        }

        cout << endl;
    }

    return 0;
}
