class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int gap = ceil((float)(n + m) / 2);

        while (gap)
        {
            int pt1 = 0, pt2 = gap;

            while (pt2 < (n + m))
            {
                if (pt2 < n && nums1[pt1] > nums2[pt2])
                {
                    swap(nums1[pt1], nums2[pt2]);
                }
                else if (pt2 >= n && pt1 < n && nums1[pt1] > nums2[pt2 - n])
                {
                    swap(nums1[pt1], nums2[pt2 - n]);
                }
                else if (pt1 >= n && pt2 >= n && nums2[pt1 - n] > nums2[pt2 - n])
                {
                    swap(nums2[pt1 - n], nums2[pt2 - n]);
                }

                pt1++;
                pt2++;
            }
            if (gap == 1)
            {
                gap = 0;
            }
            else
            {
                gap = ceil((float)gap / 2);
            }
        }
    }
};