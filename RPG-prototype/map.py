""" The map file. Contains information about the map the character is exploring around

"""

import random

class Map(object):
    def __init__(self):
        self.locations = {
            1: {
                'name': "Ambivalent Start",
                'enemy': self.randomizeEnemy,
                'loc': """
                            MmhhhhhhhhhhhhhhhhhhdMMhhhhhhhhhhhhhhhhhdM:
                            Mo                  :MN                 :M:
                            Mo                  :MN                 :M:
                            Mo                                      :M:
                            Mo                  :MN                 :M:
                            Mh///////  |////////oMN/////.   :///////oM:
                            MNmmmmmmd  |mmmmmmmmNMMmmmmmo   hmmmmmmmNM:
                            Mo                  :MN                 :M:
                            Mo                  :MN                 :M:
                            Mo                  :MN          -..    :M:
                            Mo                  :MN          -.`    :M:
                            Mo                  :MN          ``     :M:
                            Mo                  :MN                 :M:
                            mddddddddddddddddddddmmddddddddddddddddddm:
                            |           Ambivalent Start              |
                            mddddddddddddddddddddmmddddddddddddddddddm:""",
                'north': 2,

            },

            2: {
                'name': 'Bucolic Emotions',
                'enemy': self.randomizeEnemy,
                'loc':  """
                            MmhhhhhhhhhhhhhhhhhhdMMhhhhhhhhhhhhhhhhhdM:
                            Mo                  :MN      -..        :M:
                            Mo                  :MN      -.`        :M:
                            Mo                           ``         :M:
                            Mo                  :MN                 :M:
                            Mh///////  |////////oMN/////.   :///////oM:
                            MNmmmmmmd  |mmmmmmmmNMMmmmmmo   hmmmmmmmNM:
                            Mo                  :MN                 :M:
                            Mo                  :MN                 :M:
                            Mo                  :MN                 :M:
                            Mo                  :MN                 :M:
                            Mo                  :MN                 :M:
                            Mo                  :MN                 :M:
                            mddddddddddddddddddddmmddddddddddddddddddm:
                            |           Bucolic Emotions              |
                            mddddddddddddddddddddmmddddddddddddddddddm:""",
                'south': 1,
                'west': 3,

            },

            3: {
                'name': 'Castigating Negativity',
                'enemy': self.randomizeEnemy,
                'loc': "------------------------\n"
                       "|   P                  |\n"
                       "|          X           |\n"
                       "|---  -----+----  -----|\n"
                       "|          X           |\n"
                       "|          X           |\n"
                       "------------------------\n"
                       " Castigating Negativity \n",
                'east': 2,
                'south': 4
            },

            4: {
                'name': 'Demurred Actions',
                'enemy': self.randomizeEnemy,
                'loc': "------------------------\n"
                       "|                      |\n"
                       "|          X           |\n"
                       "|---  -----+----  -----|\n"
                       "|          X           |\n"
                       "|   P      X           |\n"
                       "------------------------\n"
                       "    Demurred Actions    \n",
                'north': 3
            }
        }


    def returnLoc(self):
        return self.locations


    def randomizeEnemy(self):
        det = random.randint(0,1)
        if det == 0:
            return
        elif det == 1:
            print 'Enemy in sight! Initiating battle.....'
            return 1
