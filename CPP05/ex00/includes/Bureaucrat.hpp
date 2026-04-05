#include <iostream>

class Bureaucrat 
{
    private:
    std::string name;
    unsigned int grade;

    public:
    Bureaucrat();
    Bureaucrat(std::string name, unsigned int grade);
    Bureaucrat(const Bureaucrat &copy);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &copy);

    std::string getName() const;
    unsigned int getGrade() const;
    
    void incrementGrade();
    void decrementGrade();

    class GradeTooHighException : public std::exception
    {
        public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        public:
        const char* what() const throw();
    };

};