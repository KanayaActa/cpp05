/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miwasa <miwasa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:49:48 by miwasa            #+#    #+#             */
/*   Updated: 2025/03/11 14:36:14 by miwasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include <iostream>

int main() {
    Intern someRandomIntern;
    AForm* rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if (rrf)
        std::cout << "Form created: " << *rrf << std::endl;
    else
        std::cout << "Form creation failed." << std::endl;
    
    // 生成したフォームは適宜 delete してください
    delete rrf;
    return 0;
}

