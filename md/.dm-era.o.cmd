cmd_drivers/md/dm-era.o := ld -m elf_x86_64   -r -o drivers/md/dm-era.o drivers/md/dm-era-target.o ; scripts/mod/modpost drivers/md/dm-era.o
