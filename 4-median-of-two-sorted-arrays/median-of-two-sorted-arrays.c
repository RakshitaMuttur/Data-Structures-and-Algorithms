double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) 
{
    int total=nums1Size+nums2Size;
    int merge[total];
    for(int p=0;p<total;p++)
    {
        merge[p]=0;
    }
    int i=0, j=0, k=0;
    while(i<nums1Size && j<nums2Size)
    {
        if(nums1[i]<nums2[j]) merge[k++]=nums1[i++];
        else merge[k++]=nums2[j++];
    }
    
    while(i<nums1Size)
    {
        merge[k++]=nums1[i++];
    }

    while(j<nums2Size)
    {
        merge[k++]=nums2[j++];
    }
for(int p=0;p<total;p++)
    {
        printf("%d ",merge[p]);
    }
    if(total % 2 ==0 )
    {
       return (double)(merge[(total/2)-1]+merge[total/2])/2;
    }

    else return merge[((total+1)/2)-1];

}