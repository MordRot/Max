#pragma once

template <typename T>
T max(T a, T b, T c)
{
	return (a > b) ? ((b > c) ? a : (c > a) ? c : a) : ((b > c) ? b : c);

	//if (a > b)
	//{
	//	if (b > c)
	//	{
	//		return a;
	//	}
	//	else
	//	{
	//		if (a > c)
	//		{
	//			return a;
	//		}
	//		else
	//		{
	//			return c;
	//		}
	//	}
	//}
	//else
	//{
	//	if (b > c)
	//	{
	//		return b;
	//	}
	//	else
	//	{
	//		return c;
	//	}
	//}
}