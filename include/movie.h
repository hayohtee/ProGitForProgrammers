#pragma once

#include <string>
#include <vector>

namespace hayohtee
{
    class Movie
    {
    public:
        Movie();
        Movie(std::string theTitle, std::vector<std::string> theActors);
        const std::string &getTitle() const;
        const std::vector<std::string> &getActors() const;
        void setTitle(std::string nTitle);
        void setActors(std::vector<std::string> nActors);

    private:
        std::string title;
        std::vector<std::string> actors;
    };
}