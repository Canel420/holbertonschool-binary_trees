# 0x1D. C - Binary trees 🌳

![link](https://i.imgur.com/4Az1kkT.jpeg)

<html>
<div class="panel panel-default" id="project-description">
 <div class="panel-body">
  <h2>
   Resources
  </h2>
  <p>
   <strong>
    Read or watch
   </strong>
   :
  </p>
  <ul>
   <li>
    <a href="https://en.wikipedia.org/wiki/Binary_tree" target="_blank" title="Binary tree">
     Binary tree
    </a>
    (
    <em>
     note the first line:
     <code>
      Not to be confused with B-tree.
     </code>
    </em>
    )
   </li>
   <li>
    <a href="https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm" target="_blank" title="Data Structure and Algorithms - Tree">
     Data Structure and Algorithms - Tree
    </a>
   </li>
   <li>
    <a href="https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm" target="_blank" title="Tree Traversal">
     Tree Traversal
    </a>
   </li>
   <li>
    <a href="https://en.wikipedia.org/wiki/Binary_search_tree" target="_blank" title="Binary Search Tree">
     Binary Search Tree
    </a>
   </li>
   <li>
    <a href="https://www.youtube.com/watch?v=H5JubkIy_p8" target="_blank" title="Data structures: Binary Tree">
     Data structures: Binary Tree
    </a>
   </li>
  </ul>
  <h2>
   Learning Objectives
  </h2>
  <p>
   At the end of this project, you are expected to be able to
   <a href="https://fs.blog/feynman-learning-technique/" target="_blank" title="explain to anyone">
    explain to anyone
   </a>
   ,
   <strong>
    without the help of Google
   </strong>
   :
  </p>
  <h3>
   General
  </h3>
  <ul>
   <li>
    What is a binary tree
   </li>
   <li>
    What is the difference between a binary tree and a Binary Search Tree
   </li>
   <li>
    What is the possible gain in terms of time complexity compared to linked lists
   </li>
   <li>
    What are the depth, the height, the size of a binary tree
   </li>
   <li>
    What are the different traversal methods to go through a binary tree
   </li>
   <li>
    What is a complete, a full, a perfect, a balanced binary tree
   </li>
  </ul>
  <h2>
   Requirements
  </h2>
  <h3>
   General
  </h3>
  <ul>
   <li>
    Allowed editors:
    <code>
     vi
    </code>
    ,
    <code>
     vim
    </code>
    ,
    <code>
     emacs
    </code>
   </li>
   <li>
    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
   </li>
   <li>
    All your files should end with a new line
   </li>
   <li>
    A
    <code>
     README.md
    </code>
    file, at the root of the folder of the project, is mandatory
   </li>
   <li>
    Your code should use the
    <code>
     Betty
    </code>
    style. It will be checked using
    <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" target="_blank" title="betty-style.pl">
     betty-style.pl
    </a>
    and
    <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" target="_blank" title="betty-doc.pl">
     betty-doc.pl
    </a>
   </li>
   <li>
    You are not allowed to use global variables
   </li>
   <li>
    No more than 5 functions per file
   </li>
   <li>
    You are allowed to use the standard library
   </li>
   <li>
    In the following examples, the
    <code>
     main.c
    </code>
    files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own
    <code>
     main.c
    </code>
    files at compilation. Our
    <code>
     main.c
    </code>
    files might be different from the one shown in the examples
   </li>
   <li>
    The prototypes of all your functions should be included in your header file called
    <code>
     binary_trees.h
    </code>
   </li>
   <li>
    Don’t forget to push your header file
   </li>
   <li>
    All your header files should be include guarded
   </li>
  </ul>
  <h3>
   GitHub
  </h3>
  <p>
   <strong>
    There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.
   </strong>
  </p>
  <h2>
   More Info
  </h2>
  <h3>
   Data structures
  </h3>
  <p>
   Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.
  </p>
  <h4>
   Basic Binary Tree
  </h4>
  <pre><code>/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
</code></pre>
  <h4>
   Binary Search Tree
  </h4>
  <pre><code>typedef struct binary_tree_s bst_t;
</code></pre>
  <h4>
   AVL Tree
  </h4>
  <pre><code>typedef struct binary_tree_s avl_t;
</code></pre>
  <h4>
   Max Binary Heap
  </h4>
  <pre><code>typedef struct binary_tree_s heap_t;
</code></pre>
  <p>
   <strong>
    Note:
   </strong>
   For tasks 0 to 23 (included), you have to deal with simple binary trees. They are not BSTs, thus they don’t follow any kind of rule.
  </p>
  <h3>
   Print function
  </h3>
  <p>
   To match the examples in the tasks, you are given
   <a href="https://github.com/holbertonschool/0x1C.c" target="_blank" title="this function">
    this function
   </a>
  </p>
  <p>
   This function is used only for visualization purposes. You don’t have to push it to your repo. It may not be used during the correction
  </p>
  ### Project BreakDown
<h4 class="task">
    0. New node
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that creates a binary tree node</p><ul>
<li>Prototype: <code>binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);</code></li>
<li>Where <code>parent</code> is a pointer to the parent node of the node to create</li>
<li>And <code>value</code> is the value to put in the new node</li>
<li>When created, a node does not have any child</li>
<li>Your function must return a pointer to the new node, or <code>NULL</code> on failure</li>
</ul>


<h4 class="task">
    1. Insert left ✅
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that inserts a node as the left-child of another node</p><ul>
<li>Prototype: <code>binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);</code></li>
<li>Where <code>parent</code> is a pointer to the node to insert the left-child in</li>
<li>And <code>value</code> is the value to store in the new node</li>
<li>Your function must return a pointer to the created node, or <code>NULL</code> on failure</li>
<li>If <code>parent</code> already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.</li>
</ul>


<h4 class="task">
    2. Insert right ✅
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that inserts a node as the right-child of another node</p><ul>
<li>Prototype: <code>binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);</code></li>
<li>Where <code>parent</code> is a pointer to the node to insert the right-child in</li>
<li>And <code>value</code> is the value to store in the new node</li>
<li>Your function must return a pointer to the created node, or <code>NULL</code> on failure</li>
<li>If <code>parent</code> already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.</li>
</ul>


<h4 class="task">
    3. Delete ✅
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that deletes an entire binary tree</p><ul>
<li>Prototype: <code>void binary_tree_delete(binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to delete</li>
</ul>


<h4 class="task">
    4. Is leaf ✅
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that checks if a node is a leaf</p><ul>
<li>Prototype: <code>int binary_tree_is_leaf(const binary_tree_t *node);</code></li>
<li>Where <code>node</code> is a pointer to the node to check</li>
<li>Your function must return <code>1</code> if <code>node</code> is a leaf, and <code>0</code> otherwise</li>
<li>If <code>node</code> is <code>NULL</code>, return <code>0</code></li>
</ul>


<h4 class="task">
    5. Is root ✅
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that checks if a given node is a root</p><ul>
<li>Prototype: <code>int binary_tree_is_root(const binary_tree_t *node);</code></li>
<li>Where <code>node</code> is a pointer to the node to check</li>
<li>Your function must return <code>1</code> if <code>node</code> is a root, and <code>0</code> otherwise</li>
<li>If <code>node</code> is <code>NULL</code>, return <code>0</code></li>
</ul>


<h4 class="task">
    6. Pre-order traversal ✅
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that goes through a binary tree using pre-order traversal</p><ul>
<li>Prototype: <code>void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to traverse</li>
<li>And <code>func</code> is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.</li>
</ul>


<h4 class="task">
    7. In-order traversal ✅
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that goes through a binary tree using in-order traversal</p><ul>
<li>Prototype: <code>void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to traverse</li>
<li>And <code>func</code> is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.</li>
</ul>


<h4 class="task">
    8. Post-order traversal ✅
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that goes through a binary tree using post-order traversal</p><ul>
<li>Prototype: <code>void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to traverse</li>
<li>And <code>func</code> is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.</li>
</ul>


<h4 class="task">
    9. Height ✅
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that measures the height of a binary tree</p><ul>
<li>Prototype: <code>size_t binary_tree_height(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to measure the height of</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>


<h4 class="task">
    10. Depth ✅
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that measures the depth of a node in a binary tree</p><ul>
<li>Prototype: <code>size_t binary_tree_depth(const binary_tree_t *node);</code></li>
<li>Where <code>tree</code> is a pointer to the node to measure the depth of</li>
<li>If <code>node</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>


<h4 class="task">
    11. Size ✅
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that measures the size of a binary tree</p><ul>
<li>Prototype: <code>size_t binary_tree_size(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to measure the size of</li>
</ul>


<h4 class="task">
    12. Leaves ✅
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that counts the leaves in a binary tree</p><ul>
<li>Prototype: <code>size_t binary_tree_leaves(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to count the leaves in</li>
<li>A <code>NULL</code> pointer is not a leaf</li>
</ul>


<h4 class="task">
    13. Nodes ✅
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that counts the nodes with at least 1 child in a binary tree</p><ul>
<li>Prototype: <code>size_t binary_tree_nodes(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to count the nodes in</li>
<li>A <code>NULL</code> pointer is not a node</li>
</ul>


<h4 class="task">
    14. Balance factor ✅
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that measures the balance factor of a binary tree</p><ul>
<li>Prototype: <code>int binary_tree_balance(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to measure the balance factor of</li>
<li>If <code>tree</code> is <code>NULL</code>, return <code>0</code></li>
</ul>


<h4 class="task">
    15. Is full
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that checks if a binary tree is full</p><ul>
<li>Prototype: <code>int binary_tree_is_full(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to check</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>


<h4 class="task">
    16. Is perfect ✅
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that checks if a binary tree is perfect</p><ul>
<li>Prototype: <code>int binary_tree_is_perfect(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to check</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>


<h4 class="task">
    17. Sibling ✅
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that finds the sibling of a node</p><ul>
<li>Prototype: <code>binary_tree_t *binary_tree_sibling(binary_tree_t *node);</code></li>
<li>Where <code>node</code> is a pointer to the node to find the sibling of</li>
<li>Your function must return a pointer to the sibling node</li>
<li>If <code>node</code> has no sibling, return <code>NULL</code></li>
</ul>


<h4 class="task">
    18. Uncle ✅
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that finds the uncle of a node</p><ul>
<li>Prototype: <code>binary_tree_t *binary_tree_uncle(binary_tree_t *node);</code></li>
<li>Where <code>node</code> is a pointer to the node to find the uncle of</li>
<li>Your function must return a pointer to the uncle node</li>
<li>If <code>node</code> has no uncle, return <code>NULL</code></li>
</ul>


<h4 class="task">
    19. Lowest common ancestor ✅
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a function that finds the lowest common ancestor of two nodes</p><ul>
<li>Prototype: <code>binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);</code></li>
<li>Where <code>first</code> is a pointer to the first node</li>
<li>And <code>second</code> is a pointer to the second node</li>
<li>Your function must return a pointer to the lowest common ancestor node of the two given nodes</li>
<li>If no common ancestor was found, your function must return <code>NULL</code></li>
</ul>


<h4 class="task">
    20. Level-order traversal ✅
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a function that goes through a binary tree using level-order traversal</p><ul>
<li>Prototype: <code>void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to traverse</li>
<li>And <code>func</code> is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.</li>
</ul>


<h4 class="task"> 
    21. Is complete ✅
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a function that checks if a binary tree is complete</p><ul>
<li>Prototype: <code>int binary_tree_is_complete(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to check</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>


<h4 class="task">
    22. Rotate left ✅
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a function that performs a left-rotation on a binary tree</p><ul>
<li>Prototype: <code>binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to rotate</li>
<li>Your function must return a pointer to the new root node of the tree once rotated</li>
</ul>


<h4 class="task">
    23. Rotate right ✅
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a function that performs a right-rotation on a binary tree</p><ul>
<li>Prototype: <code>binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to rotate</li>
<li>Your function must return a pointer to the new root node of the tree once rotated</li>
</ul>

 </div>
</div>

[--LINK PROJECT--](https://intranet.hbtn.io/projects/270)
</html>
