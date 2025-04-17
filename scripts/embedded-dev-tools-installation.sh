#!/bin/bash
# Script to upgrade and Install Embedded Development Tools.

echo "----- Starting System Update -----"
echo "----------------------------------"
echo "-------- Ubuntu Version ----------"
lsb_release -a
#cat /etc/os-release

echo "----------------------------------"
echo "--------- Kernel Version ---------"
uname -r

#echo "----------------------------------"
#echo "Updating Package List ..."
#apt-get update
#echo "----------------------------------"
#echo "Upgrading Installed Packages...."
#apt-get upgrade -y

echo "----------------------------------"
echo "Checking vim-dev-tool is installed"
if command -v vim &> /dev/null; then
#    vim --version
    echo "Vim is already installed."
else
    echo "Vim is not installed. Installing Vim..."
    sudo apt-get install vim -y
fi
echo "----------------------------------"



echo "Checking git-dev-tool is installed"
if command -v git &> /dev/null; then
    git --version
	echo "git is already installed."
else
    echo "git is not installed. Installing git..."
    sudo apt-get install git -y
fi
echo "----------------------------------"


echo "Checking gcc-dev-tool is installed"
if command -v gcc &> /dev/null; then
	gcc --version
    echo "gcc is already installed."
else
    echo "gcc is not installed. Installing gcc..."
    sudo apt-get install gcc -y
fi
echo "----------------------------------"

echo "Checking g++-dev-tool is installed"
if command -v g++ &> /dev/null; then
        g++ --version
    echo "g++ is already installed."
else
    echo "g++ is not installed. Installing g++..."
    sudo apt-get install g++ -y
fi
echo "----------------------------------"

echo "Checking gdb-dev-tool is installed"
if command -v gdb &> /dev/null; then
        gdb --version
    echo "gdb is already installed."
else
    echo "gdb is not installed. Installing gdb..."
    sudo apt-get install gdb -y
fi
echo "----------------------------------"

echo "Checking make-dev-tool is installed"
if command -v make &> /dev/null; then
        make --version
    echo "make is already installed."
else
    echo "make is not installed. Installing make..."
    sudo apt-get install make -y
fi
echo "----------------------------------"





echo "Checking ARM-Cross-dev-tool is installed"
if command -v arm-linux-gnueabihf-gcc &> /dev/null; then
        arm-linux-gnueabihf-gcc --version
    echo "make is already installed."
else
    echo "make is not installed. Installing arm-cross-dev-tools..."
    sudo apt-get install gcc-arm-linux-gnueabihf g++-arm-linux-gnueabihf -y
fi
echo "----------------------------------"





echo "Checking minicom-dev-tool is installed"
if command -v minicom &> /dev/null; then
        minicom --version
    echo "minicom is already installed."
else
    echo "minicom is not installed. Installing minicom..."
    sudo apt-get install minicom -y
fi
echo "----------------------------------"


echo "Checking ctags-dev-tool is installed"
if command -v ctags &> /dev/null; then
        ctags --version
    echo "ctags is already installed."
else
    echo "ctags is not installed. Installing ctags..."
    sudo apt-get install universal-ctags -y
fi
echo "----------------------------------"









#echo "----------------------------------"
echo "Removing Un-necessary Packages...."
apt-get autoremove -y
echo "----------------------------------"
echo "Cleaning-up Package Cache ..."
apt-get autoclean -y
echo "----------------------------------"
echo "Tools Installation Completed."
