#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include <iostream>

int main(void)
{
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

        ICharacter* me = new Character("me");

        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        
        
        
        
        tmp = src->createMateria("cure");
        me->equip(tmp);

        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);

        delete bob;
        delete me;
        delete src;
    }
    // {
    //     Character bob("bob");
    //     bob.equip(new Cure());
    //     bob.equip(new Ice());
    //     bob.use(0, bob);
    //     bob.use(1, bob);
        
    //     std::cout << "========Deep Copy Construction Test!============\n";
    //     Character kyolee(bob);
    //     kyolee.use(0, bob);
    //     kyolee.use(1, bob);

    //     std::cout << "========Deep Copy Assignment Operator Test!=====\n";
    //     Character kyolee2;
    //     kyolee2.equip(new Cure());
    //     kyolee2.equip(new Cure());
    //     kyolee2.equip(new Cure());
    //     std::cout << "Copy Before>>>>>>>>>>>>>>>>>>>>\n\n";
    //     kyolee2.use(0, kyolee);
    //     kyolee2.use(1, kyolee);
    //     kyolee2.use(2, kyolee);

    //     kyolee2 = kyolee;
    //     std::cout << "Copy After>>>>>>>>>>>>>>>>>>>>>\n\n";
    //     kyolee.use(0, kyolee2);
    //     kyolee.use(1, kyolee2);
    //     kyolee.use(2, kyolee2);
    // }

    // std::cout << me->getName() << std::endl;
    // me->equip(new Ice());
    // me->equip(new Cure());
    // me->equip(new Ice());
    // me->equip(new Cure());
    // //me->equip(new Ice());
    // me->unequip(-1);
    // me->unequip(2);
    // me->unequip(6);

    // ICharacter* bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);
    // me->use(2, *bob);
    // me->use(3, *bob);
    // me->use(4, *bob);

    // delete me;
    // delete bob;
    return (0);
}