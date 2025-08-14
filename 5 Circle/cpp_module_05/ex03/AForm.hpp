/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <jupyo@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:54:02 by jupyo             #+#    #+#             */
/*   Updated: 2025/08/14 21:55:16 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include <ostream>

class Bureaucrat;

class AForm
{
	private:
		const std::string 	_name;
		bool				_is_signed;
		const int			_sign_grade;
		const int			_execute_grade;
		virtual void	performAction() const = 0;

	public:
		// Constructors
		AForm();
		AForm(const std::string name, const int sign_grade, const int execute_grade);
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);
		virtual ~AForm();

		// Member fonctions
		void			beSigned(const Bureaucrat &bureaucrat);
		std::string 	getName() const;
		bool			getIsSigned() const;
		int				getSignGrade() const;
		int				getExecuteGrade() const;
		void			setIsSigned(bool is_signed);
		void			execute(const Bureaucrat &executor) const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class IsNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os,  AForm const &AForm);

#endif
