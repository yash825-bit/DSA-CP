/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func balanceBST(rootInput *TreeNode) *TreeNode {
    values := make([]int, 0)
    var dfs func(root *TreeNode) 
    dfs = func(root *TreeNode) {
        if root == nil {
            return
        }
        dfs(root.Left)
        values = append(values, root.Val)
        dfs(root.Right)
    }
    dfs(rootInput)
    
    var formTree func(lo,hi int) *TreeNode
    formTree = func(lo,hi int) *TreeNode {
        if lo > hi {
            return nil
        }
        if lo == hi {
            return &TreeNode{values[lo],nil,nil}
        }

        mid := lo + (hi-lo) / 2 
        return &TreeNode{values[mid], formTree(lo,mid-1), formTree(mid+1,hi)}
    }

    return formTree(0,len(values)-1)
}