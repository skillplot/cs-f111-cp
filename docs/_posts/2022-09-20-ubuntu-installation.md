---
id: ubuntu-installation
title: Ubuntu Installation
description: Ubuntu Installation
---


This document serves as a guide for installing `Ubuntu 20.04 LTS` a linux OS into a system through a bootable device


## Steps

1. Insert the bootable pen drive into the system.
2. When the system is starting press F12 repetitively. Then a boot menu appears on the display.

![ALT bootmenu](images/bootmenu.jpg)

3. Select the bootable device that you have inserted from the list, and press enter.
4. Then a **grub menu** appears , select the system that you want to install.
5. Then a new screen appears, which displays as 'Checking Disks' , wait for dew minutes.

![ALT diskcheck](images/diskcheck.jpg)


6. A new window appears as follows, Select Install Ubuntu ( If you just want to use it once, you can click on 'Try Ubuntu'.

![ALT install_ubuntu](images/install_ubuntu.jpg)

7. Select your preferred language from the drop down list.

![ALT language](images/language.jpg)

8. Now as shown in the image, it would ask us to choose between various installation methods, generally Normal Installation is preferred, but you can select other
options according to your preferrence( say, you want to install softwares for various uses, go for 'Install third-party software'

![ALT install_method](images/install_method.jpg)

9. Now it would ask to connect to internet, you can connect now, but it is not mandatory.
10. As shown below, it would ask us to choose installation type, select an option according to your preference, which could be erasing the previous system
completely and installing new, installing alongside or you can choose and create partition according to your use.
We will choose 'something else', so that we can create partition as per our requirement

![ALT install_type](images/install_type.jpg)

11. Now as shown below, a list of partitions along with other details is displayed, follow certain rules while creating and edition partitons
  * The first partition should be EFI, whose size can be around 500-550MB
  * The second partition could be your main partiton where you want your system to be installed, it should be largest , and select ext4 in the 'File System'
  * The third partiton should be SWAP partition , whose space should be around 32GB.
  * There are 4 physical partition allowed, if you want more, then you can make the fourth one as logical and then inside it you can create more physical 
  partitions
   **The above memory specifications are according to a 1TB hard-drive**
   
![ALT partitons](images/partitons.jpg)

12. Now click on 'Install Now'.
13. Chose your location

![ALT location](images/location.jpg)


14. Enter your name, username and password which you want to set.
15. Wait for few minutes, for the installation to be completed.
16. When the system asks, remove the bootable device and pen drive.

![ALT complete](images/complete.jpg)
