void	merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
	int	last = m + n - 1;

	while (m > 0 && n > 0)
	{
		if (nums1[m - 1] < nums2[n - 1])
			nums1[last--] = nums2[--n];
		else
			nums1[last--] = nums1[--m];
	}
	while (n > 0) // in case of any remaining elements in nums2
	{
		nums1[last--] = nums2[--n];
	}
}
