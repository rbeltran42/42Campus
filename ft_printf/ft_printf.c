/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:09:37 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/26 11:48:34 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>                                                              
#include <stdarg.h>   
#include <stdlib.h>
/*
int ft_printf(const char *input, ...)
{
	va_list arg_ptr;                                                             
   	int args = 0;                                                                
   	char *src;
	//int argumnts = 3;                                                             
                                                                                
   	va_start(arg_ptr, input);                                                      
   	while(!args)                                                            
   	{                                                                            
      src[args] = va_arg(arg_ptr, char *);                                     
      //printf("Day:  %c  \n", src[args++]);                                     
    }                                                                         
   	va_end(arg_ptr);  

	return(args);
}*/
 /*      DE LIBRERIA    */

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
static void	*wr_str(char *str, long un, int i)
{
	while (un)
	{
		str[i--] = 48 + (un % 10);
		un = un / 10;
	}
	return (str);
}

static	int	len_nu(long int n)
{	
	int	len;

	len = 0;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	if (n == 0)
		len++;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	un;

	un = n;
	i = len_nu(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = 48;
		str[1] = '\0';
		return (str);
	}
	if (un < 0)
	{
		str[0] = '-';
		un = un * -1;
	}
	wr_str(str, un, i);
	return (str);
}
char	*ft_return(char *src)
{
   char *x;
   x = src;
   return(x);
	
}
 /**************************/                                                                                                           
                                                                             
char *buffer;
int ft_vsprintf(char *s, const char *format, va_list arg)
{
   int i;
   int j;
   char *dest;

   j = 0;
   i = 0;
   while(i < (int)ft_strlen(format))
   {  
      if (format[i] == 37 && format[i + 1] == 'd')
         {
            printf("%s\n", ft_itoa(va_arg(arg,int)));
            // printf("Entro \n");
            //buffer = ft_itoa(va_arg(arg,int));
            //*buffer = '5';
            j++;
         }
         if (format[i] == 37 && format[i + 1] == 's')
         {
            printf("%s\n", ft_return(va_arg(arg,char *)));
            // printf("Entro \n");
            //*buffer = ft_itoa(va_arg(arg,int));
            //buffer = ft_return(va_arg(arg,char *));
            //arg++;
            j++;
         }
      
      i++;
   }
   return(0); 
}
int ft_printf(char *format, ...) {
   va_list aptr;
   int ret;

   va_start(aptr, format);
   //ret = vsprintf(buffer, format, aptr);
   ret = ft_vsprintf(buffer, format, aptr);
   va_end(aptr);

   return(ret);
}
//int ft_vsprintf(char *s, const char *format, va_list arg)


int main () 
{
   int i = 555;
   int j = 251;
   char *x = "ruben";

   ft_printf("%d%d%s", i,j,x);
   printf("\"-->%s\"\n", buffer);
   
   return(0);
}
