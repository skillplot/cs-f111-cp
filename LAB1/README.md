# Lab Sheet 1 solution

*The best way to emulate almost any network on your laptop!*


### Change current path to Desktop



  `cd Desktop`

### Creating BIT Directory on Desktop


  `mkdir BIT`

### Creating 3 directories in BIT

 For this we need to move in BIT directory
 
 `cd BIT`
- Method 1:Individula directory creation
  
  `mkdir Pilani`
  `mkdir Goa`
  `mkdir Hyderabad`



- Method 2:

  `mkdir {Pilani,Goa,Hyderbad}`

### Creating P_Dept  in Pilani

`cd Pilani`

`mkdir P_Dept`

### Creating CSE and ECE in P_Dept

`cd P_Dept`

`mkdir {Cse,ECE}`

### Creating F1.txt file in CSE

`cd CSE`

`cat > f1.txt`

### Creating H_Dept  in Hyderabad

As we are currently in Pilani's P_Dept directory so we need to come to Hyderbad Directory so for this

`cd ~/Desktop/BIT`

`cd Hyderbad`

`mkdir H_Dept`

### Creating Mech and IE in H_Dept

`cd H_Dept`

`mkdir {Mech, IE}`

### Creating G_Dept  in Goa

As we are currently in Hyderabad's H_Dept directory so we need to come to Goa Directory so for this

`cd ~/Desktop/BIT`

`cd Goa`

`mkdir G_Dept`

### Creating Phy and Chem in G_Dept

`cd G_Dept`

`mkdir {Phy, Chem}`

### Creating F1.txt file in Phy

`cd Phy`

`cat > f1.txt`

### Creating f2.txt in ECE directory

We need to change our path whihc can be done using

`cd ~/Desktop/BIT/Pilani/P_dept/ECE`

Then to create f2.txt

`cat >f2.txt`

and then enter 10 random names.

### Copying content of f2.txt to f4.txt which is in Hyderbad Directory

cp commnad helps to copy content of file1 to file2

`cp file1 file2` : this command will help if we want to copy in the same directory otherwise we need to specify the path of the files also

`cp f2.txt ~/Desktop/BIT/Hyderabad/H_Dept/Mech/f4.txt`

 ### To print from 4th line 

 `tail -7 f4.txt`

 ### Removing ECE directory from Pilani

 We need to change the path first

 `cd ~/Desktop/BIT/Pilani/P_dept`

Remove using

 `rm -r ECE`


`tail -7 f4.txt`










