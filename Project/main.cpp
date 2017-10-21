/*
MIT License

Copyright (c) 2017 Alex Chuoy
c
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#include <gtkmm.h>
#include <iostream>

/*void on_button_clicked(){
  std::cout << "Button clicked" << std::flush;
}*/

int main(int argc, char *argv[])
{
  auto app =  Gtk::Application::create(argc, argv);

  Glib::RefPtr<Gtk::Builder> builder = Gtk::Builder::create_from_file("Test.glade");
  Gtk::Window* mainWindow = nullptr;
  builder->get_widget("Home", mainWindow);

  /*Gtk::Button* pButton = nullptr;
  builder->get_widget("btn_message", pButton);
  pButton->signal_clicked().connect( sigc::ptr_fun(on_button_clicked) );*/

  return app->run(*mainWindow);
}
