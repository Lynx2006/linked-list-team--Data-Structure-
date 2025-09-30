# D.S-Assignment-1
# Linked List Team Project – <TeamName>

## 📌 Overview
This repository is part of **CO3 – Data Structures Lab (S3, INMCA2024-29)**.  
It demonstrates:
- Implementation of a **Singly Linked List** in C.
- **Collaborative development** using GitHub (branches, commits, pull requests).
- **Visualization** of linked list operations using Figma diagrams.
- **Team collaboration & reporting**.

---

## 🖥️ Singly Linked List Program
The program creates a linked list where:
- The first node stores the **creator's roll number**.
- Other nodes store the **team members’ roll numbers**.
- Traversal displays the linked list in order.

### Code 
#include <stdio.h>

#include <stdlib.h>

struct Node {
    
    int data;
    
    struct Node* prev;
    
    struct Node* next;
    
};

struct Node* createNode(int data) {
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    newNode->data = data;
    
    newNode->prev = NULL;
    
    newNode->next = NULL;
    
    return newNode;
    
}

struct Node* insertAtPosition(struct Node* head, int data, int pos) {
    
    struct Node* newNode = createNode(data);
    
    if (pos == 1) {
            
        newNode->next = head;
    
        if (head != NULL)
            
            head->prev = newNode;
        
        return newNode;
        
    }
    
    struct Node* temp = head;
    
    int i;
    
    for (i = 1; temp != NULL && i < pos - 1; i++) {
            
        temp = temp->next;
    
    }
    
    if (temp == NULL) {
            
        printf("Position out of range!\n");
    
        free(newNode);
        
        return head;
        
    }
    
    newNode->next = temp->next;
    
    newNode->prev = temp;
    
    if (temp->next != NULL)
        
        temp->next->prev = newNode;
    
        temp->next = newNode;
    
    return head;
    
}

struct Node* deleteAtPosition(struct Node* head, int pos) {
    
    if (head == NULL) {
            
        printf("List is empty!\n");
    
        return head;
        
    }
    
    struct Node* temp = head;
    
    if (pos == 1) {
            
        head = temp->next;
    
        if (head != NULL)
            
            head->prev = NULL;
        
        free(temp);
        
        return head;
        
    }
    
    int i;
    
    for (i = 1; temp != NULL && i < pos; i++) {
            
        temp = temp->next;
    
    }
    
    if (temp == NULL) {
            
        printf("Position out of range!\n");
    
        return head;
        
    }
    
    if (temp->next != NULL)
        
        temp->next->prev = temp->prev
        
        temp->prev->next = temp->next;
        
    free(temp);
    
    return head;
    
}

void display(struct Node* head) {
    
    struct Node* temp = head;
    
    while (temp != NULL) {
            
        printf("%d <-> ", temp->data);
    
        temp = temp->next;
        
    }
    
    printf("NULL\n");
    
}

int main() {
    
    struct Node* head = NULL;
    
    printf("Doubly Linked List :\n\n");
    
    printf("Insetion at 1 st Position : ");
    
    head = insertAtPosition(head, 10, 1);
    
    display(head);
    
    printf("\nInsetion at 2 nd Position : ");
    
    head = insertAtPosition(head, 20, 2);
    
    display(head);
    
    printf("\nInsetion at 3 rd Position : ");
    
    head = insertAtPosition(head, 30, 3);
    
    display(head);
    
    printf("\nDeletion at 2 nd Position : ");
    
    head = deleteAtPosition(head, 2);
    
    display(head);
    
    printf("\nDeletion at 1 st Position : ");
    
    head = deleteAtPosition(head, 1);
    
    display(head);
    
    return 0;
    
}

### Sample Output

Doubly Linked List :

Insetion at 1 st Position : 10 <-> NULL

Insetion at 2 nd Position : 10 <-> 20 <-> NULL

Insetion at 3 rd Position : 10 <-> 20 <-> 30 <-> NULL

Deletion at 2 nd Position : 10 <-> 30 <-> NULL

Deletion at 1 st Position : 30 <-> NULL

---

## 🔀 Team Workflow:

## 🧩 Team Workflow-Doubly linked list

### 📁 Branching Strategy
Each team member worked independently by creating a **personal Git branch** named after their **roll number**. This strategy allowed parallel development and minimized code conflicts.

### 🚀 Feature Contributions
The team implemented the core functionalities of a **Doubly Linked List**, including:

- ✅ Node insertion:
  - At a specific position
- ✅ Node deletion
- ✅ Forward traversal (display)
- ✅ Code commenting and documentation for improved readability

### 🔁 Pull Requests (PRs)
After completing and testing their features, each member submitted a **Pull Request (PR)** to merge their branch into the `main` branch, following standard version control practices.

### ⚠️ Merge Conflict Resolution
Merge conflicts were encountered during integration and resolved through:

- 🔍 Peer code reviews  
- 🛠️ Git conflict resolution tools  
- 💬 Effective team communication via GitHub discussions and team meetings

Communication via GitHub and team discussions
---

## 🎨 Figma Diagrams
- **Diagram File:** [`figma-diagrams/linked_list_diagram.png`]<img width="1405" height="137" alt="Untitled" src="https://github.com/Lynx2006/linked-list-team--Data-Structure-/blob/main/DS%20ASSSS.png" />
 
- **Public Figma Link:** [View Diagram][(https://www.figma.com/file/xxxxx/linked-list-diagram)](https://www.figma.com/design/wL9ApNJinsTEoBF7WwcrJj/Untitled?node-id=0-1&p=f&t=qwyHAVfWOLBaK265-0)

---

## 📑 Report
Final report (PDF) is available here:  
➡️https://github.com/Lynx2006/linked-list-team--Data-Structure-/blob/main/Report.pdf

Contents:
- GitHub Repo Link
- Figma Link + Screenshot
- Code snippet + sample output
- Contribution table
- Reflections

---

## 👥 Team Contributions
| Member            | Roll No | Contribution                         |
|-------------------|---------|--------------------------------------|
| Nithin Roy        |   44    | Repo setup + Insertion function      |
| Ouseppachan Saju  |   45    | Display function + Code improvements |
| Prathyush K R     |   46    | Figma diagram + Report preparation   |
| R Gokul Krishna   |   47    | Testing + Documentation              |
| Albert Soni       |   08    | Search function + Debugging          |


---

✨ Reflection

• Learned how to implement and traverse linked lists.

• Gained hands-on practice with GitHub (branches, commits, PRs).

• Understood how Figma diagrams help visualize data structures.

• Experienced teamwork and collaboration in coding projects.

---

