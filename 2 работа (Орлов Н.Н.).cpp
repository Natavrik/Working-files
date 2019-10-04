    #include <iostream>
    #include <Windows.h>
    #include <stdio.h>
    #include <stdlib.h>
    using namespace std;

    class Authors
    {
    private:
        int  ID_painter;
        string FIO_painter;
    public:
        Authors(int ID_painter, string FIO_painter)
        {
            this -> ID_painter = ID_painter;
            this -> FIO_painter = FIO_painter;
        }
        Authors(int ID_painter)
        {
            this->ID_painter = ID_painter;
        }

        int getID_painter() {return ID_painter;}
        void show() { cout <<"\t" << ID_painter <<"\t\t"<< FIO_painter << endl; }

    };
    void show(Authors* a, int n)
    {
        cout << "Идентификационный №     ФИО художника\n\n";
            for (int i = 0; i < n; i++)
            {
                a[i].show();
            }
    }






    class Sections
    {
    private:
            int  NUM_section;
        string Section_Title;
    public:
        Sections(int NUM_section, string Section_Title)
        {
            this -> NUM_section = NUM_section;
            this -> Section_Title = Section_Title;
        }
        Sections(int NUM_section)
        {
            this->NUM_section=NUM_section;
        }
        int getNUM_section() {return NUM_section;}
        void show(){cout << "    " << NUM_section << "\t\t" << Section_Title << endl; }
    };
    void show(Sections* s, int n)
    {
        cout << "№ раздела\tНазвание раздела\n\n";
            for (int i = 0; i < n; i++)
            {
                s[i].show();
            }
    }






    class Pictures
    {
    private:
        int NUM_picture;
        string Picture_Title;
        Authors *ID_painterPic;
        Sections *NUM_sectionPic;
        string Technics;
        string Size_picture;
        int Cost;
    public:
        Pictures(int NUM_picture, string Picture_Title, Authors *ID_painterPic, Sections *NUM_sectionPic, string Technics, string Size_picture, int Cost)
        {
            this->NUM_picture = NUM_picture;
            this->Picture_Title = Picture_Title;
            this->ID_painterPic = ID_painterPic;
            this->NUM_sectionPic = NUM_sectionPic;
            this->Technics = Technics;
            this->Size_picture = Size_picture;
            this->Cost = Cost;
        }
        Pictures(int NUM_picture)
        {
            this -> NUM_picture = NUM_picture;
        }
        void show() {
                     cout.width(20); cout << left << NUM_picture;
                     cout.width(25); cout << left << Picture_Title;
                     cout.width(20); cout << left << ID_painterPic -> getID_painter();
                     cout.width(20); cout << left << NUM_sectionPic -> getNUM_section();
                     cout.width(20); cout << left << Technics;
                     cout.width(20); cout << left << Size_picture;
                     cout.width(20); cout << left << Cost << endl;
                     }
    };

    void show(Pictures *p, int n)
    {
        cout << "№ картины\tНазвание картины\tИдентификационный №\t№ раздела\tТехника\t\tРазмеры картины\t\tСтоимость\n\n";
        for (int i = 0; i < n; i++)
        {
            p[i].show();
        }
    }



        int main()
        {
            setlocale(0, "");
            cout << "   Авторы:" << endl;
            Authors a[]
            {
                Authors(100, "Крупень С."),
                Authors(101, "Беляев Р.Х."),
                Authors(103, "Кручинкин Ю."),
                Authors(104, "Малевич П.")
            };
            show(a, 4);
            cout << "\n\n";
             cout << "   Разделы:" << endl;
            Sections s[]
            {
                Sections(10, "Городской пейзаж"),
                Sections(11, "Натюрморт")
            };
            show(s, 2);
            cout << "\n\n";
             cout << "   Картины:" << endl;
            Pictures p[]
            {
                Pictures(1001, "Даниловский монастырь", &a[1], &s[0], "Пастель", "40х50", 40000),
                Pictures(1002, "Весёлый денёк", &a[1], &s[1], "Масло, холст", "45х70", 15000),
                Pictures(1003, "Старая Москва", &a[2], &s[0], "Акварель", "30х60", 12000),
                Pictures(1004, "Старая Москва", &a[0], &s[0], "Масло, холст", "30х50", 20000),
                Pictures(1005, "Пионы", &a[0], &s[1], "Масло, холст", "80х70", 50000),
                Pictures(1006, "Таганский парк", &a[1], &s[0], "Акварель", "60х40", 25000)
            };
            show(p, 6);

            system("pause");
            return 0;
        }
