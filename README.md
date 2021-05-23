# MapperX
MapperX is a novel extension to DM-cache that uses an on-disk adaptive bit-tree (ABT) to synchronously maintain the metadata of dirty bits in a hierarchical manner. Leveraging spatial locality of block writes, MapperX achieves controlled metadata persistence overhead with fast crash recovery by adaptively adding/deleting leaves in the ABT where different levels represent the status of cached blocks with different granularity.

# Enviroment
OS: Centos7  
Kernel version: 3.10.0-514

# Installation
yum install lvm2  
wget https://buildlogs.centos.org/c7.1611.01/kernel/20161117160457/3.10.0-514.el7.x86_64/kernel-3.10.0-514.el7.src.rpm  
rpm -ihv kernel-3.10.0-514.el7.src.rpm  
cd ~/rpmbuild/SOURCES  
tar Jxvf linux-3.10.0-514.el7.tar.xz -C /usr/src/kernels/  
cd /usr/src/kernels/  
mv $(uname -r) $(uname -r)-old  
mv linux-3.10.0-514.el7/ $(uname -r)  
yum install elfutils-libelf-devel  
cd $(uname -r)  
make mrproper  
cp ../$(uname -r)-old/Module.symvers ./  
cp /boot/config-$(uname -r) ./.config  
rm -rf drivers/md  
git clone https://github.com/nicexlab/MapperX/  
mv MapperX/md drivers  
make oldconfig  
make prepare  
make scripts  
make CONFIG_DM_CACHE=m M=drivers/md
