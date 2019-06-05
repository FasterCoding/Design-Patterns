class Singleton:

    _INSTANCE = None

    class __Singleton:
        def __init__(self):
            self._number = None
        
        def setNumber(self, number):
            self._number = number
        
        def getNumber(self):
            return self._number
    
    def __new__(self):
        if not Singleton._INSTANCE:
            Singleton._INSTANCE = Singleton.__Singleton()
        
        return Singleton._INSTANCE
    
    def __getattr__(self, name):
        return getattr(self._INSTANCE, name)