# **************************************************************************** #
#	 ____  __.                       __         .__       _____ ________	   #
#	|    |/ _|______ ___.__. _______/  |______  |  |     /  |  |\_____  \	   #
#	|      < \_  __ <   |  |/  ___/\   __\__  \ |  |    /   |  |_/  ____/	   #
#	|    |  \ |  | \/\___  |\___ \  |  |  / __ \|  |__ /    ^   /       \	   #
#	|____|__ \|__|   / ____/____  > |__| (____  /____/ \____   |\_______ \	   #
#	        \/       \/         \/            \/            |__|        \/	   #
# **************************************************************************** #

# ---------------------------------------------------------------------------- #
# PROJECT CONFIGURATION                                                        #
# ---------------------------------------------------------------------------- #
# - The 'DIR*' variables describe all directories of the project.              #
# ---------------------------------------------------------------------------- #

DIR_SRCS	= srcs
DIR_INCS	= incs
DIR_LIBS	= libs
DIR_DEPS	= .deps
DIR_OBJS	= .objs

# ---------------------------------------------------------------------------- #
# EXTERNAL TOOLS SETTINGS                                                      #
# ---------------------------------------------------------------------------- #
# - Set the default external programs.                                         #
# ---------------------------------------------------------------------------- #

CC			= clang++
AR			= ar
ARFLAGS		= rc
RM			= rm -rf

# ---------------------------------------------------------------------------- #
#                                                                              #
# TARGET SETUP                                                                 #
#                                                                              #
# ---------------------------------------------------------------------------- #
# - The 'NAME' variable must contain the expected name of the output target.   #
# - The 'SRCS' variable must contain the list of the source files without the  #
# base prefix of the directory.                                                #
# ---------------------------------------------------------------------------- #

NAME		= ft_retro

SRCS = \
				main.cpp \
				Bullets/ABullet.cpp \
				Bullets/PlayerBullet.cpp \
				Bullets/MobBullet.cpp \
				Bullets/BulletsManager.cpp \
				Ship/AShip.cpp \
				utils/Position.cpp \
				Ship/ShipMob.cpp	\
				Ship/ShipManager.cpp\
				Space.cpp\
				utils/Utils.cpp

# ---------------------------------------------------------------------------- #
# /!\ COLOR FOR PRINTF /!\                                                     #
# ---------------------------------------------------------------------------- #

RED   =		\x1B[31m
GRN   =		\x1B[32m
YEL   =		\x1B[33m
BLU   =		\x1B[34m
MAG   =		\x1B[35m
CYN   =		\x1B[36m
WHT   =		\x1B[37m
RST   =		\x1B[0m

# ---------------------------------------------------------------------------- #
# PROJECT COMPILATION                                                          #
# ---------------------------------------------------------------------------- #
# - The 'LIBS' tells the compiler where to find libraries.                     #
# - The 'LDFLAGS' tells the linker where to find external libraries (-L flag). #
# - The 'LDLIBS' tells the linker the prefix of external libraries (-l flag).  #
# - The 'CPPFLAGS' tells the compiler where to find preprocessors (-I flag).   #
# - The 'CFLAGS' configures the compiler options.                              #
# ---------------------------------------------------------------------------- #

LIBS		= \

LDFLAGS		= \

LDLIBS		= \
			  -lncurses								\

CPPFLAGS	= \
			  -I$(DIR_INCS)							\

CFLAGS		= \
			 # -Wall -Werror -Wextra					\
				-std=c++98					\

# ---------------------------------------------------------------------------- #
# /!\ SOURCE NORMALIZATION AND COMPILATION RULES /!\                           #
# ---------------------------------------------------------------------------- #

DEPFLAGS	= \
			  -MT $@ -MMD -MP -MF $(DIR_DEPS)/$*.Td	\

COMPILE.cpp	= \
			$(CC) $(DEPFLAGS) $(CFLAGS) $(CPPFLAGS) -c \

POSTCOMPILE	= mv -f $(DIR_DEPS)/$*.Td $(DIR_DEPS)/$*.d

C_SRCS = $(addprefix $(DIR_SRCS)/,$(SRCS))
O_SRCS = $(addprefix $(DIR_OBJS)/,$(SRCS:.cpp=.o))

$(DIR_OBJS)	:
	@mkdir -p $(DIR_OBJS)
$(DIR_DEPS) :
	@mkdir -p $(DIR_DEPS)

# ---------------------------------------------------------------------------- #
# PUBLIC RULES                                                                 #
# ---------------------------------------------------------------------------- #
# The rules must contain at least :                                            #
# - all        make libs and target                                            #
# - $(NAME)    make binaries and target                                        #
# - libs       build static libraries                                          #
# - clean      remove binaries                                                 #
# - fclean     remove binaries and target                                      #
# - fcleanlibs apply fclean rule on libraries                                  #
# - re         remove binaries, target and libraries and build the target      #
#                                                                              #
# To compile a static library, the $(NAME) rule should be :                    #
#     '$(AR) $(ARFLAGS) $(NAME) $(OBJ)'                                        #
#     'ranlib $(NAME)'                                                         #
#                                                                              #
# To compile a C binary, the $(NAME) rule should be :                          #
#     '$(CC) $(OBJ) -o $(NAME) $(LDFLAGS) $(LDLIBS)'                           #
# ---------------------------------------------------------------------------- #

all : $(NAME)

$(NAME)		: $(DIR_OBJS) $(DIR_DEPS) $(O_SRCS) $(LIBS)
	$(CC) $(O_SRCS) -o  $(NAME) $(LDFLAGS) $(LDLIBS)

clean		:
	$(RM) $(DIR_OBJS)
	$(RM) $(DIR_DEPS)


fclean		: clean
	$(RM)	$(NAME)

re			: fclean all

# ---------------------------------------------------------------------------- #
#						 	/!\ PRIVATE RULES /!\						   #
# ---------------------------------------------------------------------------- #

$(DIR_OBJS)/%.o	:	$(DIR_SRCS)/%.cpp
$(DIR_OBJS)/%.o	:	$(DIR_SRCS)/%.cpp $(DIR_DEPS)/%.d
	@mkdir -p $(dir $@)
	@mkdir -p $(dir $(word 2, $^))
	$(COMPILE.cpp) $(OUTPUT_OPTION) $<
	$(POSTCOMPILE)



$(DIR_DEPS)/%.d	: ;
.PRECIOUS		: $(DIR_DEPS)/%.d
-include $(patsubst %,$(DIR_DEPS)/%.d,$(basename $(C_SRCS)))

# ---------------------------------------------------------------------------- #

.PHONY	:	all clean fclean re $(DIR_OBJS)/%.o $(DIR_DEPS)/%.d libs

# ---------------------------------------------------------------------------- #
