COMPILER=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
OBJ=tests.o Account.o
NAME=a.out

$(NAME): $(OBJ)
	$(COMPILER) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(COMPILER) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
