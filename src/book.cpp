#include "book.h"

namespace hayohtee
{
    Book::Book()
        : title(""), year(0)
    {
    }

    Book::Book(std::string theTitle, std::vector<std::string> theAuthors, int theYear)
        : title(theTitle), authors(theAuthors), year(theYear)
    {
    }

    const std::string &Book::getTitle() const
    {
        return title;
    }

    const std::vector<std::string> &Book::getAuthors() const
    {
        return authors;
    }

    const int Book::getYear() const
    {
        return year;
    }

    void Book::setTitle(std::string nTitle)
    {
        title = nTitle;
    }

    void Book::setAuthors(std::vector<std::string> nAuthors)
    {
        authors = nAuthors;
    }

    void Book::setYear(int nYear)
    {
        year = nYear;
    }
}