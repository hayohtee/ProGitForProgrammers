#include "movie.h"

namespace hayohtee
{
    Movie::Movie()
        : title("")
    {
    }

    Movie::Movie(std::string theTitle, std::vector<std::string> theActors)
        : title(theTitle), actors(theActors)
    {
    }

    const std::string &Movie::getTitle() const
    {
        return title;
    }

    const std::vector<std::string> &Movie::getActors() const
    {
        return actors;
    }

    void Movie::setTitle(std::string nTitle)
    {
        title = nTitle;
    }

    void Movie::setActors(std::vector<std::string> nActors)
    {
        actors = nActors;
    }

}