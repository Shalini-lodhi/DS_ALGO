Node * solve(int pre[], int low, int high){
if (low > high ) return nullptr ;
if (low == high) return newNode(pre[low]) ;
int x = pre[low] ;
Node * root = newNode(x) ;

int l =low + 1, r = high, i ;
for(l = low; l <= high ; ++l){
if (pre[l] > x) break ;
}
// l = i ;
root -> left = solve(pre, low + 1, l - 1) ;
root -> right = solve(pre, l, high) ;
return root ;
}

Node* constructTree(int pre[], int size) {
//code here
return solve(pre, 0, size - 1) ;
}
