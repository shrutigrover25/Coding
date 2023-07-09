/**
 * @param {string} title
 * @return {string}
 */
var capitalizeTitle = function(title) {
    
const result = title.toLowerCase().split('');
let left = 0;
let right = 0;

for (; left < title.length; left = right + 1) {
  for (right = left; right < title.length; right++) {
    if (result[right] === ' ') {
      break;
    }
  }
  
  if (right - left >= 3) {
    result[left] = result[left].toUpperCase();
  }
}

return result.join('');

    
};