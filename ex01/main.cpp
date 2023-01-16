#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>


int	main(void)
{

	{
		std::cout << "========mellory Allocation Test!(one)====\n";
		const Animal* pAni1 = new Dog();
		const Animal* pAni2 = new Cat();

		pAni1->makeSound();
		pAni2->makeSound();
		delete pAni1;
		delete pAni2;
		std::cout <<"==========================================\n";
	}

	{
		std::cout << "\n\n=========Memory Allocation Test!(Arry)==========\n"; 
		const Animal *pArry[10];
		for (int idx = 0; idx < 10; idx++)
		{
			if (idx < 5)
				pArry[idx] = new Dog();
			else
				pArry[idx] = new Cat();
		}
		std::cout << "\n\n==========sound!!==============\n";
		for (int idx = 0; idx < 10; idx++)
		{
			std::cout << "[" << idx << "]";
			pArry[idx]->makeSound();
			std::cout << std::endl;
		}
		
		std::cout << "\n\n==========Delete!==============\n";
		for (int idx = 0; idx < 10; idx++)
			delete pArry[idx];
		std::cout << "===========================================\n";
	}
	/*	
	{
		std::cout << "======Dog DeepCopy Test!===============\n";
		Dog dog1;

		dog1.learn("You can bark WalWal");
		dog1.learn("You can remember who is the owner");
		dog1.learn("You can play soccer!");
		dog1.comeUp();

		std::cout << "=======Deep Coyp Consturction Test!=========\n";
		Dog	dog2(dog1);
		dog2.comeUp();

		std::cout << "=======Deep Copy Assignment Test!==========\n";
		Dog dog3;
		dog3 = dog2;
		dog3.comeUp();
	}
	
	{
		std::cout << "\n\n======Cat DeepCopy Test!===============\n";
		Cat cat1;

		cat1.learn("You can run Fast!");
		cat1.learn("You can remember who is the owner");
		cat1.learn("You can play soccer!");

		std::cout << "=======Deep Coyp Consturction Test!=========\n";
		Cat cat2(cat1);
		cat2.comeUp();

		std::cout << "=======Deep Copy Assignment Test!==========\n";
		Cat cat3;
		cat3 = cat2;
		cat3.comeUp();
	}
	*/
	{
		std::cout << "\n\n=====Deep Copy Test!================\n";
		Cat cat1;
		cat1.learn("You can play soccer!");

		Brain brain1;
		brain1.learn("You cam remember who is the owner");
		brain1.learn("You can learn some knowledge from the internet");
		brain1.learn("You can communicate with Chat-GTP");
		
		Dog	dog1(brain1);
		Cat	cat2(brain1);
		cat1 = cat2;
		Dog	dog2(dog1);	

		std::cout << "\n\n";
		cat1.comeUp();
		dog1.comeUp();
		cat2.comeUp();
		dog2.comeUp();
	}	
	return (0);
}
