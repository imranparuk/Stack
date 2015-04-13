// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the STACK_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// STACK_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef STACK_EXPORTS
#define STACK_API __declspec(dllexport)
#else
#define STACK_API __declspec(dllimport)
#endif

// This class is exported from the Stack.dll
class STACK_API CStack {

	typedef struct node{
		int data;
		struct node *linker;
		
	} NODE;

private:
	NODE *head;
	int maxSize;
	int currentSize;

public:

	CStack(int);
	~CStack(void);

	bool push(int val);
	bool pop(int &val);
	bool peek(int &val);

	bool isEmpty();
	bool isFull();

};

extern STACK_API int nStack;

STACK_API int fnStack(void);
