#include "pushswap.h"

void	quick_sort(int *numbers, int left, int right)
{
	int	pivot;
	int l_hold;
	int r_hold;

	pivot = numbers[left];
	l_hold = left;
	r_hold = right;
	while (left < right)
	{
		while ((numbers[right] >= pivot) && (left < right))
			right--;
		if (left != right)
		{
			numbers[left] = numbers[right];
			left++;
		}
		while ((numbers[left] <= pivot) && (left < right))
			left++;
		if (left != right)
		{
			numbers[right] = numbers[left];
			right--;
		}
	}
	numbers[left] = pivot;
	pivot = left;
	left = l_hold;
	right = r_hold;
	if (left < pivot)
		quick_sort(numbers, left, pivot - 1);
	if (right > pivot)
		quick_sort(numbers, pivot + 1, right);
}
