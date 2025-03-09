# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miwasa <miwasa@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/09 12:47:58 by miwasa            #+#    #+#              #
#    Updated: 2025/03/09 14:30:34 by miwasa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= Bureaucrat

CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror
CXXFLAGS	+= -std=c++98

SRCS		:= main.cpp \
				Bureaucrat.cpp

OBJS_DIR	:= obj
OBJS		:= $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJS_DIR)/%.o: %.cpp
	mkdir -p $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) -r $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
