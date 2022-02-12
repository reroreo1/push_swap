# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 20:25:27 by rezzahra          #+#    #+#              #
#    Updated: 2022/02/12 04:45:07 by rezzahra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	LLtoArr.c  ft_atoi.c  indexing.c  sa.c \
					ft_lstadd_back_bonus.c  main.c sb.c \
      				ft_lstadd_front_bonus.c ra.c simultanate.c \
					ft_lstlast_bonus.c pa.c rb.c sort.c checker.c \
					ft_lstnew_bonus.c pb.c rra.c sort3.c \
					ft_lstsize_bonus.c rrb.c sort5.c sort4.c

OBJS			= $(SRCS:.c=.o)

BSRCS			=	bonus/ft_atoi.c  bonus/get_next_line_utils.c bonus/swapa.c bonus/ft_lstsize_bonus.c bonus/rotaterb.c\
					bonus/ft_lstadd_back_bonus.c  bonus/checkerb.c bonus/swapb.c \
      				bonus/ft_lstadd_front_bonus.c bonus/rotatea.c bonus/simultanate1.c \
					bonus/ft_lstlast_bonus.c bonus/pusha.c bonus/rotateb.c  \
					bonus/ft_lstnew_bonus.c bonus/pushb.c bonus/rotatera.c\
					bonus/get_next_line.c
					 
INCLUDES		= /bonus/push_swap_bonus.h

BOBJS			= $(BSRCS:.c=.o)

FLAGS			= -Wall -Wextra -Werror

NAME			= push_swap

BNAME			= checker

				
all:			$(NAME)

$(NAME):		$(SRCS)
				gcc  $(FLAGS) $(SRCS) -o $(NAME)

bonus:			$(BNAME)

$(BNAME):		$(BSRCS)
				gcc  $(FLAGS) $(BSRCS) -o $(BNAME)
				
clean:
				rm -f $(OBJS) $(BOBJS)
				
fclean:			clean
				rm -f $(NAME) $(BNAME)

re:				fclean $(NAME) $(BNAME)