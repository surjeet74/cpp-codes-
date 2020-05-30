class Employee:
    __name=None
    __id=None
    __salary=None
    def getName(self):
        return self.__name
    def setName(self,name):
        self.__name=name   
    def __init__(self,name,id,salary):
        self.__name=name
        self.__id=id
        self.__salary=salary 
    def getSalary(self):
        return self.__salary
    def getId(self):
        return self.__id
surjeet=Employee('My name is Surjeet Singh',100,10000)
test =surjeet.getName()
print(test)
salary=surjeet.getSalary()
print(salary)
id=surjeet.getId()
print(id)
list=[1,2,78,56,34,32,12]
for i in list:
    print(i,end='  ')
print()
print(max(list)) 
print(min(list))
list.sort()
print(list)
dictionary={1:'surjeet singh',
            2: 'sarthak singh',
            3: 'prateek singh shrikant singh and prashant'               }
print(dictionary[1])
print(dictionary[2])
print(dictionary[3])
print(dictionary.keys())
print(dictionary.values())
