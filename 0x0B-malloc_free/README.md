0. Float like a butterfly, sting like a be
Write a function that creates an array of chars, and initializes it with a specific char.
	1. Prototype: char *create_array(unsigned int size, char c);
	2. Returns NULL if size = 0
	3. Returns a pointer to the array, or NULL if it fails

1. The woman who has no imagination has no wings
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
	1. Prototype: char *_strdup(char *str);
	2. The _strdup() function returns a pointer to a new string which is a duplicate of the string str.
	   Memory for the new string is obtained with malloc, and can be freed with free.
	3. Returns NULL if str = NULL
	4. On success, the _strdup function returns a pointer to the duplicated string. 
	It returns NULL if insufficient memory was available
	FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.

2. He who is not courageous enough to take risks will accomplish nothing in life
Write a function that concatenates two strings.
	1. Prototype: char *str_concat(char *s1, char *s2);
	2. The returned pointer should point to a newly allocated space in memory which contains the contents of s1,
	 followed by the contents of s2, and null terminated
	3. if NULL is passed, treat it as an empty string
	4. The function should return NULL on failure

3. If you even dream of beating me you'd better wake up and apologize
Write a function that returns a pointer to a 2 dimensional array of integers.
	1. Prototype: int **alloc_grid(int width, int height);
	2. Each element of the grid should be initialized to 0
	3. The function should return NULL on failure
	4. If width or height is 0 or negative, return NULL

4. It's not bragging if you can back it up
Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.
	1. Prototype: void free_grid(int **grid, int height);
	2. Note that we will compile with your alloc_grid.c file. Make sure it compiles.
