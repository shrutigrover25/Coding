/**
 * @param {string} title
 * @return {string}
 */
var capitalizeTitle = function(title) {
    
    // 1. Form the output string by converting all input characters into lowercase character array.
    
    const result=title.toLowerCase().split('');
    console.log(result);
     
    // 2. Initialise both pointers left and right as 0
    
    let left=0;
    let right=0;

   
    //3. Run the outer loop over the left pointer by jumping over words by moving left=right+1 till the strings length
    
    for(;left<title.length;left=right+1)
        {
            

          // 4. Run the inner loop over the right pointer by right++ till the    point we get a space character or we reach string's length
            
            
        for(right=left;right<title.length;right++)
            {
               
                if(result[right]===" ")
                    {
                        break;
                    }
                
            }
       
         //5. if the word length [right-left>=3] make the left letter of the word   as uppercase
        
            if(right-left>=3)
                {
                    result[left]=result[left].toUpperCase();
                }
      
    
        }
           
            
    //6. Return the output array in the form of the string
    
    return result.join('');
    
  
   
    
  
};