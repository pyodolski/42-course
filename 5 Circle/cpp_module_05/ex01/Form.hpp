/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <jupyo@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:48:09 by jupyo             #+#    #+#             */
/*   Updated: 2025/08/14 20:42:00 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include <ostream>

class Bureaucrat;

class Form
{
	private:
		const std::string 	_name;
		bool				_is_signed;
		const int			_sign_grade;
		const int			_execute_grade;

	public:
		Form();
		Form(const std::string name, const int sign_grade, const int execute_grade);
		Form(const Form &other);
		Form &operator=(const Form &other);
		~Form();

		void		beSigned(const Bureaucrat &bureaucrat);
		std::string getName() const;
		bool		getIsSigned() const;
		int			getSignGrade() const;
		int			getExecuteGrade() const;

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
};

std::ostream &operator<<(std::ostream &os,  Form const &form);

#endif