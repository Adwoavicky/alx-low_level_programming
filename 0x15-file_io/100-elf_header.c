#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
* check_elf - assess if a file is an ELF
* @e_ident: a pointer array which contans the ELF number
*
* Description: if file is not an ELF - exit code 98
*/

void check_elf(unsigned char *e_ident)
{
	int j;

	for (j = 0; j < 4; j++)
	{
	    if (e_ident[j] != 127 &&
		e_ident[j] != 'E' && 
		e_ident[j] != 'L' && 
		e_ident[j] != 'F')
	    {
		    dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		    exit(98);
	    }
	}
}

/**
* print_magic - outputs the magic numbers of an ELF
* @e_ident: the pointer that contains an ELF
*
* Description: separates magic ELF numbers
*/

void print_magic(unsigned char *e_ident)
{
	int j;

	printf(" Magic:  ");

	for (j = 0; j < EI_NIDENT; j++)
	{
		printf("%02x", e_ident[j]);

		if (j == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
* print_class - outputs the class of an ELF header
* @e_ident: a pointer which contains the ELF class
*/

void print_class(unsigned char *e_ident)
{
	printf("  Class:                        ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
* print_data - outputs the data of an ELF header
* @e_ident: a pointer which contains the ELF class
*/

void print_data(unsigned char *e_ident)
{
	printf(" Data:                      ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complemet, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}


/**
* print_version - outputs versions of an ELF header
* @e_ident: the pointer which contains the ELF header
*/

void print_version(unsigned char *e_ident)
{
	printf(" Version:                        %d",
		e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	}
}


/**
* print_osabi - outputs the OS/ABI of an ELF header
* @e_ident: a pointer which contains the ELF header
*/

void print_osabi(unsigned char *e_ident)
{
	printf(" OS/ABI:                     ");

	switch (e_ident[EL_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n"

