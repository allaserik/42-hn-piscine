/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:37:58 by eallas            #+#    #+#             */
/*   Updated: 2024/02/05 15:37:49 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function that converts the initial portion of the string pointed by str
 * to its int representation.
 * The string can start with an arbitray amount of white space
 * (as determined by isspace(3))
 * The string can be followed by an arbitrary amount of + and - signs, - sign
 * will change the sign of the int returned based on the number of - is odd or
 * even. Finally the string can be followed by any numbers of the base 10.
 * Your function should read the string until the string stop following the
 * rules and return the number found until now.
 * You should not take care of overflow or underflow.
 * Result can be undefined in that case.
 * The line number = number * 10 + (*str - '0'); is responsible for converting
 * each digit character in the string to its corresponding numerical value and
 * adding it to the number variable. Let's break it down:
 * *str: Dereferences the pointer str to get the character at the
 * current position.
 * (*str - '0'): Converts the character representation of a digit to its
 * numerical value. In ASCII, the characters '0' to '9' have consecutive
 * values, so subtracting the ASCII value of '0' from any digit character
 * gives its numerical value.
 * number * 10 + (*str - '0'): Multiplies the current value of number by 10
 * (shifting the digits to the left) and adds the numerical value of the
 * current digit.
 * This process continues as long as the characters in the string are digits
 * ('0' to '9'). It effectively builds the integer representation of the
 * numeric part of the string.
 */
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 1;
	number = 0;
	while (*str && *str <= ' ')
		str++;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (sign * number);
}

/**
 * Main function to test the ft_atoi() function.
 */
// int	main(void)
// {
// 	char	*str;

// 	str = "1234567890";
// 	printf("%d\n", ft_atoi(str));
// 	str = "-1234567890";
// 	printf("%d\n", ft_atoi(str));
// 	str = "+1234567890";
// 	printf("%d\n", ft_atoi(str));
// 	str = "12345678901234567890";
// 	printf("%d\n", ft_atoi(str));
// 	str = "-12345678901234567890";
// 	printf("%d\n", ft_atoi(str));
// }
