

/*! Первая функция */
int function1(){
  return 2;
};

/*! Первая функция */
int function2(){
  return 2;
};

/*! A test class - Тестовый класс! */
class Test
{
  public:
    /** An enum type. 
     *  The documentation block cannot be put after the enum! 
     */
    enum EnumType
    {
      int EVal1,     /**< enum value 1 */
      int EVal2      /**< enum value 2 */
    };
    void member();   //!< a member function.
    
  protected:
    int value;       /*!< an integer value */
};
