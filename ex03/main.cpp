/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miwasa <miwasa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:49:48 by miwasa            #+#    #+#             */
/*   Updated: 2025/03/11 09:20:02 by miwasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	std::srand(std::time(0)); // 乱数シードの初期化

	try {
		// 低ランクの Bureaucrat（実行に必要なグレードを満たさない例）
		Bureaucrat bob("Bob", 150);
		// 高ランクの Bureaucrat（全て実行可能）
		Bureaucrat alice("Alice", 1);
		
		// 各フォームの作成（対象を指定）
		ShrubberyCreationForm shrubbery("Home");
		RobotomyRequestForm robotomy("Bender");
		PresidentialPardonForm pardon("Fry");
		
		std::cout << shrubbery << std::endl;
		std::cout << robotomy << std::endl;
		std::cout << pardon << std::endl;
		
		// 署名と実行のテスト
		bob.signForm(shrubbery);      // Bob は署名に失敗するはず
		alice.signForm(shrubbery);    // Alice による署名成功
		bob.executeForm(shrubbery);   // Bob は実行に失敗
		alice.executeForm(shrubbery); // Alice による実行（ファイル作成）
		
		bob.signForm(robotomy);       // 署名失敗
		alice.signForm(robotomy);     // 署名成功
		bob.executeForm(robotomy);    // 実行失敗
		alice.executeForm(robotomy);  // 実行成功（ドリリング音と成功／失敗の出力）
		
		bob.signForm(pardon);         // 署名失敗
		alice.signForm(pardon);       // 署名成功
		bob.executeForm(pardon);      // 実行失敗
		alice.executeForm(pardon);    // 実行成功（赦免メッセージ）
	}
	catch (std::exception & e) {
		std::cerr << "Exception caught in main: " << e.what() << std::endl;
	}
	return 0;
}
