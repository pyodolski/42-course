/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <jupyo@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:48:06 by jupyo             #+#    #+#             */
/*   Updated: 2025/08/14 20:23:57 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _is_signed(false), _sign_grade(150), _execute_grade(150)
{

}

Form::Form(const std::string name, const int sign_grade, const int execute_grade) : _name(name), _is_signed(false), _sign_grade(sign_grade), _execute_grade(execute_grade)
{

}

Form::Form(const Form &other) : _name(other._name), _is_signed(other._is_signed), _sign_grade(other._sign_grade), _execute_grade(other._execute_grade)
{

}

Form &Form::operator=(const Form &other)
{
	_is_signed = other._is_signed;
	return (*this);
}

Form::~Form()
{
	
}

// Member function
void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _sign_grade)
		_is_signed = true;
	else
		throw GradeTooLowException();
}


std::string Form::getName() const
{
	return (_name);
}

bool Form::getIsSigned() const
{
	return (_is_signed);
}

int Form::getSignGrade() const
{
	return (_sign_grade);
}

int Form::getExecuteGrade() const
{
	return (_execute_grade);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}


std::ostream &operator<<(std::ostream &os,  Form const &form)
{
	os << "Name: " << form.getName() << " isSigned: " << form.getIsSigned() << " SignGrade: " << form.getSignGrade() << " ExecuteGrade: " << form.getExecuteGrade() << std::endl;
	return (os);
}