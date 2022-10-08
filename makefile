CC=gcc  #compiler
TARGET:=main #target file name
bonus= #target file name
SOURCES = $(shell ls ft_*.c)
FLAGS = -W -W -W
all:
	$(CC) main.c  $(SOURCES)  -o $(TARGET) $(FLAGS)
	
 
clean:
	rm $(TARGET)

# bonus:
# 	$(CC) main.c  $(SOURCES)  -o $(TARGET) $(FLAGS)

# 	ar -rcs libft.a main.c
#     cc -m32 prog.o -L. -lmylib

