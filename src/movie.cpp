#include "movie.h"


 
Movie::Movie(){
    m_title="none";
    m_author="none";
    m_film_genre="none";
    m_time="0:00";
    m_room=0;
}
    
Movie::Movie(std::string title,std::string author,std::string film_genre,std::string time,int room){
    m_title=title;
    m_author=author;
    m_film_genre=film_genre;
    m_time=time;
    m_room=room;
}
    
void Movie::setTitle(std::string title){
    m_title=title;
}


void Movie::setAuthor(std::string author){
    m_author=author;
}

void Movie::setFilm_genre(std::string film_genre){
    m_film_genre=film_genre;
}


void Movie::setTime(std::string time){
    m_time=time;
}

void Movie::setRoom(int room){
    m_room=room;
}

std::string Movie::getTitle()const{
    return m_title;
}

std::string Movie::getAuthor()const{
    return m_author;
}

std::string Movie::getFilm_genre()const{
    return m_film_genre;
}

std::string Movie::getTime()const{
    return m_time;
}

int Movie::getRoom()const{
    return m_room;
}

void Movie::display(){
    std::cout<<"Movie titled: "<<m_title<<" by: "<<m_author<<" film genre: "<<m_film_genre<<" about time: "<<m_time<<" in: "<<m_room<<" room "<<std::endl;
}