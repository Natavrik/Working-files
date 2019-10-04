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
        cout << "����������������� �     ��� ���������\n\n";
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
        cout << "� �������\t�������� �������\n\n";
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
        cout << "� �������\t�������� �������\t����������������� �\t� �������\t�������\t\t������� �������\t\t���������\n\n";
        for (int i = 0; i < n; i++)
        {
            p[i].show();
        }
    }



        int main()
        {
            setlocale(0, "");
            cout << "   ������:" << endl;
            Authors a[]
            {
                Authors(100, "������� �."),
                Authors(101, "������ �.�."),
                Authors(103, "��������� �."),
                Authors(104, "������� �.")
            };
            show(a, 4);
            cout << "\n\n";
             cout << "   �������:" << endl;
            Sections s[]
            {
                Sections(10, "��������� ������"),
                Sections(11, "���������")
            };
            show(s, 2);
            cout << "\n\n";
             cout << "   �������:" << endl;
            Pictures p[]
            {
                Pictures(1001, "����������� ���������", &a[1], &s[0], "�������", "40�50", 40000),
                Pictures(1002, "������ ����", &a[1], &s[1], "�����, �����", "45�70", 15000),
                Pictures(1003, "������ ������", &a[2], &s[0], "��������", "30�60", 12000),
                Pictures(1004, "������ ������", &a[0], &s[0], "�����, �����", "30�50", 20000),
                Pictures(1005, "�����", &a[0], &s[1], "�����, �����", "80�70", 50000),
                Pictures(1006, "��������� ����", &a[1], &s[0], "��������", "60�40", 25000)
            };
            show(p, 6);

            system("pause");
            return 0;
        }
