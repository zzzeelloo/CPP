#pragma once

#include <string>

class AForm;

class Intern
{
    private:
        static AForm *createShrubbery(std::string const &target);
        static AForm *createRobotomy(std::string const &target);
        static AForm *createPardon(std::string const &target);

    public:
        Intern();
        Intern(Intern const &other);
        Intern &operator=(Intern const &other);
        ~Intern();

        AForm *makeForm(std::string const &formName,
                        std::string const &target) const;
};