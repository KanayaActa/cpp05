/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miwasa <miwasa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 09:30:56 by miwasa            #+#    #+#             */
/*   Updated: 2025/03/11 09:31:22 by miwasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <string>

class ShrubberyCreationForm : public AForm {
private:
	const std::string _target;
public:
	ShrubberyCreationForm(const std::string & target);
	ShrubberyCreationForm(const ShrubberyCreationForm & other);
	ShrubberyCreationForm & operator=(const ShrubberyCreationForm & other);
	virtual ~ShrubberyCreationForm();

	virtual void action() const;
};
