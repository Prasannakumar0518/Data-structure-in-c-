bool SinglyLinkedList::isEmpty() {
return head
}
NULL;
void SinglyLinkedList::append(int data) {
Node newNode new Node(data);
if (isEmpty()) {
head tail newNode;
} else {
tail->next newNode;
tail newNode;
}
}
void SinglyLinkedList::insert(int prevData, int data) {
Node newNode new Node(data);
Node temp head;
while (temp != NULL && temp->data = prevData) (
}
temp temp->next;
(temp NULL) {
cout << "previous val not in list" << endl;
return;
}
newNode->next temp->next;
temp->next newNode;
if (temp == tail) {
tail newNode;
}
}
void SinglyLinkedList::deleteNode(int data) { if
(isEmpty()) {
}
cout << "val not in list" endl;
return;
if (head->data data) {
Node temp = head;
head head->next;
delete temp;
if (head NULL) {
tail NULL;
}
return;
}
Node temp head;
while (temp->next = NULL && temp->next->data data) {
temp temp->next;
}
if (temp->next == NULL) {
}
cout << "val not in list" endl;
return;
Node nodeToDelete temp->next;
temp->next = nodeToDelete->next;
if (nodeToDelete tail) {
tail = temp;
delete nodeToDelete;
}
}
bool SinglyLinkedList::search(int data) {
Node temp head;
while (temp != NULL) { if (temp->data data) {
return true;
}
temp temp->next;
}
return false;
}
