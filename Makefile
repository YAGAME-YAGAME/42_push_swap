


all: mandatoty

mandatoty:
	@make -C ./mandatory/

bonus: bs

bs:
	@make -C ./bonus/ 

clean:
	@make -C ./mandatory/ clean
	@make -C ./bonus/ clean

fclean:
	@make -C ./mandatory/ fclean
	@make -C ./bonus/ fclean

re: fclean all