# Character file

class Character(object):
    def __init__(self, name, hp):
        self.name = name
        self.hp = hp
        self.isTurn = False
        self.isDefend = False
        self.maxHp = hp

    def character_status(self):
        print "-----------------"
        print "Stats --> {}".format(self.name)
        print "-----------------"
        print "HP  : {}/{}".format(self.hp, self.maxHp)
        print "MP  : {}/{}".format(40,40)
        print "-----------------"

