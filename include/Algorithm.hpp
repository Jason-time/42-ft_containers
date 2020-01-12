/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Algorithm.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 19:01:39 by ncolomer          #+#    #+#             */
/*   Updated: 2020/01/12 19:12:19 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGORITHM_HPP
# define ALGORITHM_HPP

namespace ft
{
template <class InputIterator1, class InputIterator2>
bool lexicographical_compare(InputIterator1 first1, InputIterator1 last1,
							InputIterator2 first2, InputIterator2 last2)
{
	while (first1 != last1)
	{
		if (first2 == last2 || *first2 < *first1)
			return (false);
		else if (*first1 < *first2)
			return (true);
		++first1;
		++first2;
	}
	return (first2 != last2);
}

template<class InputIterator, class T>
InputIterator find(InputIterator first, InputIterator last, const T& val)
{
	while (first != last)
	{
		if (*first == val)
			return first;
		++first;
	}
	return last;
}

template<class value_type>
bool equal(value_type const &a, value_type const &b)
{
return (a == b);
}

template<class value_type>
bool less(value_type const &a, value_type const &b)
{
return (a < b);
}

template<class value_type>
bool more(value_type const &a, value_type const &b)
{
return (a > b);
}
}

#endif