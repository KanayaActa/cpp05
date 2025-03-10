/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miwasa <miwasa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:49:48 by miwasa            #+#    #+#             */
/*   Updated: 2025/03/10 14:08:51 by miwasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		Bureaucrat bob("Bob", 50);
		Form contract("Contract", 45, 30);

		std::cout << contract << std::endl;
		bob.signForm(contract);  // Bob のグレードは 50 なので、45 より大きく、署名できないはず
		std::cout << contract << std::endl;

		Bureaucrat alice("Alice", 40);
		alice.signForm(contract);  // Alice は 40 なので、45 以下（ランクが高い）ため署名可能
		std::cout << contract << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
}
