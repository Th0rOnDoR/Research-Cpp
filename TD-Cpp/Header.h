#pragma once
#include <string>
using std::string;

namespace TD
{
	class TD_Boucles {

	public: static int Addition(int x, int y);
	public: static int MultiplicationN(int x, int y);
	public: static int MultiplicationZ(int x, int y);
	public: static int Puissance(int x, int n);
	public: static int Fibonacci(int n);
	public: static int Mirroir(int x);
	public: static int Quotient(int x, int y);
	public: static int Factorielle(int x);
	public: static int FactorielleCalculbre(int limit);
	};


	class TD_Strings {
	public: static int Recherche(string str);
	public: static int Appartient(string str, char c);
	public: static bool Palindrome(string str);
	public: static bool EstPhrase(string str);
	public: static int Sous_chaine(string str, string sub_str);
	public: static int Sous_palindrome(string str);
	};


	class TD_Imperative {

	public: static bool test(int n);
	public: static int sum_digits(int n);
	public: static int product_digit(int n);
	public: static int abs(int n);
	public: static int loop(int n);
	public: static int List_to_9(int x);
	};
}