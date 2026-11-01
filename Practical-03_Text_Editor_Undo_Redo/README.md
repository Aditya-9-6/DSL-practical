# Practical No. 03: Text Editor Undo/Redo System Using Stack

## Problem Statement
Implement a real-time undo/redo system for a text editing application using a Stack data structure. The system should support the following operations:
1. **Make a Change**: A new change to the document is made.
2. **Undo Action**: Revert the most recent change and store it for potential redo.
3. **Redo Action**: Reapply the most recently undone action.
4. **Display Document State**: Show the current state of the document after undoing or redoing an action.

---

## C++ Source Code
File: [`text_editor_undo_redo.cpp`](text_editor_undo_redo.cpp)

```cpp
#include <iostream>
#include <stack>
#include <string>
using namespace std;

class TextEditor {
private:
    string document;
    stack<string> undoStack;
    stack<string> redoStack;

public:
    // Make a new change
    void makeChange(const string& newText) {
        // Save current state before making the change
        undoStack.push(document);

        document = newText;

        // Clear redo stack because a new change is made
        while (!redoStack.empty())
            redoStack.pop();

        cout << "Change made." << endl;
    }

    // Undo the most recent change
    void undo() {
        if (undoStack.empty()) {
            cout << "Nothing to undo." << endl;
            return;
        }

        // Save current state for redo
        redoStack.push(document);

        // Restore previous state
        document = undoStack.top();
        undoStack.pop();

        cout << "Undo performed." << endl;
    }

    // Redo the most recently undone change
    void redo() {
        if (redoStack.empty()) {
            cout << "Nothing to redo." << endl;
            return;
        }

        // Save current state for undo
        undoStack.push(document);

        // Restore undone state
        document = redoStack.top();
        redoStack.pop();

        cout << "Redo performed." << endl;
    }

    // Display current document
    void display() {
        cout << "Document: " << document << endl;
    }
};

int main() {
    TextEditor editor;

    editor.makeChange("Hello");
    editor.display();

    editor.makeChange("Hello World");
    editor.display();

    editor.makeChange("Hello World!");
    editor.display();

    editor.undo();
    editor.display();

    editor.undo();
    editor.display();

    editor.redo();
    editor.display();

    return 0;
}
```

---

## How to Compile & Run

```bash
g++ text_editor_undo_redo.cpp -o text_editor
./text_editor
```

---

## Expected Output

```text
Change made. 
Document: Hello 
 
Change made. 
Document: Hello World 
 
Change made. 
Document: Hello World! 
 
Undo performed. 
Document: Hello World 
 
Undo performed. 
Document: Hello 
 
Redo performed. 
Document: Hello World 
```

---

## Complexity Analysis

| Operation | Time Complexity | Space Complexity |
|---|---|---|
| **Make Change** | $O(L + R)$ where $L$ is text length, $R$ is redo stack size | $O(L)$ |
| **Undo** | $O(L)$ | $O(L)$ |
| **Redo** | $O(L)$ | $O(L)$ |
| **Display** | $O(L)$ | $O(1)$ |
