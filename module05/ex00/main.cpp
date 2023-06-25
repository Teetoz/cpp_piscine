/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:10:42 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/25 20:38:13 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try	
	{
		Bureaucrat	a;
		Bureaucrat	b("b", 75);
		Bureaucrat	c(b);
		Bureaucrat	d = c;
		Bureaucrat	e;

		e = d;

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		std::cout << d << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return 1;
	}
		

	
	return 0;
}