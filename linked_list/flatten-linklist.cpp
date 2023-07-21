Node* merge(Node* a, Node* b){
    if (a == NULL) return b;
    if (b == NULL) return a;
    Node* r;
    if (a->data < b->data){
        r = a;
        r->bottom = merge(a->bottom, b);
    }
    else{
        r = b;
        r->bottom = merge(a, b->bottom);
    }
    r->next = NULL;
    return r;
}
Node* flatten(Node* root){
    if (root == NULL || root->next == NULL) return root;
    root->next = flatten(root->next);
    root = merge(root, root->next);
    return root;
}