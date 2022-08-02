struct Node{
    int value;
    Node *next;
};

Node* mergeLists(Node* list1, Node* list2){
    if (list1 == nullptr) return list2;
    if (list2 == nullptr) return list1;
    if (list1->value > list2->value){
        Node* tmp = list1;
        list1 = list2;
        list2 = tmp;
    }
    Node* p = list1;
    while (list1->next != nullptr){
        if ((list1->next)->value == list2->value){
            list1 = list1->next;
            list2 = list2->next;
            if (list2 == nullptr)
                return p;
        }
        else if ((list1->next)->value < list2->value){
            list1 = list1->next;
        }
        else{
            Node* tmp = list1->next;
            list1->next = list2;
            list2 = tmp;
        }
    }
    list1->next = list2;
    return p;
}
