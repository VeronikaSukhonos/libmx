<h1 align="center">Libmx</h1>

<p><b>Date:</b> September 2024.</p>
<p><b>Libmx</b> is a library of useful functions in C developed during Track C, the second stage of the <a href="https://campus.kpi.kharkov.ua/en/"><b>Innovation Campus</b></a> educational program.</p>

<p><b>The library includes:</b></p>
<ul>
<li><a href="#utils"><b>Utils pack</b></a>;</li>
<li><a href="#string"><b>String pack</b></a>;</li>
<li><a href="#memory"><b>Memory pack</b></a>;</li>
<li><a href="#list"><b>List pack</b></a>;</li>
<li><a href="#extra"><b>extra functions</b></a>.</li>
</ul>

> Some functions of Libmx are my implementations of the standard C library functions.

<img src="./Libmx.png" alt="Libmx">

<h2 align="center">Functions</h2>

<h3 id="utils">Utils pack:</h3>
<table>
<tr>
<td><b>mx_printchar</b></td>
<td>outputs a single character to the stdout</td>
</tr>
<tr>
<td><b>mx_print_unicode</b></td>
<td>outputs ASCII and multibyte characters to the stdout</td>
</tr>
<tr>
<td><b>mx_printstr</b></td>
<td>outputs a string of characters to the stdout</td>
</tr>
<tr>
<td><b>mx_print_strarr</b></td>
<td>outputs an array of strings (must be NULL-terminated) to the stdout with a delimiter between the elements of the array</td>
</tr>
<tr>
<td><b>mx_printint</b></td>
<td>outputs integer values to the stdout</td>
</tr>
<tr>
<td><b>mx_pow</b></td>
<td>computes a number raised to the power of zero or a positive integer</td>
</tr>
<tr>
<td><b>mx_sqrt</b></td>
<td>computes a non-negative square root (if it is natural) of a number</td>
</tr>
<tr>
<td><b>mx_nbr_to_hex</b></td>
<td>converts a number to a hexadecimal string</td>
</tr>
<tr>
<td><b>mx_hex_to_nbr</b></td>
<td>converts a hexadecimal string to a number</td>
</tr>
<tr>
<td><b>mx_itoa</b></td>
<td>converts an integer to a string</td>
</tr>
<tr>
<td><b>mx_foreach</b></td>
<td>applies some function to each element of an array of integers</td>
</tr>
<tr>
<td><b>mx_binary_search</b></td>
<td>searches for a string in an array using the binary search algorithm</td>
</tr>
<tr>
<td><b>mx_bubble_sort</b></td>
<td>sorts an array of strings in lexicographical order using the bubble sort algorithm</td>
</tr>
<tr>
<td><b>mx_quicksort</b></td>
<td>sorts an array of strings by their lengths in ascending order using the quick sort algorithm (the middle element is pivot)</td>
</tr>
</table>

<h3 id="string">String pack:</h3>
<table>
<tr>
<td><b>mx_strlen</b></td>
<td>calculates the length of a string</td>
</tr>
<tr>
<td><b>mx_swap_char</b></td>
<td>swaps the characters of a string using pointers</td>
</tr>
<tr>
<td><b>mx_str_reverse</b></td>
<td>reverses a string using pointers</td>
</tr>
<tr>
<td><b>mx_strdel</b></td>
<td>frees string memory and sets the string to NULL</td>
</tr>
<tr>
<td><b>mx_del_strarr</b></td>
<td>deletes the contents of an array of strings (must be NULL-terminated), frees array memory and sets a pointer to NULL</td>
</tr>
<tr>
<td><b>mx_get_char_index</b></td>
<td>finds the index of the first occurrence of a character in a string</td>
</tr>
<tr>
<td><b>mx_strdup</b></td>
<td>duplicates a string</td>
</tr>
<tr>
<td><b>mx_strndup</b></td>
<td>similar to mx_strdup, but duplicates at most a specified number of bytes</td>
</tr>
<tr>
<td><b>mx_strcpy</b></td>
<td>copies a string to a buffer</td>
</tr>
<tr>
<td><b>mx_strncpy</b></td>
<td>similar to mx_strcpy, but copies at most a specified number of bytes</td>
</tr>
<tr>
<td><b>mx_strcmp</b></td>
<td>compares two strings</td>
</tr>
<tr>
<td><b>mx_strcat</b></td>
<td>appends one string to the end of another</td>
</tr>
<tr>
<td><b>mx_strstr</b></td>
<td>finds the first occurrence of a substring in a string</td>
</tr>
<tr>
<td><b>mx_get_substr_index</b></td>
<td>finds the index of the first character of a substring</td>
</tr>
<tr>
<td><b>mx_count_substr</b></td>
<td>counts the substrings in a string</td>
</tr>
<tr>
<td><b>mx_count_words</b></td>
<td>counts words in a string (a word is a sequence of characters separated by a delimiter)</td>
</tr>
<tr>
<td><b>mx_strnew</b></td>
<td>allocates memory for a string and initializes each character with '\0'</td>
</tr>
<tr>
<td><b>mx_strtrim</b></td>
<td>takes a string and creates a new one from it without whitespace characters at the beginning or/and the end</td>
</tr>
<tr>
<td><b>mx_del_extra_spaces</b></td>
<td>does the same as mx_strtrim and also separates words in the new string with exactly one space character</td>
</tr>
<tr>
<td><b>mx_strsplit</b></td>
<td>converts a string into a NULL-terminated array of strings splitting the string at a delimiter</td>
</tr>
<tr>
<td><b>mx_strjoin</b></td>
<td>concatenates two strings into a new single string</td>
</tr>
<tr>
<td><b>mx_file_to_str</b></td>
<td>reads data from a file into a string</td>
</tr>
<tr>
<td><b>mx_replace_substr</b></td>
<td>replaces all occurrences of a substring in a string with another substring</td>
</tr>
<tr>
<td><b>mx_readline</b></td>
<td>reads a line from a file into a string until it reaches a delimiter character or EOF</td>
</tr>
</table>

<h3 id="memory">Memory pack:</h3>
<table>
<tr>
<td><b>mx_memset</b></td>
<td>fills a memory area with a constant byte</td>
</tr>
<tr>
<td><b>mx_memcpy</b></td>
<td>copies a specified number of bytes from one memory area to another</td>
</tr>
<tr>
<td><b>mx_memccpy</b></td>
<td>similar to mx_memcpy, but stops when a specified character is found</td>
</tr>
<tr>
<td><b>mx_memcmp</b></td>
<td>compares bytes of two memory areas</td>
</tr>
<tr>
<td><b>mx_memchr</b></td>
<td>scans bytes of a memory area for the first instance of a character</td>
</tr>
<tr>
<td><b>mx_memrchr</b></td>
<td>similar to mx_memchr, but searches in the opposite direction (from the end)</td>
</tr>
<tr>
<td><b>mx_memmem</b></td>
<td>finds the start of the first occurrence of a substring in a memory area</td>
</tr>
<tr>
<td><b>mx_memmove</b></td>
<td>copies a specified number of bytes from one memory area to another (memory areas may overlap)</td>
</tr>
<tr>
<td><b>mx_realloc</b></td>
<td>changes the size of a memory block to a specified number of bytes</td>
</tr>
</table>

<h3 id="list">List pack:</h3>

```C
// linked list node defined in libmx.h

typedef struct s_list {
    void *data;
    struct s_list *next;
} t_list;
```
<table>
<tr>
<td><b>mx_create_node</b></td>
<td>creates a new node of a linked list</td>
</tr>
<tr>
<td><b>mx_push_front</b></td>
<td>inserts a new node at the beginning of a linked list</td>
</tr>
<tr>
<td><b>mx_push_back</b></td>
<td>inserts a new node at the end of a linked list</td>
</tr>
<tr>
<td><b>mx_pop_front</b></td>
<td>removes the first node of a linked list and frees the memory allocated for the node</td>
</tr>
<tr>
<td><b>mx_pop_back</b></td>
<td>removes the last node of a linked list and frees the memory allocated for the node</td>
</tr>
<tr>
<td><b>mx_list_size</b></td>
<td>calculates the number of nodes in a linked list</td>
</tr>
<tr>
<td><b>mx_sort_list</b></td>
<td>sorts a list's contents in ascending order</td>
</tr>
</table>

<h3 id="extra">Extra functions:</h3>
<table>
<tr>
<td><b>mx_isdigit</b></td>
<td>checks if a character is a digit</td>
</tr>
<tr>
<td><b>mx_islower</b></td>
<td>checks if a character is lowercase</td>
</tr>
<tr>
<td><b>mx_isupper</b></td>
<td>checks if a character is uppercase</td>
</tr>
<tr>
<td><b>mx_isalpha</b>*</td>
<td>checks if a character is alphabetic</td>
</tr>
<tr>
<td><b>mx_isspace</b></td>
<td>checks if a character is whitespace</td>
</tr>
<tr>
<td><b>mx_printerr</b>*</td>
<td>outputs an error string to the stderr</td>
</tr>
<tr>
<td><b>mx_strncmp</b></td>
<td>similar to mx_strcmp, but compares at most a specified number of bytes</td>
</tr>
<tr>
<td><b>mx_atoi</b>*</td>
<td>converts a string to an integer</td>
</tr>
<tr>
<td><b>mx_clear_list</b>*</td>
<td>removes all nodes of a linked list and frees the memory allocated for the nodes</td>
</tr>
</table>

> <p>* extra functions that were added to Libmx during working on <a href="https://github.com/VeronikaSukhonos/pathfinder"><b>Pathfinder</b></a>.</p>

<h2 align="center">Installation & Usage</h2>

To compile the library, clone the repository, navigate to the project directory and build the project using `make` command.

```bash
git clone https://github.com/VeronikaSukhonos/libmx
cd libmx
make
```

This will create the static library `libmx.a` in the project directory.

<hr>
<p><b>To use the library, follow these steps:</b></p>

<b><em>1.</em></b> Copy the header file `libmx.h` into your project directory and include it in your source files:

```C
#include "libmx.h"
```

<b><em>2.</em></b> Compile your project linking the library as follows:

```bash
clang -o your_project your_project.c -L/path/to/libmx -lmx
```

<h3>Example:</h3>

```C
// linked list program

#include "libmx.h"

// additional functions to print a list and its size
void mx_print_list(t_list *head);
void mx_print_list_size(t_list *head);

// function to be passed as an argument to mx_sort_list
bool mx_cmp(void *a, void *b) {
	return mx_strcmp(a, b) > 0;
}

int main(void) {
	t_list *head = NULL;

	// inserting new nodes in a list
	mx_push_front(&head, "One");
	mx_push_back(&head, "Two");
	mx_push_back(&head, "Three");
	mx_print_list(head);

	// sorting the list in lexicographical order
	head = mx_sort_list(head, &mx_cmp);
	mx_print_list(head);
	mx_print_list_size(head);

	// removing the first node from the list
	mx_pop_front(&head);
	mx_print_list(head);
	mx_print_list_size(head);

	// removing all nodes from the list
	mx_clear_list(&head);
	mx_print_list(head);
	mx_print_list_size(head);
}

void mx_print_list(t_list *head) {
	t_list *ptr = head;

	while (ptr != NULL) {
		mx_printstr(ptr->data);
		if (ptr->next != NULL)
			mx_printstr(" -> ");
		ptr = ptr->next;
	}
	mx_printstr("\n");
}

void mx_print_list_size(t_list *head) {
	mx_printstr("List size is ");
	mx_printint(mx_list_size(head));
	mx_printstr("\n");
}
```

<h3>Output:</h3>

```
One -> Two -> Three
One -> Three -> Two
List size is 3
Three -> Two
List size is 2

List size is 0
```

<h2 align="center">License</h2>
<p>The project is licensed under the terms of the <b>MIT license</b>. See the <a href="./LICENSE"><b>LICENSE</b></a> file for details.</p>
