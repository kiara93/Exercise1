#ifndef _CRT_SECURE_NO_WARNINGS
#define	_CRT_SECURE_NO_WARNINGS
class Manager;

class Employee
   {
   private:
      int ID;
      char* name;
      Manager* boss;
      int hours;
   protected:
   public:
      Employee(int id, char* name);//constructor with arguments
      ~Employee();//destructor
      void setBoss(Manager* newBoss);//method returning boss
      void work(int numOfHours);//method adding num of hrs
      void report();
	  int getHours() const;//query
      int getID() const;//query
      const char* getName() const;//query 
   };
#endif _CRT_SECURE_NO_WARNINGS