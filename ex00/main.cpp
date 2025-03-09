/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miwasa <miwasa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:49:48 by miwasa            #+#    #+#             */
/*   Updated: 2025/03/09 14:23:49 by miwasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat b1("Alice", 2);
		std::cout << b1 << std::endl;

		b1.incrementGrade();
		std::cout << b1 << std::endl;

		b1.incrementGrade();
	}
	catch (const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try {
		Bureaucrat b2("Bob", 151);
	}
	catch (const std::exception& e) {
		std::cerr << "Exception caught during creation: " << e.what() << std::endl;
	}

	return 0;
}
