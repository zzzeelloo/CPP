#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

// static void printSeparator(const std::string &title)
// {
//     std::cout << "\n===== " << title << " =====" << std::endl;
// }

// // ─── ShrubberyCreationForm ───────────────────────────────────────────────────

// static void testShrubbery_success()
// {
//     printSeparator("Shrubbery - Success");
//     // gradeToSign = 145, gradeToExecute = 137
//     Bureaucrat bob("Bob", 137);
//     ShrubberyCreationForm form("garden");

//     bob.signForm(form);           // grade 137 <= 145 → OK
//     form.execute(bob);            // grade 137 <= 137 → OK  → creates garden_shrubbery
//     std::cout << "[OK] garden_shrubbery file should have been created." << std::endl;
// }

// static void testShrubbery_notSigned()
// {
//     printSeparator("Shrubbery - Execute without signing");
//     Bureaucrat alice("Alice", 137);
//     ShrubberyCreationForm form("park");

//     try {
//         form.execute(alice);      // form not signed → throws FormNotSigned
//     } catch (const std::exception &e) {
//         std::cout << "[CAUGHT] " << e.what() << std::endl;
//     }
// }

// static void testShrubbery_gradeTooLow()
// {
//     printSeparator("Shrubbery - Grade too low to sign");
//     Bureaucrat low("LowRank", 150);
//     ShrubberyCreationForm form("forest");

//     low.signForm(form);           // grade 150 > 145 → prints error message
// }

// // ─── RobotomyRequestForm ─────────────────────────────────────────────────────

// static void testRobotomy_success()
// {
//     printSeparator("Robotomy - Success");
//     // gradeToSign = 72, gradeToExecute = 45
//     Bureaucrat rob("Rob", 45);
//     RobotomyRequestForm form("Bender");

//     rob.signForm(form);           // 45 <= 72 → OK
//     form.execute(rob);            // 45 <= 45 → OK  → 50 % robotomized
// }

// static void testRobotomy_gradeTooLowToExecute()
// {
//     printSeparator("Robotomy - Grade too low to execute");
//     Bureaucrat mid("Mid", 72);
//     RobotomyRequestForm form("R2D2");

//     mid.signForm(form);           // 72 <= 72 → signed
//     try {
//         form.execute(mid);        // 72 > 45 → throws GradeTooLow
//     } catch (const std::exception &e) {
//         std::cout << "[CAUGHT] " << e.what() << std::endl;
//     }
// }

// // ─── PresidentialPardonForm ──────────────────────────────────────────────────

// static void testPardon_success()
// {
//     printSeparator("Presidential Pardon - Success");
//     // gradeToSign = 25, gradeToExecute = 5
//     Bureaucrat president("President", 5);
//     PresidentialPardonForm form("Arthur Dent");

//     president.signForm(form);     // 5 <= 25 → OK
//     form.execute(president);      // 5 <= 5  → OK
// }

// static void testPardon_gradeTooLowToSign()
// {
//     printSeparator("Presidential Pardon - Grade too low to sign");
//     Bureaucrat junior("Junior", 26);
//     PresidentialPardonForm form("Ford Prefect");

//     junior.signForm(form);        // 26 > 25 → prints error message
// }

// static void testPardon_gradeTooLowToExecute()
// {
//     printSeparator("Presidential Pardon - Grade too low to execute");
//     Bureaucrat signer("Signer", 25);
//     Bureaucrat executor("Executor", 6);
//     PresidentialPardonForm form("Trillian");

//     signer.signForm(form);        // 25 <= 25 → signed
//     try {
//         form.execute(executor);   // 6 > 5 → throws GradeTooLow
//     } catch (const std::exception &e) {
//         std::cout << "[CAUGHT] " << e.what() << std::endl;
//     }
// }

// // ─── Bureaucrat edge cases ───────────────────────────────────────────────────

// static void testBureaucrat_invalidGrade()
// {
//     printSeparator("Bureaucrat - Invalid grade at construction");

//     try {
//         Bureaucrat tooHigh("Ghost", 0);  // grade < 1
//     } catch (const std::exception &e) {
//         std::cout << "[CAUGHT grade 0] " << e.what() << std::endl;
//     }

//     try {
//         Bureaucrat tooLow("Ghost", 151); // grade > 150
//     } catch (const std::exception &e) {
//         std::cout << "[CAUGHT grade 151] " << e.what() << std::endl;
//     }
// }

// // ─── Main ────────────────────────────────────────────────────────────────────

int main(void)
{
	Intern intern;
	AForm *form;

	form = intern.makeForm("robotomy request", "Bender");
	delete form;
	form = intern.makeForm("shrubbery creation", "garden");
	delete form;
	form = intern.makeForm("presidential pardon", "Arthur Dent");
	delete form;
	form = intern.makeForm("coffee request", "office");
	delete form;
	return 0;
}