#pragma once
#include<string>
#include <vector>

namespace jl{

    /**
     * \brief Abstract base class representing a system user.
     *
     * Provides common data and operations for users of the cinema system.
     * Specific user types implement the virtual methods.
     */
    class User{
    protected:
        std::string m_name;     /**< User name. */
        std::string m_password; /**< User password. */

    public:
        /**
         * \brief Default constructor.
         *
         * Creates a user with default name and password.
         */
        User(){
            m_name="nobody";
            m_password="none";
        };

        /**
         * \brief Parametric constructor.
         *
         * Creates a user using the given name and password.
         *
         * \param name User name.
         * \param password User password.
         */
        User(std::string name,std::string password);

        /**
         * \brief Virtual destructor.
         */
        virtual ~User(){};
        
        /**
         * \brief Returns the user name.
         *
         * \return User name.
         */
        virtual std::string getName()const=0;

        /**
         * \brief Returns the user password.
         *
         * \return User password.
         */
        virtual std::string getPassword()const=0;

        /**
         * \brief Sets the user name.
         *
         * \param name User name.
         */
        virtual void setName(std::string name)=0;

        /**
         * \brief Sets the user password.
         *
         * \param password User password.
         */
        virtual void setPassword(std::string password)=0;

        /**
         * \brief Logs the user into the system.
         *
         * \param p2 Indicates whether the login was successful.
         */
        virtual void login(bool &p2)=0;

        /**
         * \brief Loads seating data from a file into a matrix.
         *
         * \param matrix Matrix containing the seating data.
         * \param f Name of the file containing the seating data.
         */
        virtual void loadS(std::vector<std::vector<int>>&matrix,std::string f)=0;

        /**
         * \brief Displays the available movies.
         */
        virtual void showMovies()=0;

        /**
         * \brief Displays the available seats in a cinema room.
         *
         * \param c Cinema room number.
         * \param matrix1 Seating matrix for room 1.
         * \param matrix2 Seating matrix for room 2.
         */
        virtual void showSeat(int c,std::vector<std::vector<int>>&matrix1,std::vector<std::vector<int>>&matrix2)=0;
        
        /**
         * \brief Registers a new user.
         */
        virtual void registration()=0;
    };
}
