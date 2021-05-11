cmd_drivers/md/dm-thin-pool.o := ld -m elf_x86_64   -r -o drivers/md/dm-thin-pool.o drivers/md/dm-thin.o drivers/md/dm-thin-metadata.o ; scripts/mod/modpost drivers/md/dm-thin-pool.o
