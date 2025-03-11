/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miwasa <miwasa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 09:33:11 by miwasa            #+#    #+#             */
/*   Updated: 2025/03/11 09:33:56 by miwasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(const std::string & target)
	: AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	// 乱数シードは main() で初期化済み
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & other)
	: AForm(other), _target(other._target)
{ }

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & other)
{
	if (this != &other)
		AForm::operator=(other);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() { }

void RobotomyRequestForm::action() const {
	std::cout << "Bzzzzzz... drilling noises..." << std::endl;
	if (std::rand() % 2)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomy of " << _target << " failed." << std::endl;
}
