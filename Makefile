NAME = cns_mathlib.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

RM = rm -f

HDR_FILE = cns_math.h

SOURCE_FILES = cns_sqrt.c      \
	       cns_isprime.c   \
	       cns_getnprime.c \
	       cns_primefact.c 

OBJS = $(SOURCE_FILES:.c=.o)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
