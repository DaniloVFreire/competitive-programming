import random
class RandomizedSet:
    def __init__(self):
        self.l = []
        self.d = {}

    def search(self, val: int) -> int:
        return self.d.get(val)

    def insert(self, val: int) -> bool:
        pos = self.search(val)
        if pos != None:
            return False

        self.l.append(val)
        self.d[val] = len(self.l) -1
        return True


    def remove(self, val: int) -> bool:
        pos = self.search(val)
        if pos == None:
            return False
        last_pos = len(self.l) - 1
        if last_pos > 0:
            self.l[pos], self.l[last_pos] = self.l[last_pos],self.l[pos]
            self.d[self.l[pos]] = pos
        del self.d[self.l[last_pos]]
        self.l.pop()
        return True

    def getRandom(self) -> int:
        if len(self.l) <= 0:
            return None
        return random.choice(self.l)


obj = RandomizedSet()
sol = [
    obj.getRandom(),
    obj.insert(1),
    obj.remove(2),
    obj.insert(2),
    obj.getRandom(),
    obj.remove(1),
    obj.insert(2),
    obj.getRandom()]
print(sol)