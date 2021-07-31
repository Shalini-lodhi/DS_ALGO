//https://practice.geeksforgeeks.org/problems/duplicate-subtree-in-binary-tree/1

unordered_map<string, int> counter;
vector<Node*> ans;
string solve(Node *root){
    if(!root){
        return "";
    }
    string str = " ";
    str += solve(root->left);
    str += to_string(root->data);
    str += solve(root->right);
    str += " ";
    counter[str]++;
    if(counter[str] == 2){
        ans.push_back(root);
    }
    return str;
}

vector<Node*> printAllDups(Node* root)
{
    counter.clear();
    ans.clear();
    solve(root);
    return ans;
}
    int dupSub(Node *root) {
        if(root==NULL) return 0;
        printAllDups(root);
        for(auto i:counter){
            if(i.second>=2 && i.first.length()>3)
                return 1;
        }
        
            return 0;
    }
