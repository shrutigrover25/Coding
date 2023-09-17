# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        
        def check(root)->int:
            
            if(root==None):
                return 0
            
            lh=check(root.left)
            rh=check(root.right)
            
            if(lh==-1):
                return -1
            
            if(rh==-1):
                return -1
            
            if(abs(lh-rh)>1):
                return -1
            
            return max(lh,rh)+1
        
        
        if not root:
            return True
        
        if(check(root)>0):
            return True
        
        return False
        