// demander la librairie standard.
#include <iostream>

int main()
{
	// text aficher "votre age" sur la console.
	std::cout << "votre age : " << std::endl;
	// int correspond a un nombre et age et le mot cl� pour appeler la variable.
	int age;
	std::cin >> age;
	// afficher le mot "votre age et de" la variable age qui correspond au nombre saisi plus le mot "ans" qui vien apr�s.
	std::cout << "votre age et de : " << age << " ans" << std::endl;
	// fin du code bravo vous avez r�ussi.
	return 0;
}