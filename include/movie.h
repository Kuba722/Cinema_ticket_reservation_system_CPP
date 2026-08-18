#pragma once
#include<string> 
#include<iostream>

/**
 * \brief Represents a movie available in the cinema.
 *
 * Stores information about the movie, including its title,
 * author, genre, screening time and cinema room.
 */
class Movie {
    std::string m_title;        /**< Movie title. */    
    std::string m_author;       /**< Movie author. */
    std::string m_film_genre;   /**< Movie genre. */
    std::string m_time;         /**< Movie screening time. */
    int m_room;                 /**< Cinema room number. */
public:
    /**
     * \brief Default constructor.
     *
     * Creates a movie with default values.
     */
    Movie();
    
    /**
     * \brief Parametric constructor.
     *
     * Creates a movie using the given information.
     *
     * \param title Movie title.
     * \param author Movie author.
     * \param film_genre Movie genre.
     * \param time Movie screening time.
     * \param room Cinema room number.
     */
    Movie(std::string title,std::string author,std::string film_genre,std::string time,int room);
    

    /**
     * \brief Sets the movie title.
     *
     * \param title Movie title.
     */
    void setTitle(std::string title);

    /**
     * \brief Sets the movie author.
     *
     * \param author Movie author.
     */
    void setAuthor(std::string author);

    /**
     * \brief Sets the movie genre.
     *
     * \param film_genre Movie genre.
     */
    void setFilm_genre(std::string film_genre);

    /**
     * \brief Sets the movie screening time.
     *
     * \param time Movie screening time.
     */
    void setTime(std::string time);


    /**
     * \brief Sets the cinema room number.
     *
     * \param room Cinema room number.
     */
    void setRoom(int room);

    /**
     * \brief Returns the movie title.
     *
     * \return Movie title.
     */
    std::string getTitle()const;

    /**
     * \brief Returns the movie author.
     *
     * \return Movie author.
     */
    std::string getAuthor()const;

    /**
     * \brief Returns the movie genre.
     *
     * \return Movie genre.
     */
    std::string getFilm_genre()const;

    /**
     * \brief Returns the movie screening time.
     *
     * \return Movie screening time.
     */
    std::string getTime()const;

    /**
     * \brief Returns the cinema room number.
     *
     * \return Cinema room number.
     */
    int getRoom()const;

    /**
     * \brief Displays information about the movie.
     *
     * Prints the movie title, author, genre, screening time
     * and cinema room to the standard output.
     */
    void display();
};