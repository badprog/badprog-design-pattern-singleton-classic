#ifndef __BADPROG_SINGLETON_H__
#define __BADPROG_SINGLETON_H__

// Badprog.com

class Singleton
{
public:
	~Singleton();
	
	static Singleton *theInstance();
	static void endOfProgram();

protected:
	Singleton();

private:
	Singleton(const Singleton &other);
	static Singleton *_instance;
};

#endif // __BADPROG_SINGLETON_H__