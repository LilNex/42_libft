CC=gcc  #compiler
TARGET=main.a #target file name
bonus= #target file name
SOURCES = $(shell ls ft_*.c)
FLAGS = -W -W -W
all:
	$(CC) main.c  $(SOURCES)  -o $(TARGET) $(FLAGS)
 
clean:
	rm $(TARGET)

bonus:
	rm $(bonus)
