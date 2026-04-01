# 🚪 Système automatique avec capteur IR et servomoteur (Arduino)

## 📌 Description

Ce projet permet de contrôler automatiquement un servomoteur à l’aide d’un capteur infrarouge (IR).
Lorsqu’un objet est détecté, le servo change de position (ex : ouverture d’une porte/barrière).
Sinon, il revient à sa position initiale.

---

## ⚙️ Fonctionnalités

* 📡 Détection d’obstacle avec capteur IR
* 🔄 Mouvement automatique du servomoteur
* ⚡ Réaction en temps réel
* 🧠 Logique simple et efficace

---

## 🧰 Matériel utilisé

* Arduino (UNO / Mega)
* Capteur IR (détection d’obstacle)
* Servomoteur (SG90 ou équivalent)
* Fils de connexion

---

## 🔌 Connexions

### Capteur IR

| Capteur IR | Arduino |
| ---------- | ------- |
| VCC        | 5V      |
| GND        | GND     |
| OUT        | Pin 12  |

---

### Servomoteur

| Servo  | Arduino |
| ------ | ------- |
| VCC    | 5V      |
| GND    | GND     |
| Signal | Pin 13  |

---

## 🧠 Principe de fonctionnement

1. Le capteur IR détecte un objet
2. Si détection → sortie = `LOW`
3. Le servo se déplace (ex : ouverture)
4. Si aucun objet → le servo revient à sa position initiale

---

## 💻 Installation

1. Installer Arduino IDE
2. Importer la bibliothèque :

   * `Servo.h` (déjà incluse par défaut)
3. Connecter les composants
4. Téléverser le code
5. Tester le système

---


## ⚠️ Remarques importantes

* Le capteur IR retourne généralement :

  * `LOW` → objet détecté
  * `HIGH` → aucun objet
* Adapter les angles du servo selon ton application (0° à 180°)
* Éviter d’alimenter le servo directement depuis l’Arduino si puissance élevée

---

## 🚀 Améliorations possibles

* Ajouter un écran LCD pour afficher l’état
* Ajouter un buzzer (alarme)
* Ajouter Bluetooth pour contrôle à distance
* Ajouter plusieurs capteurs IR

---


