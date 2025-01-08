LIBMX := libmx.a

INCDIR := inc
SRCDIR := src
OBJDIR := obj

SRCS := $(wildcard $(SRCDIR)/*.c)
OBJS := $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRCS))

CC := clang
CFLAGS := -std=c11 -Wall -Wextra -Werror -Wpedantic -I$(INCDIR)

all: $(LIBMX)

$(LIBMX): $(OBJS) | $(OBJDIR)
	ar -rcs $(LIBMX) $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

uninstall:
	rm -rf $(LIBMX) $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

reinstall: uninstall all
