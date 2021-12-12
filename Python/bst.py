class Node(object):
  def __init__(self,data):
    self.data = data
    self.left = None
    self.right = None

class BST(object):
  def __init__(self):
    self.root = None

  def insert(self,data):
    self.root = self.insert_value(self.root,data)
    return self.root is not None
  
  def insert_value(self, node, data):
    if node == None:
      node = Node(data)
    else:
      if data<=node.data:
        node.left = self.insert_value(node.left,data)
      else:
        node.right = self.insert_value(node.right,data)
    return node

  def delete(self,key):
    self.root, deleted = self.delete_value(self.root, key)
    return deleted
  def delete_value(self, node, key):
    if node == None:
      return node, False

    deleted = False
    if key == node.data:
      deleted = True
      if node.left and node.right: #자식 둘다
        parent, child = node, node.right
        while child.left != None:
          parent, child = child, child.left
        child.left = node.left
        if parent != node:
          parent.left = child.right
          child.right = node.right
        node = child
      elif node.left or node.right: #자식 하나
        node = node.left or node.right
      else: #자식 없음
        node = None
    elif key < node.data:
      node.left, deleted = self.delete_value(node.left, key)
    else:
      node.right, deleted = self.delete_value(node.right,key)
    return node, deleted

array = [40, 4, 34, 45, 14, 55, 48, 13, 15, 49, 47]

bst = BST()
for x in array:
    bst.insert(x)

print(bst.delete(55))
print(bst.delete(14))
print(bst.delete(11))