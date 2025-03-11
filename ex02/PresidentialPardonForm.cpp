/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miwasa <miwasa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 09:35:40 by miwasa            #+#    #+#             */
/*   Updated: 2025/03/11 09:35:56 by miwasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(const std::string & target)
	: AForm("PresidentialPardonForm", 25, 5), _target(target)
{ }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other)
	: AForm(other), _target(other._target)
{ }

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & other)
{
	if (this != &other)
		AForm::operator=(other);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() { }

void PresidentialPardonForm::action() const {
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
