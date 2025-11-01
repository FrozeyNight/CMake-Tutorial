#include <iostream>
#include <GLFW/glfw3.h>
#include <mainConfig.h>

int main(int argc, char* argv[]){
	std::cout << "Hello, World!\n";

    // argv[0] will always be the name of the program
    std::cout << argv[0] << " Version " << MAIN_VERSION_MAJOR << "." << MAIN_VERSION_MINOR << '\n';

	GLFWwindow *window;

	if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }

    window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
    if (!window)
    {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
        exit( EXIT_FAILURE );
    }

	// Main loop
    while( !glfwWindowShouldClose(window) )
    {
        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();

	return 0;
}
