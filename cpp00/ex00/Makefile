# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daumis <daumis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/02 14:26:36 by daumis            #+#    #+#              #
#    Updated: 2023/09/27 18:33:03 by daumis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_MAIN		=	megaphone.cpp \

SRCS			= ${SRC_MAIN}

OBJ				= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

NAME            = megaphone

all:			$(NAME)

$(NAME):		$(OBJ)
				@echo "\033[1;35m\n                              ⌛️Compiling files...\033[0m"
				$(CXX) $(OBJ) $(CXXFLAGS) -o $(NAME)
				@echo "\033[32;1m\n                     Project has compiled successfully! ✅ \033[0m"
				@echo "\033[32;1m\n 💾 Executable './$(NAME)' has been created in: \n    └─ 📂 \033[4;36m ~ $(PWD)\033[0m"

clean:
	$(RM) $(OBJ)

fclean:
	@echo "\033[1;33m\n                        [Cleaning directories with \033[0;36mfclean\033[1;33m]\n\033[0m"
	@make clean
	$(RM) $(NAME)

re:	
	@make fclean
	@echo "\033[1;33m\n                            [Calling \033[0;36mmake all\033[1;33m rule]\n\033[0m"
	@make -s all

.PHONY:	all clean fclean re
