from character import *
import time
import os
import random


class Battle(object):




    def __init__(self):

        self.battlecmds = {
            'attack': self.attack,
            'a' : self.attack,
            'defend': self.defend,
            'd' : self.defend,
            'help' : self.helping,
            'h' : self.helping
        }


# --------------------------- MAIN BATTLE FUNCTION; including battle loop  -------------------------
    def initiateBattle(self, p = Character, e = Character):
        print "You encountered a {}".format(e.name)
        self.stopWatch(1)

        firstPl = self.detTurn(p, e)

        firstPl.isTurn = True

        while p.hp > 0 or e.hp > 0:

            os.system("cls")
            self.printStats(p, e)

            if firstPl == p:
                self.control(p, e)
                if p.hp <= 0 or e.hp <= 0:
                    return
                self.ai(p, e)
                if p.hp <= 0 or e.hp <= 0:
                    return

            elif firstPl == e:
                self.ai(p, e)
                if p.hp <= 0 or e.hp <= 0:
                    return
                self.control(p, e)
                if p.hp <= 0 or e.hp <= 0:
                    return
# --------------------------- MAIN BATTLE FUNCTION; including battle loop  -------------------------


# --------------------------- DETERMINING TURNS  -------------------------
    def detTurn(self, p, e):

        list = []
        list.append(p)
        list.append(e)
        turn = random.randint(0 ,1)
        firtPl = list[turn]
        return firtPl

        # if firtPl == p:
        #     self.control(p, e)
        # elif firtPl == e:
        #     self.ai(p, e)
# --------------------------- DETERMINING TURNS -------------------------




# --------------------------- PLAYER CONTROLS -------------------------gjhgh
    def control(self, p, e):
        p.isTurn = True
        print "-----------------------"
        print p.name + "'s turn"
        print "-----------------------"
        print 'What do you want to do?'
        print '[a]ttack'
        print '[d]efend'
        ctrl = raw_input("BATTLE-==->>")

        if ctrl in self.battlecmds:
            self.battlecmds[ctrl](p, e)
            p.isTurn = False
            return

        else:
            print "You do something recondite"
            self.enterToCont()
            print "-----------------------"
            p.isTurn = False
            return
# --------------------------- PLAYER CONTROLS -------------------------


# --------------------------- ENEMY CONTROLS -------------------------
    def ai(self, p, e):
        print "-----------------------"
        print e.name + "'s turn"
        print "-----------------------"
        e.isTurn = True
        ai_cmds = ['a', 'd']
        ai_select = ai_cmds[random.randint(0,1)]
        self.battlecmds[ai_select](p, e)
        e.isTurn = False
        return
# --------------------------- ENEMY CONTROLS -------------------------





# --------------------------- ATTACK FUNCTION -------------------------

    def attack(self, p, e):

        if p.isTurn == True:
           print p.name + ' attacks ' + e.name
           self.stopWatch(.5)
           dmg = self.attackPoints(e)
           print p.name + ' does ' + str(dmg) + ' damage'
           self.stopWatch(.5)


        elif e.isTurn == True:
            print e.name + ' attacks ' + p.name
            self.stopWatch(.5)
            dmg = self.attackPoints(p)
            print e.name + ' does ' + str(dmg) + ' damage'
            self.stopWatch(.5)

        self.enterToCont()

#--------------------------- ATTACK FUNCTION -------------------------



#--------------------------- DEFEND FUNCTION -------------------------
    def defend(self, p, e):

        if p.isTurn == True:

           p.isDefend = True
           print p.name + ' defends from ' + e.name

        elif e.isTurn == True:

            e.isDefend = True
            print e.name + ' defends from ' + p.name

        self.enterToCont()
#--------------------------- DEFEND FUNCTION -------------------------



#--------------------------- HELP TEXT FUNCTION -------------------------
    def helping(self):
        print "Type: 'help' for these instructions"
        print "Type: 'Attack' to attack when in combat"
        print "Type: 'defend' to defend yourself in combat"
        i = raw_input("Press enter to continue...")
#--------------------------- HELP TEXT FUNCTION -------------------------



#--------------------------- ATTACK POINTS FUNCTION -------------------------

    def attackPoints(self, c):

        if c.isDefend == True:
            dmg = random.randint(0, 5)
            c.isDefend = False
            print c.name + '  defense shattered...!'
        else:
            dmg = random.randint(0, 10)
        c.hp -= dmg
        return dmg

#--------------------------- ATTACK POINTS FUNCTION -------------------------



#--------------------------- PRINT CHARACTER STATS FUNCTION -------------------------
    def printStats(self, p, e):
        print """
 __   __
 \ \ / /__  _   _
  \ V / _ \| | | |
   | | (_) | |_| |
   |_|\___/ \__,_|
                   """
        p.character_status()

        print ''
        print ''

        print """
  _____
 | ____|_ __   ___ _ __ ___  _   _
 |  _| | '_ \ / _ \ '_ ` _ \| | | |
 | |___| | | |  __/ | | | | | |_| |
 |_____|_| |_|\___|_| |_| |_|\__, |
                             |___/ """
        e.character_status()


#--------------------------- PRINT CHARACTER STATS FUNCTION -------------------------



#--------------------------- stopWatch FUNCTION -------------------------

    def stopWatch(self, t):
        elapsed = 0
        while elapsed < t:
            print '.',
            time.sleep(0.5)
            elapsed += 0.2
        print ''
#--------------------------- stopWatch FUNCTION -------------------------



#--------------------------- press Enter to C0ntinue FUNCTION -------------------------
    def enterToCont(self):
        i = raw_input("Press enter to continue...")
        print "-----------------------"
#--------------------------- press Enter to C0ntinue FUNCTION -------------------------
