#pragma once
#ifndef SORT_H
#define SORT_H
#include"JMacros.h"
#include "LinkList.h"
namespace jeff
{
	class JeffSort
	{
	public:
		static JeffSort jeffSort;
		DYNAMIC
		static void insertSort(T & list)
		{
			for (int n = 0; n < (list.getSize()-1); ++n)
			{
				for (int i = n+1; i > 0; --i)
				{
					auto& temp1 = list[i - 1], & temp2 = list[i];
					if (i != 0 && temp1 > temp2)
						temp1.swap(temp2);
				}
			}
		}
		DYNAMIC
		static void mergeSort(T& list)
		{
			for (int segment = 0; segment < list.getSize(); segment += segment)
			{
				for (int n = 0; list.getSize() / segment; ++n)
				{
					
				}
			}
		}
	
	};
	JeffSort JeffSort::jeffSort;
}

#endif