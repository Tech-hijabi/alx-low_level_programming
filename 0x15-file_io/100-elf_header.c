#include "main.h"

void check_elf(unsigned char *ptr_elf);
void disp_magic(unsigned char *ptr_elf);
void disp_class(unsigned char *ptr_elf);
void disp_data(unsigned char *ptr_elf);
void disp_version(unsigned char *ptr_elf);
void disp_abi(unsigned char *ptr_elf);
void disp_os_abi(unsigned char *ptr_elf);
void disp_type(unsigned int elf_type, unsigned char *ptr_elf);
void disp_entry_point(unsigned long int elf_entry, unsigned char *ptr_elf);
void close_elf(int elf);

/**
 * check_elf - function checks to see if a file is an elf file
 * @ptr_elf: pointer to the array containing the elf magic numbers
 *
 * Description: exit status is 98 if the file is not an elf file
 */
void check_elf(unsigned char *ptr_elf)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (ptr_elf[index] != 127 &&
		    ptr_elf[index] != 'E' &&
		    ptr_elf[index] != 'L' &&
		    ptr_elf[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: not an elf file\n");
			exit(98);
		}
	}
}

/**
 * disp_magic - function displays the magic numbers of an ELF header.
 * @ptr_elf: pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void disp_magic(unsigned char *ptr_elf)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", ptr_elf[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * disp_class - function displays the class of an ELF header.
 * @ptr_elf: pointer to an array containing the ELF class.
 */
void disp_class(unsigned char *ptr_elf)
{
	printf("  Class:                             ");

	switch (ptr_elf[EI_CLASS])
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
		printf("<unknown: %x>\n", ptr_elf[EI_CLASS]);
	}
}

/**
 * disp_data - function displays the data of an ELF header.
 * @ptr_elf: pointer to an array containing the ELF class.
 */
void disp_data(unsigned char *ptr_elf)
{
	printf("  Data:                              ");

	switch (ptr_elf[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", ptr_elf[EI_CLASS]);
	}
}

/**
 * disp_version - function displays the version of an ELF header.
 * @ptr_elf: pointer to an array containing the ELF version.
 */
void disp_version(unsigned char *ptr_elf)
{
	printf("  Version:                           %d",
	       ptr_elf[EI_VERSION]);

	switch (ptr_elf[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * disp_os_abi - function displays the OS/ABI of an ELF header.
 * @ptr_elf: pointer to an array containing the ELF version.
 */
void disp_os_abi(unsigned char *ptr_elf)
{
	printf("  OS/ABI:                            ");

	switch (ptr_elf[EI_OSABI])
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
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", ptr_elf[EI_OSABI]);
	}
}

/**
 * disp_abi - function displays the ABI version of an ELF header.
 * @ptr_elf: pointer to an array containing the ELF ABI version.
 */
void disp_abi(unsigned char *ptr_elf)
{
	printf("  ABI Version:                       %d\n",
		ptr_elf[EI_ABIVERSION]);
}

/**
 * disp_type - function displays the type of an ELF header.
 * @e_type: The ELF type.
 * @ptr_elf: pointer to an array containing the ELF class.
 */
void disp_type(unsigned int e_type, unsigned char *ptr_elf)
{
	if (ptr_elf[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * disp_entry_point - function displays the entry point of an ELF header.
 * @e_entry: address of the ELF entry point.
 * @ptr_elf: pointer to an array containing the ELF class.
 */
void disp_entry_point(unsigned long int e_entry, unsigned char *ptr_elf)
{
	printf("  Entry point address:               ");

	if (ptr_elf[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (ptr_elf[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - function closes an ELF file.
 * @elf: file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - function displays the content of the elf header once the file opens
 *
 * @argc: the argument count of the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success
 *
 * Description: If the file isn't an ELF File or fails - exit code 98
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	disp_magic(header->e_ident);
	disp_class(header->e_ident);
	disp_data(header->e_ident);
	disp_version(header->e_ident);
	disp_os_abi(header->e_ident);
	disp_abi(header->e_ident);
	disp_type(header->e_type, header->e_ident);
	disp_entry_point(header->e_entry, header->e_ident);

	free(header);
	close_elf(o);
	return (0);
}
