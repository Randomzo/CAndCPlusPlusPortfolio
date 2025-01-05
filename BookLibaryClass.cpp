#include <format>
#include <iostream>
#include <string>
using namespace std;

class Book
{
    public:
        int BookPublishYear;
        string BookName;
        string AuthorBookName;

    Book (int year, const string& name, const string& author):
        BookPublishYear(year), BookName(name), AuthorBookName(author) {}
    
    void print() const{
        cout << AuthorBookName << ", " << BookName << ", " << BookPublishYear << endl;
    }



};

int main() 
{
    
    Book SayoBook(2005, "Small Nigeiran Girl", "Her parents");
    
    SayoBook.print();
    return{0};
}