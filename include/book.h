#pragma once

#include <string>
#include <vector>

namespace hayohtee
{
    class Book
    {
    public:
        Book();
        Book(std::string theTitle, std::vector<std::string> theAuthors, int theYear);
        const std::string &getTitle() const;
        const std::vector<std::string> &getAuthors() const;
        const int getYear() const;
        void setTitle(std::string nTitle);
        void setAuthors(std::vector<std::string> nAuthors);
        void setYear(int nYear);

    private:
        std::string title;
        std::vector<std::string> authors;
        int year;
    };
}