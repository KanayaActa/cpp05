/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miwasa <miwasa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 09:50:01 by miwasa            #+#    #+#             */
/*   Updated: 2025/03/11 09:59:33 by miwasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <string>
#include <iostream>

class Intern {
public:
	Intern();
	Intern(const Intern &other);
	Intern & operator=(const Intern &other);
	~Intern();
	AForm* makeForm(const std::string &formName, const std::string &target);
};
