#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book {
public:
    string nameOfBook;
    string authorName;
    int year = 0;
    string category;

    void show_info() const{
        cout << "Book name: " << nameOfBook << "; Author: " << authorName << "; Year: " << year << endl;
    }
};

class Library {
public:
    string nameOfLibrary;
    vector<Book> listOfBooks;

    void add_books_in_library(const Book& book1){
        listOfBooks.push_back(book1);
    }
    void show_books(const string& author){
        for (auto & listOfBook : listOfBooks){
            if (author == listOfBook.authorName){
                listOfBook.show_info();
            } else {
                cout << "There is no more books from this author yet..." << endl;
            }
        }
    }
    void sort_books(){
        Book value;
        for (int i = 0; i < listOfBooks.size()-1; i++){
            if (listOfBooks[i].category[0] > listOfBooks[i+1].category[0]){
                value = listOfBooks[i];
                listOfBooks[i] = listOfBooks[i+1];
                listOfBooks[i+1] = value;
            }
        }
        for (const auto & listOfBook : listOfBooks){
            listOfBook.show_info();
        }
    }

};

int main(){
    Library library1;
    library1.nameOfLibrary = "Book_house";
    while (true){
        int answer;
        cout << "Choose what you need:" << endl
        << "1. Add a book;" << endl
        << "2. Find a book;" << endl
        << "3. Sort the book list." << endl;
        cin >> answer;
        switch (answer) {
            case 1:{
                string book_name, author_name, cat;
                int year_cycl;
                cout << "Write down name of your book: (use _ instead ' ', ex. Crime_and_Punishment)" << endl;
                cin >> book_name;
                cout << "Write down name of author: (use _ instead ' ', ex. Fedor_Dostoevsky)" << endl;
                cin >> author_name;
                cout << "Write down the book's year: " << endl;
                cin >> year_cycl;
                cout << "Write down the category: " << endl;
                cin >> cat;

                Book book_cycl;
                book_cycl.nameOfBook = book_name;
                book_cycl.authorName = author_name;
                book_cycl.year = year_cycl;
                book_cycl.category = cat;

                library1.add_books_in_library(book_cycl);
                cout << "Your book has successfully added!" << endl;
                break;
            }
            case 2:{
                string author_name;
                cout << "Write down author name to find books: " << endl;
                cin >> author_name;
                library1.show_books(author_name);
                break;
            }
            case 3:{
                library1.sort_books();
                break;
            }
            default:{
                break;
            }
        }
    }
}