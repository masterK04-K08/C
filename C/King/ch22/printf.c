#include <stdio.h>

//----------------------- GENERAL INFO -------------------------------

// fprintf (FILE * restrict stream, const char* restrict format, ...);
//  printf (const char* restrict format, ...);
//
//	RETURN VALUE: number of chars WRITTEN
//	(-) RETURN VALUE -> error
//
//	printf("Total: %d\n", total); // EQUIVALENT
//	fprintf( stdout, "Total: %d\n", total);
//
//	e.g.
//	fprintf(stderr, "Error \n");
//
//
//	TWO other functions in <stdio.h> that can write formatted output to a stream
//	vfprintf()
//	 vprintf()	RELY on type va_list (declared in <stdarg.h>)

// printf / scanf have the ABILITY to convert data from CHARACTER FORM to NUMERIC FORM during INPUT
// 						   from NUMERIC FORM to CHARACTER FORM during OUTPUT


//----------------------------- CONVERSION SPECIFICATIONS -------------------------------

//	% | FLAGS [ #-+0 ] | MIN field width | . PRECISION | length modifier | CONVERSION SPECIFIER
//	
//	FLAGS : 
//		
//		- LEFT justification
//		+ Display signs for all numbers
//		<space> positive numbers PREceded by <space>
//		# octal numbers begin with 0
//		  hex numbers begin with 0x
//		  floats always have a DECIMAL POINT.
//		  keeps trailing zerow from numbers printed with g and G conversion
//		0 Numbers are PADDED with LEADING zeros up to field width.
//
//	
//
//	MIN FIELD WIDHT:
//		
//		integer
//		*	When used "%*.*f ", 5, 3 -> 5.3f
//
//
//	PRECISION:
//		
//		MIN number of digits (for %d, i, o, u, x X)
//		NUM of digits after DECIMAL POINT (a, A, e, E, f, F)
//		NUM of significant digits (g, G)
//		
//		MAX number of BYTES   %s
//
//
//		%.p
//		
//		Where p = integer number
//		      
//		      *  When present PRECISION is obtained from next argument
//
//
//	
//	LENGTH MODIFIER
//		
//		%hhd
//		%hhi (o, u, x X)
//		
//		RESULT
//		signed / unsigned BYTE
//		// Takes %d which is 4 bytes and shortens it to 1
//
//
//
//		%hd
//		%hi ...etc
//
//		RESULT
//		short int, unsigned short int
//		// Takes %d which is 4 bytes and shortens it to 2
//
//		
//
//		%ld
//		%li ... etc
//		
//		RESULT
//		long int, unsigned long int
//		// Takes %d which is 4 bytes and makes it a long int
//		
//		%lc wint_t
//		%ls wchar_t*
//
//
//
//		%lld
//		%lli ... etc
//
//		RESULT
//		long long int, unsigned long long int
//		// Takes %d and makes it long long int
//
//
//		%jd
//		%ji ... etc
//
//		RESULT
//		intmax_t, uintmax_t
//		// Takes ??
//
//
//		%zd
//		%zi ... etc
//
//		RESULT
//		// Takes %d and make it type size_t
//
//
//
//		%td
//		%ti
//
//		RESULT
//		// Takes %d and makes it ptrdiff_t type
//
//
//
//		%Ld
//		%Li
//
//		RESULT
//		// Take %d and makes it long double
//
//
//
// --------------- CONVERSION SPECIFIER -------------------
//
//	f, F, e, E, g, G, a, A   All write DOUBLE values
//
//
//	%d,i		Converts INT VALUE to decimal
//	%o,u,x,X 	Converts UNSIGNED INT VALUE to base 8 (o)
//						       base 10 (u)
//						       base 16 (x, X)
//
//	%f,F		Converts DOUBLE VALUE to decimal form
//
//
//	%e,E		Converts DOUBLE VALUE to scientific notation
//
//	%g,G		Converts DOUBLE VALUE to either %.pe (when exp > p or exp < -4)
//						  or to %.pf (for numbers in normal ranges)
//						  
//			USEFUL when you don't know the size of the numbers to be displayed or
//			when it varies significantly
//
//	%a, A		exponential hex
//
//	%c		char
//
//	%p		converts void* VALUE to printable form
//
//	%n		must POINT to object of type int. Stores in object the number of chars WRITTEN so FAR
//
//	%%		writes the % char
//
//
//=======================================================================================================
//------------------------ E X A M P L E S ---------------------------
//


int main(void) {

// EFFECT of ( -, +, m, <space>, 0 ) FLAGS

	printf("|%8d|\n", 123);	
	printf("|%-8d|\n", 123);	
	printf("|%+8d|\n", 123);	
	printf("|%3d|\n", 123);	
	printf("|%08d|\n", 123);	
	printf("|%-+8d|\n", 123); /* LEFT justification and SIGNS to all numbers */	
	printf("|%- 8d|\n", 123); /* LEFT justification and space PRECEDES positive number */	
	printf("|%+08d|\n", 123);	
	printf("|% 08d|\n", 123);	

// EFFECT of # FLAG


	printf("|%8o|\n", 173);
	printf("|%#8o|\n", 173);
	printf("|%8x|\n", 173);
	printf("|%#8x|\n", 173);
	printf("|%8X|\n", 173);
	printf("|%#8X|\n", 173);
	printf("|%8g|\n", 123.0);
	printf("|%#8g|\n", 123.0); // g, G normally truncate 0s # flag bypasses it
	printf("|%8G|\n", 123.0);
	printf("|%#8G|\n", 123.0);
		

	return 0;
}
