#include <QApplication>
#include "BibliographieInterface.h"


int
main (int argc, char *argv[])
{
  // initialize resources, if needed
  // Q_INIT_RESOURCE(resfile);

  QApplication app (argc, argv);

  // create and show your widgets here
  BibliographieInterface fenetrePrincipale;
  fenetrePrincipale.show ();

  return app.exec ();
}
