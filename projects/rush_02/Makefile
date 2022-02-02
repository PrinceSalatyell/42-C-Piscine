NAME = rush-02
MAIN_DICTIONARY = survy_lex.txt
$(NAME):
	@gcc -Wall -Wextra -Werror rush-02.c -o $(NAME)
clean:
	@find . -name $(NAME) -delete
fclean: clean
	@find data -name *.dict -not -name $(MAIN_DICTIONARY) -delete
