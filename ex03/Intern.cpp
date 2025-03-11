/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miwasa <miwasa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 09:59:43 by miwasa            #+#    #+#             */
/*   Updated: 2025/03/11 09:59:45 by miwasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// 関数ポインタの型定義：target を引数にとり AForm* を返す関数
typedef AForm* (*form_creator)(const std::string & target);

// 各フォームの生成用関数
static AForm* createShrubbery(const std::string & target) {
    return new ShrubberyCreationForm(target);
}

static AForm* createRobotomy(const std::string & target) {
    return new RobotomyRequestForm(target);
}

static AForm* createPardon(const std::string & target) {
    return new PresidentialPardonForm(target);
}

Intern::Intern() {
    // 特に初期化すべきものはなし
}

Intern::Intern(const Intern &other) {
    // コピーする内容は特になし
    (void)other;
}

Intern & Intern::operator=(const Intern &other) {
    // 代入する内容は特になし
    (void)other;
    return *this;
}

Intern::~Intern() {
    // クラスが保持するリソースはない
}

AForm* Intern::makeForm(const std::string &formName, const std::string &target) {
    // フォーム名と対応する生成関数のマッピングを配列にまとめる
    struct formMapping {
        std::string name;
        form_creator creator;
    };

    formMapping forms[] = {
        { "shrubbery creation", &createShrubbery },
        { "robotomy request", &createRobotomy },
        { "presidential pardon", &createPardon }
    };

    const int n = sizeof(forms) / sizeof(formMapping);
    for (int i = 0; i < n; i++) {
        if (forms[i].name == formName) {
            std::cout << "Intern creates " << forms[i].name << std::endl;
            return forms[i].creator(target);
        }
    }
    std::cout << "Intern: Unknown form name \"" << formName << "\"" << std::endl;
    return NULL;
}
