
#include <iostream>

//HYPERPARAMETERS
int MESH_FACE_SHAPE = 3; // 3 means triangles are being used in the mesh

struct camera {
    //A structure that contains all the data for a camera
    int fov[2];
    int resolution[2];
    int location[3];
    int direction[2];
    int view_distance;
};

struct structure {
    //A structure that contains all the data for a mesh 
    int verticies[][3];
    int faces[][MESH_FACE_SHAPE];
    int center[3];
};


int main() {
    camera cam1;
    cam1 = (camera){{4,5},{3,2},{1,1,1},{1,2},5};
    std::cout << cam1.view_distance;
    return 0;
}


