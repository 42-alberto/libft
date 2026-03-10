NAME	= libft.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
LIBC	= ar rcs
RM		= rm -f

# --- PARTE OBLIGATORIA ---
SRC	= ft_isdigit.c\
ft_isalpha.c\
ft_isalnum.c\
ft_isascii.c\
ft_isprint.c\
ft_strlen.c\
ft_memset.c\
ft_bzero.c\
ft_memcpy.c\
ft_memmove.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_toupper.c\
ft_tolower.c\
ft_strchr.c\
ft_strrchr.c\
ft_strncmp.c\
ft_memchr.c\
ft_memcmp.c\
ft_strnstr.c\
ft_atoi.c\
ft_calloc.c\
ft_strdup.c\
ft_substr.c\
ft_strjoin.c\
ft_strtrim.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\
ft_strmapi.c\
ft_striteri.c\
ft_itoa.c\
ft_split.c

OBJ	= $(SRC:.c=.o)

# --- PARTE BONUS ---
SRC_BONUS	= ft_lstnew.c\
ft_lstadd_front.c\
ft_lstsize.c\
ft_lstlast.c\
ft_lstadd_back.c\
ft_lstdelone.c

OBJ_BONUS	= $(SRC_BONUS:.c=.o)

# Regla principal (obligatoria)
all: $(NAME)

# Compila la librería uniendo los objetos
# Usamos el condicional para evitar el relink
$(NAME): $(OBJ)
	$(LIBC) $(NAME) $(OBJ)

bonus: .bonus

.bonus: $(OBJ) $(OBJ_BONUS)
	$(LIBC) $(NAME) $(OBJ) $(OBJ_BONUS)
	@touch .bonus
# Compilación de archivos .c en .o
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(OBJ_BONUS) .bonus

fclean: clean
	$(RM) $(NAME)

re: fclean all

# Marcamos las reglas como "falsas" para evitar conflictos con archivos reales
.PHONY: all bonus clean fclean re