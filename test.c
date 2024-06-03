#include <stdarg.h>
#include <stdio.h>

void	variadic_func(char *str, ...)
{
	va_list	args;
	int	i;
	i = 0;
	va_start(args, str);

	while (str[i])
	{
		
		if(str[i] == '%')
		{
			printf("%s\n", va_arg(args, char *));
		}
		i++;
	}

	va_end(args);
}

int main()
{
	variadic_func("dadad%sadadad%ssda", "porta", "teste");
}
