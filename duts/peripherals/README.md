# Peripherals
## GCD
Nutzung als Peripheral ist relativ einfach:

1. a setzen
2. b setzen
3. valid auf 1 setzen
4. ready pollen bis 1 oder auf irq output warten
5. resultat lesen

Adresse | Name | Beschreibung
--------|------|----------------
0x00    | A    | a von gcd(a,b), 32 bits
0x04    | B    | b von gcd(a,b), 32 bits
0x08    | res  | resultat = gcd(a,b), 32 bits
0x0c    | ready| wenn gcd(a,b) fertig berechnet ist, ist ready = 1 (und output irq=1), wird bei lesen von res auf 0 gesetzt.
0x10    | valid| auf 1 setzen um gcd(a,b) zu berechnen und in res zu speichern

## Hash
Nuztung ist ähnlich wie bei GCD, funktion tut halt etwas anders

1. a setzen
2. b setzen
3. valid auf 1 setzen
4. ready pollen bis 1 oder auf irq output warten
5. resultat lesen

Adresse | Name | Beschreibung
--------|------|----------------
0x00    | A    | a von hash(a,b), 32 bits
0x04    | B    | b von hash(a,b), 32 bits
0x08    | hash | hash(a,b), 32 bits
0x0c    | ready| wenn hash(a,b) fertig berechnet ist, ist ready = 1 (und output irq=1), wird bei lesen von res auf 0 gesetzt.
0x10    | valid| auf 1 setzen um hash(a,b) zu berechnen und in res zu speichern

## Map
Hier liegt ein geteilter Speicher zwischen dem MMIO interface und dem Peripheral.

Als erstes legt man über das memory interface daten ab:
1. addresse setzen
2. schreibdaten setzen
3. schreib befehl absetzen
4. solange 1-3 wiederholen bis alle daten geschrieben sind
5. valid auf 1 setzen
6. ready pollen bis 1 oder auf irq output warten

dann zum lesen der ganzen daten
1. addresse setzen
2. lesedaten auslesen
3. solange 1-2 wiederholen bis alle daten gelesen sind

Adresse | Name | Beschreibung
--------|------|----------------
0x00    | mAddr| memory interface adresse 0-7 (platz für 8 elemente)
0x04    | mWdat| memory interface write data (32 bits)
0x08    | mRdat| memory interface read data an der adresse mAddr
0x0c    | mWREn| memory interface write enable, wenn auf 1 gesetzt, wird mWdat an mAddr gespeichert
0x10    | mapV | mapping value parameter, teil des algorithmus der die werte verändert bei der berechnung
0x14    | valid| auf 1 setzen um map() auf den gespeicherten memory iterativ zu berechnen (memory IF in der zeit nicht nutzbar).
0x18    | ready| wenn map() fertig berechnet ist, ist ready = 1 (und output irq=1), wenn ready = 1 ist und gelesen wird, wird ready auf 0 gesetzt.
