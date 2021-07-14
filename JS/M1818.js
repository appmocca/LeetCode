/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var minAbsoluteSumDiff = function(nums1, nums2) {
    let copy = [...nums1]
    copy.sort((a,b) => a - b)
    let sum = 0, maxdiff = 0, len = nums1.length
    for(let i = 0;i < len;i++){
        let a = nums1[i], b = nums2[i]
        if(a == b)  continue
        let x = Math.abs(a-b)
        sum += x
        let lo = 0, hi = len - 1
        while(lo < hi){
            let mid = (hi + lo + 1) >> 1 
            if(copy[mid] >= b)  hi = mid - 1 
            else lo = mid
        }
        let y = Math.abs(copy[hi] - b)
        if(hi + 1 < len) y = Math.min(y, Math.abs(copy[hi + 1] - b))
        if(y < x) maxdiff = Math.max(maxdiff, x - y)
    }
    return (sum - maxdiff) % (1e9 + 7)
};