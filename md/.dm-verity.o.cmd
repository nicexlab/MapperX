cmd_drivers/md/dm-verity.o := ld -m elf_x86_64   -r -o drivers/md/dm-verity.o drivers/md/dm-verity-target.o ; scripts/mod/modpost drivers/md/dm-verity.o
