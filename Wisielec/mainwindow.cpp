#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QString"
#include "cstdlib"
#include "time.h"

int level;
int life = 10;
int random = 0;
int yes = 0;
int record = 0;
int scr = 0;
QString last = NULL;

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
}

MainWindow::~MainWindow()
{
	delete ui;
}
class Words
{
public:
	QString ang, pol;
	Words(QString p, QString a) : pol(p), ang(a) {}
};
void words(Words **t)
{
	t[0] = new Words("KOTEK", "CAT");
	t[1] = new Words("PIES", "DOG");
	t[2] = new Words("LAS", "FOREST"); //LEV1
	t[3] = new Words("DRZEWO", "TREE");
	t[4] = new Words("JABŁKO", "APPLE");
	t[5] = new Words("JEŻYNA", "TIME");//LEV2
	t[6] = new Words("LALKA", "DOLLY");
	t[7] = new Words("SKARPETA", "SOCK");
	t[8] = new Words("KWIATKI", "FLOWERS"); //LEV3
	t[9] = new Words("OKULARY", "GLASSES");
	t[10] = new Words("KALENDARZ", "CALLENDAR");
	t[11] = new Words("ŻURAWIE", "CRANES"); //LEV4
	t[12] = new Words("KREWETKI", "PRAWNS");
	t[13] = new Words("MAKIJAŻ", "FRIDGE");
	t[14] = new Words("WĄTROBA", "CUCUMBER"); //LEV5
	t[15] = new Words("SAMOCHÓD", "CABBAGE");
	t[16] = new Words("BALETNICA", "PINEAPPLE");
	t[17] = new Words("HYDRAULIK", "PLUMBER"); //LEV6
	t[18] = new Words("SABOTAŻ", "ENGINEER");
	t[19] = new Words("SZEZLONG", "AEROPLANE");
	t[20] = new Words("BRUKSELKA", "TROUSERS"); //LEV7
	t[21] = new Words("MARYNARZ", "MARRIAGE");
	t[22] = new Words("INŻYNIER", "BLACKBERRY");
	t[23] = new Words("HELIKOPTER", "UNEXPECTED"); //LEV8
	t[24] = new Words("MAŁŻEŃSTWO", "DIFFERENT");
	t[25] = new Words("WRZECIONO", "WARDROBE");
	t[26] = new Words("BAKŁAŻAN", "BEHAVIOUR"); //LEV9
	t[27] = new Words("CHRZĄSZCZ", "HANGOVER");
	t[28] = new Words("RÓŻDŻKA", "TERRIFYING");
	t[29] = new Words("RZEŻUCHA", "EQUALITY"); //LEV10
}
void MainWindow::on_start_clicked()
{
	yes = 0;
	life = 10;
	level = 1;
	scr = 0;
	last = "";
	MainWindow::clear();
	rnd(1);
	MainWindow::cross(random);
	ui->level->setText(QString::number(level));
	ui->life->setText(QString::number(life));
	ui->comunicate->setText(QString("WŁĄCZ CAPS LOCKA"));
	ui->score->setText(QString::number(0));
	ui->record->setText(QString::number(record));
}
void MainWindow::cross(int random)
{
	int empty, length;
	Words *t[30];
	words(t);
	QString lang(ui->lang->currentText());

	if (lang == "POLSKI")
	{
		length = t[random]->pol.length();
		empty = 10 - length;
		switch (empty) {
		case 0:
			break;
		case 1:
			ui->alpha10->setText(QString("X"));
			break;
		case 2:
			ui->alpha10->setText(QString("X"));
			ui->alpha9->setText(QString("X"));
			break;
		case 3:
			ui->alpha10->setText(QString("X"));
			ui->alpha9->setText(QString("X"));
			ui->alpha8->setText(QString("X"));
			break;
		case 4:
			ui->alpha10->setText(QString("X"));
			ui->alpha9->setText(QString("X"));
			ui->alpha8->setText(QString("X"));
			ui->alpha7->setText(QString("X"));
			break;
		case 5:
			ui->alpha10->setText(QString("X"));
			ui->alpha9->setText(QString("X"));
			ui->alpha8->setText(QString("X"));
			ui->alpha7->setText(QString("X"));
			ui->alpha6->setText(QString("X"));
			break;
		case 6:
			ui->alpha10->setText(QString("X"));
			ui->alpha9->setText(QString("X"));
			ui->alpha8->setText(QString("X"));
			ui->alpha7->setText(QString("X"));
			ui->alpha6->setText(QString("X"));
			ui->alpha5->setText(QString("X"));
			break;
		case 7:
			ui->alpha10->setText(QString("X"));
			ui->alpha9->setText(QString("X"));
			ui->alpha8->setText(QString("X"));
			ui->alpha7->setText(QString("X"));
			ui->alpha6->setText(QString("X"));
			ui->alpha5->setText(QString("X"));
			ui->alpha4->setText(QString("X"));
			break;
		}
	}

	if (lang == "ANGIELSKI")
	{
		length = t[random]->ang.length();
		empty = 10 - length;

		switch (empty) {
		case 0:
			break;
		case 1:
			ui->alpha10->setText(QString("X"));
			break;
		case 2:
			ui->alpha10->setText(QString("X"));
			ui->alpha9->setText(QString("X"));
			break;
		case 3:
			ui->alpha10->setText(QString("X"));
			ui->alpha9->setText(QString("X"));
			ui->alpha8->setText(QString("X"));
			break;
		case 4:
			ui->alpha10->setText(QString("X"));
			ui->alpha9->setText(QString("X"));
			ui->alpha8->setText(QString("X"));
			ui->alpha7->setText(QString("X"));
			break;
		case 5:
			ui->alpha10->setText(QString("X"));
			ui->alpha9->setText(QString("X"));
			ui->alpha8->setText(QString("X"));
			ui->alpha7->setText(QString("X"));
			ui->alpha6->setText(QString("X"));
			break;
		case 6:
			ui->alpha10->setText(QString("X"));
			ui->alpha9->setText(QString("X"));
			ui->alpha8->setText(QString("X"));
			ui->alpha7->setText(QString("X"));
			ui->alpha6->setText(QString("X"));
			ui->alpha5->setText(QString("X"));
			break;
		case 7:
			ui->alpha10->setText(QString("X"));
			ui->alpha9->setText(QString("X"));
			ui->alpha8->setText(QString("X"));
			ui->alpha7->setText(QString("X"));
			ui->alpha6->setText(QString("X"));
			ui->alpha5->setText(QString("X"));
			ui->alpha4->setText(QString("X"));
			break;
		}
	}
}
void MainWindow::on_check_clicked()
{
	Words *t[30];
	words(t);
	int length, no = 0;
	QString alpha, x;
	bool yesorno;

	if (life == 0)
	{
		ui->comunicate->setText(QString("KONIEC GRY! WCISNIJ START ZEBY ZAGRAĆ JESZCZE RAZ"));
	}
	else {
		QString language(ui->lang->currentText());

		if (language == "POLSKI")
		{
			length = t[random]->pol.length();

			if (life > 0)
			{
				alpha = ui->add->text();

				for (int i = 0; i < length; i++)
				{
					x = ((t[random]->pol)[i]);

					if (alpha == x)
					{
						yesorno = true;
						++yes;
						ui->comunicate->setText(QString("TRAFIONY!"));
					}
					else
					{
						yesorno = false;
						++no;
					}
					if (yesorno == true)
					{
						switch (i + 1) {
						case 1:
							ui->alpha1->setText(QString((t[random]->pol)[i])); break;
						case 2:
							ui->alpha2->setText(QString((t[random]->pol)[i])); break;
						case 3:
							ui->alpha3->setText(QString((t[random]->pol)[i])); break;
						case 4:
							ui->alpha4->setText(QString((t[random]->pol)[i])); break;
						case 5:
							ui->alpha5->setText(QString((t[random]->pol)[i])); break;
						case 6:
							ui->alpha6->setText(QString((t[random]->pol)[i])); break;
						case 7:
							ui->alpha7->setText(QString((t[random]->pol)[i])); break;
						case 8:
							ui->alpha8->setText(QString((t[random]->pol)[i])); break;
						case 9:
							ui->alpha9->setText(QString((t[random]->pol)[i])); break;
						case 10:
							ui->alpha10->setText(QString((t[random]->pol)[i])); break;
						}
					}
				}
			}
			last += alpha;
			ui->lastletters->setText(QString(last));

			if (no == length)
			{
				ui->comunicate->setText(QString("PUDŁO!"));
				life--;
				ui->life->setText(QString::number(life));
			}
			if (yes == length)
			{
				level++;
				if (level > 10) ui->comunicate->setText(QString("KONIEC GRY! WCISNIJ START ZEBY ZAGRAĆ JESZCZE RAZ"));
				else {
					ui->score->setText(QString::number(MainWindow::score(level, length, life)));
					yes = 0;
					life = 10;
					last = "";
					ui->life->setText(QString::number(life));
					ui->level->setText(QString::number(level));
					ui->comunicate->setText(QString("DOBRZE! HASŁO: " + t[random]->pol));
					MainWindow::clear();
					rnd(level);
					no = 0;
				}
			}
		}
		if (language == "ANGIELSKI")
		{
			length = t[random]->ang.length();

			if (life > 0)
			{
				alpha = ui->add->text();
				for (int i = 0; i < length; i++)
				{
					x = ((t[random]->ang)[i]);

					if (alpha == x)
					{
						yesorno = true;
						++yes;
						ui->comunicate->setText(QString("TRAFIONY!"));
					}
					else
					{
						yesorno = false;
						++no;
					}
					if (yesorno == true)
					{
						switch (i + 1) {
						case 1:
							ui->alpha1->setText(QString((t[random]->ang)[i])); break;
						case 2:
							ui->alpha2->setText(QString((t[random]->ang)[i])); break;
						case 3:
							ui->alpha3->setText(QString((t[random]->ang)[i])); break;
						case 4:
							ui->alpha4->setText(QString((t[random]->ang)[i])); break;
						case 5:
							ui->alpha5->setText(QString((t[random]->ang)[i])); break;
						case 6:
							ui->alpha6->setText(QString((t[random]->ang)[i])); break;
						case 7:
							ui->alpha7->setText(QString((t[random]->ang)[i])); break;
						case 8:
							ui->alpha8->setText(QString((t[random]->ang)[i])); break;
						case 9:
							ui->alpha9->setText(QString((t[random]->ang)[i])); break;
						case 10:
							ui->alpha10->setText(QString((t[random]->ang)[i])); break;
						}
					}
				}
			}
			last += alpha;
			ui->lastletters->setText(QString(last));

			if (no == length)
			{
				ui->comunicate->setText(QString("PUDŁO!"));
				life--;
				ui->life->setText(QString::number(life));
			}
			if (yes == length)
			{
				level++;
				if (level > 10)ui->comunicate->setText(QString("KONIEC GRY! WCISNIJ START ZEBY ZAGRAĆ JESZCZE RAZ"));
				else {
					ui->score->setText(QString::number(MainWindow::score(level, length, life)));
					yes = 0;
					life = 10;
					last = "";
					ui->life->setText(QString::number(life));
					ui->level->setText(QString::number(level));
					ui->comunicate->setText(QString("DOBRZE! HASŁO: " + t[random]->ang));
					MainWindow::clear();
					rnd(level);
					no = 0;
				}
			}
		}
		ui->add->clear();

		if (life == 0)
		{
			ui->comunicate->setText(QString("KONIEC GRY! WCISNIJ START ZEBY ZAGRAĆ PONOWNIE"));
			if (scr > record) record = scr;
			ui->record->setText(QString::number(record));
		}
	}
}
void MainWindow::rnd(int l)
{
	srand(time(NULL));
	if (l == 1) random = rand() % 3;
	else random = rand() % 3 + (l * 3 - 3);
	MainWindow::cross(random);
}
void MainWindow::clear()
{
	ui->alpha1->clear();
	ui->alpha2->clear();
	ui->alpha3->clear();
	ui->alpha4->clear();
	ui->alpha5->clear();
	ui->alpha6->clear();
	ui->alpha7->clear();
	ui->alpha8->clear();
	ui->alpha9->clear();
	ui->alpha10->clear();
	ui->lastletters->clear();
}
int MainWindow::score(int lev, int len, int li)
{
	scr += ((2 * lev*len) - (10 - li));
	return scr;
}
