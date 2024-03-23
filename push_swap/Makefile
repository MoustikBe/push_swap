SRC			= push_swap_main ps_lib_custom ps_store ps_verif ps_error ps_index ps_split \
			component/pa component/pb component/ra \
			component/rb component/rr component/rra component/rrb component/rrr \
			component/sa component/sb component/ss \
			algo/main_algo algo/big_sort algo/mini_sort algo/utils_sort  

SRCS		= $(addsuffix .c, ${SRC})

HEAD		= ./includes/ 

OBJS		= ${SRCS:.c=.o}

NAME		= push_swap.a

CC			= gcc
RM			= rm -f
AR			= ar rc
RN			= ranlib

CFLAGS		= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}
			${RN} ${NAME}

all:		$(NAME)

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} $(NAME)


re:			fclean all

