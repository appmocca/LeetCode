/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function(height) {
    let sum = 0, len = height.length ;
    for (let i = 0; i < len; i++){
        if (!i || i == len -1)  continue
        let lheight = height[i], rheight = height[i] ;
        for (let r = i+1; r < len; r++) rheight = Math.max(rheight, height[r])
        for (let l = i-1; l >= 0; l--)  lheight = Math.max(lheight, height[l])
        let x = Math.min(rheight,lheight) - height[i]
        if (x)  sum+=x
    }
    return sum
};