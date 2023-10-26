class Solution {

    public boolean isValidBST(TreeNode root) {
        return isValid(root,null,null);
    }
    
    public boolean isValid(TreeNode root, Integer max, Integer min)
    {
        if(root==null)   //Base case: Because it reached the end, it means that it did not encounter false
            return true;

        if( (max!=null && root.val>=max) || (min!=null && root.val<=min) )          //Root has to be greater than the left subtree and least of the right subtree
            return false;

        return isValid(root.left,root.val,min) && isValid(root.right,max,root.val);
    }
}