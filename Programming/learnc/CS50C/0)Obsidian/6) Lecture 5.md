# Stacks and queues
A *stack* stores values one above the other and has the order of *FILO (First In Last Out)*.
*Queues* store the value by appending the item after the previous item and has the order of *FIFO (First in First Out)*. Filling a queue is called *enqueue* and emptying it is called *dequeue*.

---
# Linked list
This is a data structure that stores values like lists but each item of the list is inside a node containing the item and a pointer to another node containing the next item thus creating a link between nodes. The last node has a `NULL` pointer.
[[15) Linked List]]

---
# Trees
These are the data structures that link in the same way as linked lists but on node is connected to two or more nodes. The node from which this connection starts from is called the *root* of the tree and the nodes which do not lead to any more nodes are called *leaf nodes*. More importantly a node of a tree leads a link to the nodes that are not linked to the tree already i.e. a node cannot have more than one parent node (node leading to the current) otherwise it's not a tree because the structure will then become cyclic.
## Binary tree
This is one of the most commonly used tree structures. In a binary tree a node can only have two child nodes. This creates a tree structure that's functionally is same as a binary search algorithm when traversing the structure for searching.
[[14) Binary trees]]

---
# Dictionaries
Dictionaries are data structures that hold data in the form of key-value pairs this can be two different arrays with items relative to each other or linked nodes of small dictionaries etc. This can be thought of something similar to a table with two columns where keys in first column are related to value in the second.

---
# Hashing and Hash tables
Hashing is a mathematical function or logical code implementation that takes multiple inputs and maps them to a fixed set of values. A hashing function always maps the same set of inputs to same set of outputs.
An hash table is a data structure of an array of linked lists. It has an array that hold the hash values generated based on the items of the linked lists such that a set of items always result in a fixed set of hashes in the primary array.
If two or more items result in same hash value then this is known as *collision*. Depending on the hashes in primary array and the hashing algorithm, searching for data in hash tables can be `O(1)` if there are minimal collisions or `O(n/k)` where `k` depends on the number of hashes in the primary array (available hashes). 

---
# Trie
Trie contains 