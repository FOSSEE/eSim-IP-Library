
# eSim-IP-Library

This repository contains all various IPs which can be uploaded and used directly in eSim.

# SKY130-Analog-IPs

## About
The SKY130 IPs are developed using the SKY130 Open Source PDK.

These IPs are completely `Analog` and are built using the components present in the `sky130_fd_pr` libraries.

These IPs are meant to be used in the eSim Open Source Software developed by FOSSEE, IIT Bombay.

To know more about eSim, please visit:
https://esim.fossee.in/

To know more about FOSSEE, please visit:
https://fossee.in/

## How to use the IP?
- Download/Clone the `SKY130-Analog-IPs` branch of this repository.
- Run **eSim**
- Create a new project in eSim
- Run **Open Schematic** feature
- Click on the **Preferences** button on the Top Menubar
- Click on the **Add** button
- Browse to the path of the SKY130 IP which you want to load in eSim from the cloned repo.
- Click on the **OK** button
- The SKY130 IP gets loaded in eSim and can be included in the circuit whenever needed.
- After creating a schematic and generating the netlist, click on the `Convert Kicad to Ngspice Converter` button.
- Add the required Analysis parameters, source details, Ngspice model and Device modelling details.
- Click on the **Subcircuit Tab**
- For the newly loaded SKY130 IP component, click on the **Add** button.
- Browse to the cloned SKY130 IP folder location. For example, `1blpfadd42`
- Click on **Select Folder** Button and the SKY130 IP gets loaded.
- Click on the **Convert** button at the bottom right corner of the **Kicad To Ngspice** Window.
- Once the conversion is done, run the simulation by clicking on the **Simulation** button on the left toolbar.
- Please note that the above steps need to be repeated for every New Project created in eSim **OR** for every New SKY130 IP to be loaded in eSim.

## More about IPs
To know more about the IPs, you may visit:
https://esim.fossee.in/hackathon/completed-circuits

## Resources
Here are the additional resources available:
https://esim.fossee.in/resources

## Contact
Please find our contact details here:

https://esim.fossee.in/contact-us

