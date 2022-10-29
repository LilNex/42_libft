CC=gcc  #compiler
TARGET:=main #target file name
bonus= #target file name
SOURCES = $(shell ls ft_*.c)
OSOURCES = $(shell ls ft_*.o)
FLAGS = -W -W -W
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
# SRCS_DIR = ./
# SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
# SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

# OBJS_DIR = ./
# OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
# OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))

all:$(SOURCES)
	$(CC)  -c  $(SOURCES)   $(FLAGS)
	
# mandatory:
# 	$(CC) main.c  $(SOURCES)  -o $(TARGET) $(FLAGS)
	
	
 
# clean:
# 	rm $(TARGET)

.c.o: $(SOURCES)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OSOURCES)
	$(AR) $@ $^

# bonus: $(SOURCES)
# 	$(AR) $(NAME) $^

# all: $(NAME)

clean:
	$(RM) $(OSOURCES)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re
# bonus:
# 	$(CC) main.c  $(SOURCES)  -o $(TARGET) $(FLAGS)

# 	ar -rcs libft.a main.c
#     cc -m32 prog.o -L. -lmylib

