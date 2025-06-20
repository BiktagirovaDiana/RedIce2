﻿#include "Text.h"

// общие элементы
void Text::Continue()
{
	cout << "Нажмите любую кнопку чтобы продолжить" << endl;
}

void Text::DefaultButton()
{
	cout << "НЕПРАВИЛЬНЫЙ ВВОД! Попробуйте еще раз!" << endl;
}

void Text::BeforeLose()
{
	cout << " У вас недостаточно ресурсов!" << endl;
}


// Уровень 1 
void Text::Level1::HelloPablo1()
{
	cout << "Пабло:" << endl;
	cout << "Здравствуйте мистер Корлеоне, я ваш новый помощник Пабло, отныне я буду заменять ныне покойного Сантьяго.\n " <<
		"До меня меня дошла информация что мелкие наркобарыги продают некачественный товар под вашим именем, что " <<
		"снижает ваше влияние.Что прикажете делать? " << endl;
	cout << "\n1: Уничтожить противника силой" << endl;
	cout << "2: Попытаться договориться" << endl;
}

void Text::Level1::Strategy1()
{
	cout << " Как именно вы хотите напасть?" << endl;
	cout << "\n1: Предложить встретиться в пустыне и расставить снайперов" << endl;
	cout << "2: Ворваться в логово врага" << endl;
	cout << "3: Пригласить врага в своё логово на «разговор»" << endl;
}

void Text::Level1::PeopleDesert()
{
	cout << "Сколько людей вы возьмете?" << endl;
	cout << "\n1: 2 киллера = $700" << endl;
	cout << "2: 1 киллер и 1 телохранитель  = $750" << endl;
	cout << "3: 1 киллера и 2 телохранителя  = $1100" << endl;
	cout << "4: 2 киллера и 2 телохранителя  = $1500" << endl;
}

void Text::Level1::StrategyDesert()
{
	cout << "Выберите стратегию для ваших людей:" << endl;
	cout << "1: Атака" << endl;
	cout << "2: Защита" << endl;
}

void Text::Level1::DesertAttak()
{
	cout << "Из-за внезапности нападения вы сразу же отнимаете у противника 20 HP" <<
		", убивая его киллеров (-4 патрона). Остался лишь главарь и его охраник." << endl;
}

void Text::Level1::DesertDefense()
{
	cout << "Враг напал раньше, поэтому ваши люди убиты или ранены. Несмотря на ранение," <<
		"1 киллер тратит 4 патрона и справляется с людьми главы другого картеля. НР врага упало на 20." << endl;
}

void Text::Level1::Death1()
{
	cout << "Отчаявшись глава группировки стреляет в вас на смерть!" << endl;
}

void Text::Level1::Survive()
{
	cout << "Отчаявшись глава группировки пытается убить вас, но ваши телохранители берут удар на себя!" << endl;
}

void Text::Level1::Win1()
{
	cout << "Вы теря ете 20НР но остаетьесь живы :D " << endl;
	cout << "Один из ваши охраников убивает главного барыгу и его телохранителя (- 4 патрона)" << endl;
	cout << "Вы победи! Получаете новых людей, точки торговли, + $1000, +10% влияния и +20% силы картеля." << endl;
}

void Text::Level1::PeopleLair()
{
	cout << "Сколько людей хотите отправить?" << endl;
	cout << "1: 2 наёмника = $700" << endl;
	cout << "2: 3 наёмника = $900" << endl;
	cout << "3: 4 наёмника = $1200" << endl;
}

void Text::Level1::AttakLair()
{
	cout << "Ваши люди смогли проникнуть в логово противника. Тмкже они нанесли небольшой" <<
		" урон врагу в 10НР (- 2 патрона), но были окружены и взяты в плен" << endl;
	cout << "Что будете делать?" << endl;
	cout << "1: Предложить новое место встречи и продолжить бой, наплевав на пленных" << endl;
	cout << "2: Выкупить своих людей и попробовать договориться" << endl;
}

void Text::Level1::Win2()
{
	cout << "Вам пришлось заплатить $1000 в качестве выкупа и еще $2000 в качестве примерения." <<
		"Это стало началом новой дружбы, но также показало вашу слабость." << endl;
}

void Text::Level1::Nothing()
{
	cout << "Никто не пришёл вам нужно принять другое решение!" << endl;
}

void Text::Level1::Negotations()
{
	cout << "Барыга предложил вам заплатить ему $2000 и он оставит вас в покое. Соглатитесь ли вы?" << endl;
	cout << "1: Согласиться" << endl;
	cout << "2: Торговаться до $1000" << endl;
	cout << "3: Пригрозить и предложить только $500" << endl;
}

void Text::Level1::WinNegotations1()
{
	cout << "Вы заплатили 2000$ в качестве примирения. Возможно данные барыги к вам еще обратятся, но потеряли 15 % влияния." << endl;
}

void Text::Level1::WinNegotations2()
{
	cout << "Вы заплатили 1000$ в качестве примирения, это стало началом вашей дружбы. Больше данные барыги " <<
		"не будут трогать ваш бизнес. Но вы потеряли 10% влияния." << endl;
}

void Text::Level1::LoseNegotations()
{
	cout << "После вашего наглого предложения один из барыг стреляет в вас. Вы мертвы!!!" << endl;
}


// Уровень 2
void Text::Level2::HelloPablo2()
{
	cout << "\nНапоминание:" << endl;
	cout << "Следите за количеством оружия, ведь если у вас будет его слишком мало, " <<
		"то вас убьют во время схватки. Лучше покупайте от 10 патронов." << endl;
	cout << "\n Мистер Корлеоне к нам снова пришла беда. Кажется Аль Пачино решил, " <<
		"что мы ослабли после последней стычки, поэтому готовится уничтожить нас!"
		" Что прекажите делать?" << endl;
	cout << "1: Докажем силой свою мощь" << endl;
	cout << "2: Откупимся" << endl;
}

void Text::Level2::PayOff()
{
	cout << "Ваше решение нелогично! Пачино никогда не пойдет на это, вам придеться сразиться!" << endl;
}

void Text::Level2::Strategy2()
{
	cout << "Выберете стратегию атаки:" << endl;
	cout << "1: Заманить в ловушку" << endl;
	cout << "2: Вызвать на разбоки" << endl;
	cout << "3: Откупиться" << endl;
}

void Text::Level2::ChooseTrap()
{
	cout << "Благодаря недавним событиям у вас появился козырь, " <<
		"теперь вы можете надавить на врага мелкими сошками! Как вы хотите это сделать?" << endl;
	cout << "1: Сдать одного поддельного дельца фараонам под видом человекаа Пачино" << endl;
	cout << "2: Слить в массы отравленный товар , под видом картеля Пачино" << endl;
}

void Text::Level2::Trap1()
{
	cout << "К сожаленю, ваш человек оказался ненадежным и выдал вас. Ваше влияние упало на 15%" << endl;
}

void Text::Level2::Trap2()
{
	cout << "Ваш план удался и сила противника упала на 20%. Можно преступать к бою!" << endl;
}

void Text::Level2::AttackPlace()
{
	cout << "Выберете место схватки:" << endl;
	cout << "1: Ресторан на окрание города" << endl;
	cout << "2: Пустыня" << endl;
	cout << "3: ЖД Вокзал" << endl;
}

void Text::Level2::PeopleAttack()
{
	cout << "\nСколько ребят возьмете на дело?" << endl;
	cout << "1: 4 лучших наёмника = $800" << endl;
	cout << "2: 6 лучших ребят = $1200" << endl;
	cout << "3: 8 лучших ребят = $1600" << endl;
}

void Text::Level2::Restaurant()
{
	cout << "Встреча пройдет в ресторане Memento Mori, на окраине города. Как принято в данной среде," <<
		" в нем будут только вы и ваши оппоненты. Шанс засветиться минимальный." << endl;
}

void Text::Level2::Station()
{
	cout << "Как бы вы не хотели смешаться с толпой, любая перестрелка в таком месте," <<
		" это сразу -20% к вашему влиянию. Единственный способ это избежать, попытаться договориться." << endl;
}

void Text::Level2::Desert()
{
	cout << "Хорошее место для встреч такого рода! Вы  знаете толк в таких делах!" << endl;
}

void Text::Level2::StrategyAttack()
{
	cout << "\nВыберете стратегию для своих людей:" << endl;
	cout << "1: Нападение" << endl;
	cout << "2: Защита" << endl;
}

void Text::Level2::AttackFirst()
{
	cout << "Атаковав первым, вы выиграли время и сразу отняли у противника 20HP.  Потратив на это 2 патрона.  " << endl;
}

void Text::Level2::Defence()
{
	cout << "Ваше решение привело к тому, что противник возымел численное превосходство. " <<
		"Убито 2 ваших людей(-15НР). Но все же ваши ребята убили 1 из людей Пачино(-10НР)." << endl;
}

void Text::Level2::ContinueStrat()
{
	cout << "Как продолжите действовать?" << endl;
	cout << "1: Использовать гранату (если есть)" << endl;
	cout << "2: Продолжать стрелять" << endl;
}

void Text::Level2::ifGrenade()
{
	cout << "В ходе перестрелки 1 из ваших людей бросил гранату, она уничтожила сразу несколько " <<
		" людей вашего врага, понизив его силы еще на 20HP." << endl;
}

void Text::Level2::ifGuns()
{
	cout << "В ходе перестрелки 1 из ваших людей мастерски убил еще 2 противников, Сила врага на исходе." << endl;
}

void Text::Level2::FinalPart()
{
	cout << "Силы врага на исходе. В живых остались лишь Аль Пачино  и 2 его охранника. " <<
		"Как вы хотите с ними разобраться?" << endl;
	cout << "1: Просто застрелить их. Так к вам возникнет меньше подозрений со стороны властей, то есть ваше влияние не снизиться." << endl;
	cout << "2: Жестоко расправиться с ними. Ваше влияние снизиться(-10%), так как власти активнее начнут искать виновных. (- 1 граната)" << endl;
}

void Text::Level2::WinL2()
{
	cout << "\nПабло:\n Поздравляю с очередной победой мистер Корлеоне. Теперь в нашем " <<
		"распоряжении все точки и люди Пачино. Я разузнаю были ли картеля какие-то разработки." <<
		" Ваша награда: +2000$, +10% влияния и +20% силы картеля!" << endl;
}

void Text::Level2::WinL2Short()
{
	cout << "\nПабло:\nПоздравляю, вы удачно спланировали данную операцию, теперь другие картели начнут вас " <<
		"опасаться и ваши влияние возросло на 20%. Не стоит забывать про выручку Пачино, которая " <<
		"отныне принадлежит вам. Можете собой гордиться, в вашей жизни началась золотая полоса." <<
		" Ваша награда: +2000$ и +20% силы картеля. Я разузнаю были ли картеля какие-то разработки." << endl;
}


// Уровень 3
void Text::Level3::HelloPablo3()
{
	cout << "\nПабло:\nМистер Корлеоне, я узнал о секретной лаборатории Пачино, в ней разрабатывают " <<
		"новое психотропное вещество, вызывающее мгновенное привыкание. К сожалению, люди которые " <<
		" рассказали мне об этом, расскажут больше только при личной встречи с вами." << endl;
	cout << "\nСогласитесь ли вы на встречу?" << endl;
	cout << "1: Встреча состоится" << endl;
	cout << "2: Это блеф, чтобы убить меня, поэтлму нет" << endl;
}

void Text::Level3::Refusal()
{
	cout << "Мистер Корлеоне, вы понимаете о какой власти и деньгах идет речь, " <<
		"наш картель просто не может упустить такой шанс!" << endl;
	cout << "1: Пересмотреть своё решение" << endl;
	cout << "2: Я сказал нет!" << endl;
}

void Text::Level3::LoseRefusal()
{
	cout << "Ваше решение стало рокавым! Спустя несколько лет ваш картель так и остался среднем по величине." <<
		" А спустя еще 5 лет вас убьют во время перестрелки." << endl;
}

void Text::Level3::Meeting()
{
	cout << "\nВечеров в вашу резиденцию в Мехико приехала красивая женщина. Она представилась как Марго," <<
		" все в ней говорило о сильном волевом характере, вы поняли что страсть с 1 взгляда." << endl;

	cout << "\nЗа ужином Марго поведала о причине по которой она выдает данный секрет. Оказалось, что " <<
		"Пачино изнасиловал и дерзало ее в своем доме против воли. Говоря об этом девушка ели " <<
		"сдерживала слезы. Так вы решили утешить ее. С того дня она живет в вашем доме." << endl;

	cout << "\nВы отправили своих людей в лабораторную. Ваши люди разведали предполагаемую территорию" <<
		" и поняли, что если лаборатория и есть то вход на нее осуществляется через прачечную." << endl;

	cout << "Как прикажете исследовать прачечную?" << endl;
	cout << "1: Заслать бандитов = $1200" << endl;
	cout << "2: Заслать шпиона = $700" << endl;
}

void Text::Level3::Spy()
{
	cout << "Ваш человек сказал, что у входа в подвал стоят подозрительные люди. Как вы поступите?" << endl;
	cout << "1: Проследить, когда они отвлекутся и проникнуть внутрь" << endl;
	cout << "2: Cпросить у них, кто они и что тут делают" << endl;
}

void Text::Level3::StupedSpy()
{
	cout << "Наивно было полагать, что они вам ответят. Ваш шпион провалился, придеться атаковать." << endl;
}

void Text::Level3::CleverSpy()
{
	cout << "Ваш человек смог проскользнуть мимо охраны и подсмотреть, что происходит. " <<
		"Всего на вашем  пути 2 охранника. Как будуте действовать?" << endl;
	cout << "1: Атаковать = $700" << endl;
	cout << "2: Устроить засаду" << endl;
}

void Text::Level3::CleverSpy2()
{
	cout << "Шпион дождался, когда охранники отвлекутся и убрал их по одиночке (-6 патрона)!" << endl;
}

void Text::Level3::Strategy3()
{
	cout << "Войдя в здание перестрелку с вам начали люди стоящие у входа в подвал. Ваши действия:" << endl;
	cout << "1: Расстрелять их (-6 патрона)" << endl;
	cout << "2: Бросить в них гранаты (если есть)" << endl;
}

void Text::Level3::Laboratory()
{
	cout << "Ваши люди спускаются в подвал и видят там ученых делающих какие-то красные кристаллы." << endl;
	cout << "Как поступите с учёными?" << endl;
	cout << "1: Взять их в плен и скрыться" << endl;
	cout << "2: Убить всех" << endl;
}

void Text::Level3::KillScientists()
{
	cout << "Вы лишили себя доступа к производству мега наркотика! \n" <<
		"Вы так и не станете авторитетом и в конце концов вас прикроют фараоны" << endl;
}

void Text::Level3::KidnapScientists()
{
	cout << "Со страху ученые поведали вам о новом наркотике 'Красный лед'. Вы предложили " <<
		"им производить его для вас за очень хорошие деньги и наилучшие условия труда." << endl;
	cout << "Выберете лабораторию, где будет производиться наркотик:" << endl;
	cout << "1: Пошарпанная лаборатория в подвале забегаловки = $1500\nИз - за условий качество наркотика может ухидшиться" << endl;
	cout << "2: Новейшая лаборатория, с лучшим оборудованием и вытяжками, под землей в пустыне = $3000" << endl;
}

void Text::Level3::WinCheap()
{
	cout << "Поздравляю, ваше могущество возроло! Выручка с каждого последующего уровня: $1000 за продажу льдя" << endl;
}

void Text::Level3::WinExpensive()
{
	cout << "Поздравляю, ваше могущество возроло! Выручка с каждого последующего уровня: $2000 за продажу льдя" << endl;
}


// Уровень 4
void Text::Level4::HelloPablo4()
{
	cout << "Мистер Корлеоне, недавние наши действия привлекли внимание властей. " <<
		"Купленные полицейские сказали, что на нас готовят рейд. Как мы будем справляться с этой проблемой?" << endl;
	cout << "1: Подготовиться к обыску" << endl;
	cout << "2: Подкупить полицию" << endl;
	cout << "3: Бой с полицией" << endl;
}

void Text::Level4::BuyOff()
{
	cout << "К сожалению, не все в этом мире можно купить, и человека дававшего взятку " <<
		"задержали. Так фараоны окончательно вышли на вас и посадили вас." << endl;
}

void Text::Level4::Peaceful()
{
	cout << "Для начала нужно подготовить офис к обыску. Как будете действовать?" << endl;
	cout << "1: Перевести деньги на офшорные счета" << endl;
	cout << "2: Спрятать деньги под полом в офисе" << endl;
}

void Text::Level4::Peaceful2()
{
	cout << "Что делать с оружием?" << endl;
	cout << "1: Закопать оружие в пустыне" << endl;
	cout << "2: Спрятать в лаборатории" << endl;
}

void Text::Level4::WinPolice()
{
	cout << "Через 2 дня прошёл обыск, у вас ничего не нашли. Дело закрыли за неимением доказательств!" << endl;
	cout << "Вы спасены! У вас талант избегать неприятности. Также ваш новый наркотик хорошо продается и " <<
		"приносит вам больше прибыли чем ожидалось(+2500$). Ваш бизнес разросся до таких размеров, " <<
		"что стал конкурировать с главным картелем страны." << endl;
}

void Text::Level4::AttackPolice()
{
	cout << "Какую стратегию вы предпочтете?" << endl;
	cout << "1: Заманить фараонов в ловушку" << endl;
	cout << "2: Дождаться рейда" << endl;
}

void Text::Level4::Search()
{
	cout << "Какой ваш следующий шаг?" << endl;
	cout << "1: Подготовиться к рейду" << endl;
	cout << "2: Взять фараоны силой без подготовки" << endl;
}

void Text::Level4::Fight()
{
	cout << "Спустя  3 дня в ваш офис заявились полицейские. Началась перестрелка, в ходе которой " <<
		"всех ваших людей убили, а вы загремели в тюрьму" << endl;
}

void Text::Level4::Warning()
{
	cout << "Внимание! Для продолжения вам понадобятся гранаты или рпг" << endl;
}

void Text::Level4::Trap()
{
	cout << "В качестве ловушки вы с командой выбрали один из ангаров, в которых храниться товар, " <<
		"и где якобы должна состояться ваша встреча с главой другого картеля." << endl;
	cout << "Фараоны приехали в назначенное время и расположились в ангаре рядом предполагаемым " <<
		"местом встречи. Как уничтожить врага?" << endl;
	cout << "1: Взорвать ангар из РПГ" << endl;
	cout << "2: Подорвать заранее заложенные гранаты" << endl;
}

void Text::Level4::PoliceWin()
{
	cout << "Вы справились с ментами, но ваша выходка спровоцировала охоту за вашей головой. Вскоре люди из ФБР и ЦРУ нашли вас!" << endl;
}


// Уровень 5
void Text::Level5::HelloPablo5()
{
	cout << "Мистер Корлеоне, ваш успех не остался не замеченным, теперь вам предстоит последний этап," <<
		" выстоять против картеля Эль Чапо. Сейчас он главный человек в нашем бизнесе и победа над ним," <<
		" дает неограниченную власть в нашем деле." << endl;
	cout << "Как будете решать проблему?" << endl;
	cout << "1: Предложить встречу мистеру Чапо" << endl;
	cout << "2: Придумать план атаки" << endl;
}

void Text::Level5::Meeting()
{
	cout << "В знак уважения к хозяину вы согласились провести встречу в доме Эль Чапо. Он выглядел как " <<
		"деловой человек, совсем не похожий на остальных ваших конкурентов. Во время встречи вы обсуждали " <<
		"сферы влияния друг друга. По мнению Эль Чапо единственный выход уладить все мирно, это отдать ему " <<
		"производство Красного льда." << endl;
	cout << "1: Согласиться" << endl;
	cout << "2: Отказаться" << endl;
}

void Text::Level5::AttackChapo()
{
	cout << "Выберете стратегию:" << endl;
	cout << "1: Предложить другому картелю объединиться, чтобы сместить общего врага" << endl;
	cout << "2: Дать полиции ложный след на Чаппо" << endl;
	cout << "3: Объявить войну" << endl;
}

void Text::Level5::Trap()
{
	cout << "Вы использовали уже проверенный метод, некачественный наркотик, но к сожалению, " <<
		"у Чапо есть связи в полиции и дело замяли." << endl;
}

void Text::Level5::Friend()
{
	cout << "Ваши устроили встречу с Родриго, он немного слабее вас, но сильно страдает от Чапо. " <<
		"Как именно вы предложите ему объединиться?" << endl;
	cout << "1: Предложить 30% бизнеса Чапо в случаи победы и вечный мир с вашим картелем." << endl;
	cout << "2: Предложить вечную дружбу" << endl;
	cout << "3: Угрожать" << endl;
}

void Text::Level5::AttackPlane()
{
	cout << " Пора перейти к плану атаки. Cколько людей будет учавстовать?" << endl;
	cout << "1: Задействовать все имеющиеся силы" << endl;
	cout << "2: Задействовать часть ресурсов" << endl;
}

void Text::Level5::AttackPlane2()
{
	cout << "Выберете стратегию:" << endl;
	cout << "1: Заманить в ловушку" << endl;
	cout << "2: Лобовая атака" << endl;
}

void Text::Level5::TrapStrategy()
{
	cout << "Выберете подходящую ловушку:" << endl;
	cout << "1: Использовать Марго" << endl;
	cout << "2: Предложить встречу на нейтральной территории" << endl;
	cout << "3: Установить слежку за Чапо" << endl;
}

void Text::Level5::TrapMargo()
{
	cout << "Марго не пришлось втираться в доверие к Чапо ведь она была его двоюродной сестрой, " <<
		"которую тот отдал в лапы Пачино в качестве мира. Так заа ужином девушка узнала, что завтра " <<
		"в 16 часов Чапо поедет навестить отца в дом престарелых. Но есть проблема он возьмет с собой Марго" << endl;
	cout << "Убьете ли вы Марго, чтобы стать королем или любовь сильнее" << endl;
	cout << "1: Убить Марго и Чапо" << endl;
	cout << "2: Любовь сильнее. Аттаковать" << endl;
}

void Text::Level5::DeathMargo()
{
	cout << "Выберете способ убийства:" << endl;
	cout << "1: Уничтожить машину из РПГ(-5 РПГ)" << endl;
	cout << "2: Уничтожить машину гранатами (-10 гранаты)" << endl;
	cout << "3: Растрелять машину (-20 патронов)" << endl;
}

void Text::Level5::WinSad()
{
	cout << "Поздравлю, мистер Корлеоне, вы стали главой самого могущественного картеля в  мире! " <<
		"Но какой ценой, вы лишили себя самого главного - любви!" << endl;
}

void Text::Level5::NeutralPlace()
{
	cout << "Выберете место встречи:" << endl;
	cout << "1: Пустыня" << endl;
	cout << "2: Ресторан" << endl;
}

void Text::Level5::NeutralPlace2()
{
	cout << "Выберете план атаки:" << endl;
	cout << "1: Расставить снайперов" << endl;
	cout << "2: Снайперы + Пехота" << endl;
}

void Text::Level5::War()
{
	cout << "Как только Чапо приехал на встречу и начал выходить из машины, то ваши люди начали" <<
		" сразу же стрелять по нему. К сожалению, это был подставной человек! Теперь Чапо объявляет вам войну" << endl;
}

void Text::Level5::Surveillance()
{
	cout << "Последив за Чапо несколько дней, ваши шпионы узнали его распорядок дня . И завтра в " <<
		"16 часов он поедет навестить своего отца в дом престарелых. Это отличный шанс избавиться от него" << endl;
	cout << "Выберете способ убийства:" << endl;
	cout << "1: Уничтожить машину из РПГ(-5 РПГ)" << endl;
	cout << "2: Уничтожить машину гранатами (-10 гранаты)" << endl;
	cout << "3: Растрелять машину (-20 патронов)" << endl;
}

void Text::Level5::WinShort()
{
	cout << "Поздравлю, мистер Корлеоне, вы стали главой самого могущественного картеля в  мире!" << endl;
}
// cout << "" << endl;
void Text::Level5::AttackStartegy()
{
	cout << "Выбрать место финальной схватки:" << endl;
	cout << "1: Пустыня" << endl;
	cout << "2: Ресторан на окраине города" << endl;
}

void Text::Level5::AttackStartegy2()
{
	cout << "Выберете план атаки::" << endl;
	cout << "1: Расставить снайперов" << endl;
	cout << "2: Снайперы + Пехота" << endl;
}

void Text::Level5::AttackStartegy3()
{
	cout << "Выберете стратегию:" << endl;
	cout << "1: Защита" << endl;
	cout << "2: Атака" << endl;
}

void Text::Level5::ifDefense()
{
	cout << "Из-за неправильно выбранной тактики вы теряете нескольких ребят. Но силы еще есть. " <<
		"Снайперам удалось убить 4 человек, включая 1 из охранников Чапо" << endl;
}

void Text::Level5::ifAttack()
{
	cout << "Вы выбрали правильную стратегию, поэтому ваши люди имели временное превосходство" <<
		" и успели убить сразу же нескольких людей Чапо, включая 1 из его охраников" << endl;
}

void Text::Level5::HowContiniue()
{
	cout << "Как продолжить действовать вашим людям?" << endl;
	cout << "1: Продолжить стрелять" << endl;
	cout << "2: Использовать РПГ" << endl;
	cout << "3: Использовать гранаты" << endl;
}
void Text::Level5::PoorPreparation()
{
	cout << "Из - за вашего халатного подхода к подготовке, вас уничтожили" << endl;
}
void Text::Level5::ifPatrons()
{
	cout << "Люди Чапо использовали рпг и гранаты  и уничтожил вас" << endl;
}

void Text::Level5::RPGorGrenade()
{
	cout << "Вы значительно повредили силы врага, у вас есть шансы победить. Какое следующее решенеие." << endl;
	cout << "Как продолжить защиту вашим людям?" << endl;
	cout << "1: Стрелять" << endl;
	cout << "2: Использовать гранаты" << endl;
	cout << "3: Использовать РПГ х2" << endl;
}

void Text::Level5::NoRPG()
{
	cout << "Ваши методы не эффективны, вас иничтожили" << endl;
}

void Text::Level5::WinFinal()
{
	cout << "Враг повержен! Поздравлю, мистер Корлеоне, вы доказали свое могущество! Теперь вы самый могущественный глава картеля в мире." << endl;
}
