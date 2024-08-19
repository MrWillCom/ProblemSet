/*
 * @lc app=leetcode id=650 lang=javascript
 *
 * [650] 2 Keys Keyboard
 */

// @lc code=start
/**
 * @param {number} n
 * @return {number}
 */
var minSteps = function (n) {
  var str = 'A'
  var clipboard = ''
  var stepsCount = 0

  const copyAll = () => {
    clipboard = str
    stepsCount++
  }

  const paste = () => {
    str += clipboard
    stepsCount++
  }

  while (str.length < n) {
    if (n % str.length === 0) {
      copyAll()
    }
    paste()
  }

  return stepsCount
}
// @lc code=end
